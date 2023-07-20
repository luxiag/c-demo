/*
Volatile是C语言中的一个关键字，用于修饰变量。当一个变量被声明为volatile时，
意味着该变量的值可能会在程序的控制之外被改变，因此编译器不会对这个变量进行优化。

在多线程编程或并发环境下，volatile关键字非常有用。它告诉编译器不要对这个变量进行优化，
确保每次访问该变量时都从内存中读取最新的值，而不是使用寄存器中的缓存值。

使用volatile修饰的变量可以具备以下特性：

变量的值可能会被其他线程或硬件设备修改。
对volatile变量的读写操作都会直接对内存进行访问，而不会被优化到寄存器。


以下是一些volatile关键字的使用场景：

多线程中共享的变量：如果多个线程共享一个变量，并且这些线程可能会并发地读取和修改该变量，那么该变量应该被声明为volatile。
中断处理：在中断处理程序中，由于中断可能会随时发生，因此对共享变量的读写操作应该使用volatile关键字，以确保中断能够正确地访问和修改变量的值。
外设寄存器：在与外部设备进行通信时，使用volatile修饰的变量可以确保每次访问该寄存器时都会从设备中读取最新的值，而不是使用缓存的值。
*/