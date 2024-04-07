from setuptools import find_packages
from setuptools import setup

setup(
    name='rbl_message',
    version='0.0.0',
    packages=find_packages(
        include=('rbl_message', 'rbl_message.*')),
)
