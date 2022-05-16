#!/bin/bash
exec 100>log.out
BASH_XTRACED=100
set -x

echo "Checking that git is installed"
git config --list >> /dev/null
if [ $? -ne 0 ]
then
    echo "Git is not installed, please install before continuing"
    exit 1;
fi

echo "cloning boost.test, GoogleTest and UnitTest++ from github if they do not already exist"
cd lib
if [ $(grep -a googletest | ls) && echo True || echo False]
then
    git clone https://github.com/google/googletest.git
fi