# chineseocr_lite 的 onnx 推理, 部署简单

## 原始项目分支（torch推理，ncnn推理等）：[master](https://github.com/ouyanghuiyu/chineseocr_lite/tree/master)

## 环境
- python3.6

- linux/macos/windows

## web服务启动
``` Bash
cd chineseocr_lite## 进入chineseocr目录
python backend/main.py 
```
## 在线体验(lite版本<模型还在训练中>，支持竖排，空格识别，文字行方向旋转)： http://ocr.timeline229.com:8089/

## 识别结果展示

<p align="center"><img src="test_imgs/res.jpg"\></p>
<p align="center"><img src="test_imgs/res_2.jpg"\></p>

## 参考
1. TrWebOCR https://github.com/alisen39/TrWebOCR         

## QQ群
994929053

### 以下范例项目是参考Python代码翻译为各种语言的Demo，仅供参考
** 注意：以下各种demo均相互独立，只是同一个程序的不同版本 **
#### **如果不想自己整合依赖库的话，以下8种demo的完整源码工程项目，请到QQ群共享里自行下载**
#### [C++ Demo](https://github.com/ouyanghuiyu/chineseocr_lite/tree/onnx/pc_projects)
* onnxruntime C++ demo，支持Windows、linux、macOS，目前仅支持cpu计算；
* ncnn C++ demo，支持Windows、linux、macOS，分为cpu版与gpu版，gpu版使用ncnn+vulkan来支持gpu加速；

#### [Jvm Demo](https://github.com/ouyanghuiyu/chineseocr_lite/tree/onnx/jvm_projects)
* onnxruntime jvm demo: 以onnxruntime C++为基础，编译成jni供java或kotlin调用；
* ncnn jvm demo: 以ncnn C++为基础，编译成jni供java或kotlin调用，同样分为cpu版与gpu版；

#### [Android Demo](https://github.com/ouyanghuiyu/chineseocr_lite/tree/onnx/android_projects)
* onnxruntime android demo: 以onnxruntime C++为基础，整合为一个独立的android模块供app调用；
* ncnn jvm android demo: 以ncnn C++为基础，整合为一个独立的android模块供app调用，同样分为cpu版与gpu版；

#### [.Net Demo](https://github.com/ouyanghuiyu/chineseocr_lite/tree/onnx/dotnet_projects)
* onnxruntime c# demo:  完全以C#编写的onnxruntime demo;
* onnxruntime vb.net demo: 完全以VB编写的onnxruntime demo;

### Android识别展示
<p align="center"><img src="test_imgs/android/detect_IMEI.gif"\></p>
<p align="center"><img src="test_imgs/android/detect_id_card.gif"\></p>
<p align="center"><img src="test_imgs/android/detect_plate.gif"\></p>

### .NetDemo识别展示
<p align="center"><img src="test_imgs/dotnet/OcrLiteOnnxCs.PNG"\></p>
