#!/usr/bin/env bash
# build.sh 将 CLion 的编译逻辑，用脚本执行
echo "================ start to build now!"
echo "current project path:"$(pwd)
PROJECT_NAME=$(basename `pwd`)
echo "current project name:${PROJECT_NAME}"

# 清空{PROJECT}/build
build="cmake-build-debug"
if [[ ! -d ${build} ]]
then
    mkdir ${build}
else
    rm -rf ${build}
    mkdir ${build}
fi
# cmake and make
cd ${build}
cmake ../
make
#clear # clear build outputs
echo "=================== build finish!"

