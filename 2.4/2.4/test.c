//mov:数据转移指令
//push：数据入栈，同时esp栈顶寄存器也要发生改变
//pop：数据弹出至指定位置，同时esp栈顶寄存器也要发生改变
//sub：减法命令
//add：加法命令
//call：函数调用，1.压入返回值2.转入目标函数
//jump：通过修改eip，转入目标函数，进行调用
//ret：恢复返回地址，压入eip，类似pop eip命令
//ebp,esp这两个寄存器中存放的是地址
//在调用哪个函数时，这两个寄存器就去维护当前要调用的函数空间
//写一个简单的代码，写的足够详细来看
//main开辟的空间-----这个空间不能说是你的就是你的吧，需要两个寄存器来维护
//在VS2013中main函数也是被其他函数调用的
#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//
//}
//int main()
//{
//
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = Add(a, b);
//	return 0;
//}
int main()
{
	char arr[10];
	printf("%s", arr);
	return 0;
}