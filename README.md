This is a monitoring system based on c++. The system is under development



如何去设计这样一个监控系统呢？

首先去记录时间的函数，这个时最基本的东西；
后续将会添加记录系统的其他待监控数据，例如程序使用内存，通过某程序或者是端口的数据量的大小，抽象程度高一点可以记录例如请求数量等数据



 主要的一个流程是这样：

1、产生原始数据；对于产生的数据这块儿来讲，我们需要给所有的数据打上类似一个标签的东西，也就是一个k-v的标志
2、将产生的数据进行存储；
3、将存储的数据进行转发，发送到需要监控系统里；

对于产生数据，我们需要做一个标记，提供一个类似模块的东西，最好这个模块能够递归，最终的数据是一个记录的数据（可以是时间，内存，或者其他的东西）
