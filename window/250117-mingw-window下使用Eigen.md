* 【【vscode+cmake+git实战系列】10 调用三方库-Eigen】 https://www.bilibili.com/video/BV1QC411V79x/?share_source=copy_web&vd_source=f5e7b5772ac4045022874a0cd2f8d08a

* 下载Eigen。https://eigen.tuxfamily.org/index.php?title=Main_Page
* 解压就可以,CMake这样写：
```
set(EIGEN3_INCLUDE_DIR "E:/cpp/eigen-3.4.0")
list(APPEND CMAKE_MODULE_PATH ${EIGEN3_INCLUDE_DIR}/cmake)
find_package(Eigen3 3.1.0 REQUIRED)
```