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

