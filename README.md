# WDProtobuflStudy
studying usage for native IM C/S message data inter-communication

**Features**
 * 二进制序列化数据的实现
 * 采用IDL(Interface Definition Language)
 * High Performance to de/serialisation
 * Flexible Extension Ability


**Very very simple Example here**

![demo1](https://github.com/chenniaoc/WDProtobuflStudy/raw/master/ex1.png)



**IDL 常用语法**

* 我是一个json的message 数据
```
  {
    message_id:4444,
    sender:’hexinyu’, 
    receiver:’wangli’, 
    content:’Let’s go to the gym’ 
    attachments:[‘a1’,a2’]
  }
```

* 我是proto
```
message {
    required int32 message_id   = 1; 
    required string sender      = 2; 
    required string receiver    = 3;
    required string content     = 4; 
    repeated string attachments = 5
}
```


Why we call this mechanism is so pretty high performance
-------------------------------

**How was data encoded**


**以varint形式存储数据的byte,除了最后的byte,byte order都是msb的,最高位标识后面的byte**

**是否也是属于当前key的value构成数据。**

**最低7位存储数据,组合在一起以后需要前后跌倒每个 byte(因为最低位在组合的最前面)。**



*decimal: 2*

*bin:0000 0010(一个字节就够了,所以msb没有用)*


*decimal:256 *
*bin:10000000 00000010 msb告知后面的byte也是当前的value。*

*每个byte取低7位:0000000 0000010*

*因为least significant group first,再做个交换:0000010 0000000 得256*




Pending to Do
--------------
**Plan A**
 >基于google protobuf 提供的编译器后端,实现⼀一个符合微店数据转换的objc编译器前端程序。
 
**Plan B**
 >在微店工程中加入intermediate exchange 程序,做WDDataDef与Protobuf stream的转换。




环境安装
--------
**安装前提条件**
 * 最好安装brew或port等自动安装包的工具
 * 使用protoc需要以下libs
 
 >autoconf automake libtool 以及大家都会有的xcode自带的command line tool

**google 原生protoc**
[offical google protobuf 2.6.0](https://github.com/google/protobuf/releases/tag/v2.6.0) 推荐使用这个,比较大众且稳定

