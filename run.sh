#!/usr/bin/env bash

# run.sh 将 CLion 的运行逻辑，用脚本执行
echo "start to build now!"
echo "current project path:"$(pwd)
BUILD_SH='build.sh'
PROJECT_PATH=$(pwd)
PROJECT_NAME=$(basename `pwd`)
echo "current project name:${PROJECT_NAME}"

# 清空{PROJECT}/build
build="cmake-build-debug"
TARGET=${PROJECT_NAME}
echo "target == "${TARGET}
if [[ -d ${build} ]] && [[ -x ./${build}"/"${TARGET} ]]
then
    # 说明已经编译过了，直接执行目标程序即可
    echo "start to execute this program:"
    echo ""
    cd ${PROJECT_PATH}
    ./${build}"/"${TARGET}
else
    echo "NEED build first"
    if [[ ! -x ${BUILD_SH} ]]
    then
        echo "${BUILD_SH} not exists"
    else
        cd ${PROJECT_PATH}
        ./${BUILD_SH}
        echo "start to execute this program:"
        ./${build}"/"${TARGET}
    fi
fi
cd ${PROJECT_PATH}
exit