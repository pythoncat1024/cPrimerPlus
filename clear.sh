#!/usr/bin/env bash

# clear.sh 用于清空 build.sh/run.sh/CLion 编译产生的任何文件或目录
echo "********************************************"
echo "start to clear build now!"
echo "current project path:"$(pwd)
PROJECT_NAME=$(basename `pwd`)
echo "current project name:${PROJECT_NAME}"

# 清空{PROJECT}/build
build="cmake-build-debug"
if [[ -d ${build} ]]
then
    rm -rf ${build}
fi
echo "clear build complete!"
echo "********************************************"
