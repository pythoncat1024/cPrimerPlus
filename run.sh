#! /bin/bash
echo "start to build now!"
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
cmake ../ 1>/dev/null
make 1>/dev/null
#clear # clear build outputs
echo "build finish!"
echo "execute this program:"
echo ""
./${PROJECT_NAME}
