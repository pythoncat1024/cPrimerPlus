#!/usr/bin/env bash

function run {
    # 查找 ${build} 目录下可执行文件，并执行
    # shell 函数的参数也是通过 $@,$1,$2 这样获取的
    echo "start to execute this program now ####"
    echo ""
    echo "args in function run: $@"
    ./$@
}
# run.sh 将 CLion 的运行逻辑，用脚本执行
echo "start to build now!"
echo "current project path:"$(pwd)
BUILD_SH='build.sh'
PROJECT_PATH=$(pwd)
PROJECT_NAME=$(basename `pwd`)
APP="targetApp" # 生成的可执行文件的名称
echo "current project name:${PROJECT_NAME}"

# 清空{PROJECT}/build
build="cmake-build-debug"
TARGET=${PROJECT_NAME}
echo "target == "${TARGET}
if [[ -d ${build} ]] && [[ -x ./${build}"/"${TARGET} ]]
then
    # 说明已经编译过了，直接执行目标程序即可
    cd ${PROJECT_PATH}
    run ${build}/${APP} $@
else
    echo "NEED build first"
    if [[ ! -x ${BUILD_SH} ]]
    then
        echo "${BUILD_SH} not exists"
    else
        cd ${PROJECT_PATH}
        ./${BUILD_SH}
        run ${build}/${APP} $@
    fi
fi
cd ${PROJECT_PATH}
exit
