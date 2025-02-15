* 下载opencv，和cmake
* 【【无需配置JSON文件！】Windows下使用cmake和MinGW配置openCV(c++)环境】 https://www.bilibili.com/video/BV1Kt421b7Lo/?p=4&share_source=copy_web&vd_source=f5e7b5772ac4045022874a0cd2f8d08a
* 目前成功了，CMakeLists文件如下：
```
cmake_minimum_required(VERSION 3.10.0)
project(openimg)

# 设置 OpenCV 安装路径（修改为实际路径）很重要，window因为包路径经常出错
set(OpenCV_DIR "D:/cpp/opencv/build/x64/MinGW") # 这里是示例路径

# 查找 OpenCV 包
find_package(OpenCV REQUIRED)

# 输出找到的 OpenCV 版本和路径
message(STATUS "Found OpenCV: ${OpenCV_DIR}")
message(STATUS "OpenCV version: ${OpenCV_VERSION}")

# 包含 OpenCV 的头文件
include_directories(${OpenCV_INCLUDE_DIRS})

# 添加可执行文件
add_executable(openimg main.cpp)

# 链接 OpenCV 库
target_link_libraries(openimg ${OpenCV_LIBS})

```