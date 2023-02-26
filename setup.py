from setuptools import setup
import distutils.command.build

class BuildCommand(distutils.command.build.build) :
	def initialize_options(self) :
		distutils.command.build.build.initialize_options(self)
		self.build_base = '_build'

setup(
  name='trs2junit',
  version='0.0.4',
  py_modules=['trs2junit'],
  entry_points={
    'console_scripts':[
      'trs2junit = trs2junit:main',
      'junit2jsonl = junit2jsonl:main',
    ]
  },
  data_files=[
    ('bin', ['test_wrapper'])
  ],
  cmdclass={"build": BuildCommand},
)

