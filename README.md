# cPrimerPlus
code for 《C和指针》

* Editor: Visual Studio Code (vscode)
* IDE: CLION
* CLion 中编译执行命令

```bash
mkdir -p cmake-build-debug
cd cmake-build-debug
cmake ../
make
```

> 与执行`build.sh`效果相同

* 对`build.sh`,`run.sh`,`clear.sh` 个脚本的说明

1. `build.sh` 仅编译，不执行
2. `run.sh` 如果没有编译，先编译再执行；否则直接执行
3. `clear.sh` 清空编译
