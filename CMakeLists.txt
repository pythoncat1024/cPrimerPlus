# 1 CMake 最低版本号要求
cmake_minimum_required(VERSION 3.7)
# 2 项目信息
project(cPoint)
# 3 编译支持度
set(CMAKE_C_STANDARD 11)
# 4 指定 .h 文件所在目录
include_directories(include)
# 5 查找指定目录下的所有源文件，然后将结果存进指定变量名
aux_source_directory(src DIR_SOURCES)
# 6. 定义变量 TARGET = "targetApp"; 未使用。因为 run.sh 里面也得定义相同的才行
set(TARGET "targetApp")
# 7 将源文件目录下的全部文件编译成指定生成目标
# 直接生成名为 ${PROJECT_NAME} 的目标文件
add_executable(${PROJECT_NAME} ${DIR_SOURCES})

# 8 编译模式为 debug ,否则 CLion 中无法断点
set(CMAKE_BUILD_TYPE Debug)
