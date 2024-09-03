# **Wen_ap**

> 相关视频：https://www.bilibili.com/video/BV1vmHke4EPR/

## 预览
![页面预览1](/src/1.png)
![页面预览2](/src/2.png)
  
## 初衷
本来是写了个固定WiFi信息的，但换个地方WiFi变动就没法用了，然后找不到合适的就自个写了一个哈！

> MadDogQQ交流群：591668872

## 功能
1.上电之后，判断是否已有连接成功的WiFi数据，有则自动连接。

2.没有WiFi数据或者连接失败则打开AP，供用户连接配网，并且亮灯的哈，连接成功后就灭掉了。

3.配网成功后保存WiFi数据用于断开或者重新上电自动连接。

## 使用
就三行代码，帮您解决配网问题，写进去之后，只需考虑您的功能逻辑代码即可！

#include "wen_ap.h" //导入Wen_WiFi配网

ap_init();// 启用WiFi配网

ap_serve();// WiFi配网服务

详细请看示例：test.ino 文件

WEB 页面未压缩的代码在src中！
