import pybind11
from distutils.core import setup, Extension

ext_modules = [
    Extension(
        'relaxation',
        ['main.cpp'],
        include_dirs=[pybind11.get_include()],
        language='c++',
    ),
]

setup(
    name='relaxation',
    version='1.0.0',
    author='Debruine',
    description='Top Relaxation extension',
    ext_modules = ext_modules,
    requires=['pybind11']
)
