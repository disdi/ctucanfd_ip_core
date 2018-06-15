import logging
from pathlib import Path
from .test_common import add_sources, TestsBase, dict_merge, vhdl_serialize

log = logging.getLogger(__name__)


class FeatureTests(TestsBase):
    def __init__(self, *args, **kwds):
        super().__init__(*args, **kwds)
        self._tests = self.config['tests'].keys()

    def add_sources(self) -> None:
        sources = ['feature/{}_feature_tb.vhd'.format(name) for name in self._tests]
        sources.append('feature/tb_feature.vhd')
        sources.append('feature/pkg_feature_exec_dispatch.vhd')
        add_sources(self.lib, sources)

        wrname = self.build / 'pkg_feature_exec_dispatch-body.vhd'
        self._create_wrapper(wrname)
        # add_sources(self.lib, [str(wrname)])
        self.lib.add_source_file(str(wrname))
        tb = self.lib.get_test_benches('*tb_feature')[0]
        tb.scan_tests_from_file(str(wrname))

    def configure(self) -> None:
        tb = self.lib.get_test_benches('*tb_feature')[0]
        default = self.config['default']
        self.add_modelsim_gui_file(tb, default, 'feature')
        for name, cfg in self.config['tests'].items():
            if cfg is None:
                cfg = dict()

            if 'wave' in cfg:
                log.warn('"wave" in feature test config {} is ignored' +
                         ' (set it in default instead)'.format(name))
            dict_merge(cfg, default)

            generics = {
                'timeout'      : cfg['timeout'],
                'iterations'   : cfg['iterations'],
                'log_level'    : cfg['log_level'] + '_l',
                'error_tol'    : cfg['error_tolerance'],
                'test_name'    : name
            }
            tb.add_config(name, generics=generics)

    def _create_wrapper(self, ofile: Path) -> None:
        template = self.jinja_env.get_template('pkg_feature_exec_dispath-body.vhd')
        c = template.render(tests=self._tests)
        with ofile.open('wt', encoding='utf-8') as f:
            f.write(c)
