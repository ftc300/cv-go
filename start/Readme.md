### Requirement
* Xcode
* VScode
* OpenCV source file
* brew install cmake

### 编译OpenCV的source file
```
cd opencv-4.0.1
mkdir build
cd build 
cmake -D CMAKE_BUILD_TYPE=RELEASE -D CMAKE_INSTALL_PREFIX=/usr/local .. #会生成一堆文件在build文件夹以及/usr/local文件夹
make # compile
sudo make install

```

### VScode配置

查看 - 命令面板 - C++:编辑配置
```
"includePath": [
                "${workspaceFolder}/**",
                "/usr/local/include/opencv4"
            ]

```

### cmake compile
在main.cpp所在目录新建一个文件CMakeLists.txt，指定编译时需要用的库
```
mkdir build #可自定义
cd build
cmake ..
```

### End

cpp代码写好之后，在build文件夹里面执行make就会编译cpp文件了。
这时候会生成一个可执行命令CV
```
./CV <image-path>
```
如无意外，会输出一个hello world同时显示图片。