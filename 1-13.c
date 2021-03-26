#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>



//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

int main()
{
	int i = 1;
	while (i <= 100)
	{
		printf("%d ", i);
		i += 2;
	}
	return 0;
}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (a >= 0 && a <= 100)
//	{
//	
//		b = a % 2;
//		if (1 == b)
//		{
//			printf("%d ", a);
//			a++;
//		}
//		else
//			a++;
//
//	
//	}
//	return 0;













//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	b = a % 2;
//	if (1 == b)
//		printf("%d为奇数\n", a);
//	else
//		printf("%d为偶数\n", a);
//	return 0;
//}




















//int main()
//{
//	//int num = 4;
//	//if (num = 5)//一个等号是赋值，
//	//{
//	//	printf("呵呵\n");
//	//}建议
//	int num = 4;
//	if (5 == num)//好的代码风格 
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}














//悬空else
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (a == 2)
//			printf("hehe\n");
//	else
//			printf("haha\n");//else与最近的未匹配的if进行匹配
//	return 0;
//}














//int main()
//{
//	int age = 20;
//	if (age < 18)
//	{//如果条件成立，要执行多条语句，应怎样使用代码块
//		printf("未成年\n");
//		printf("未成年\n");
//	}
//	else
//	{
//		if (age < 28 | age >= 18)
//			printf("青年\n");
//		else if (age >= 28 | age < 50)
//			printf("壮年\n");
//		else if (age >= 50 | age < 90)
//			printf("老年\n");
//		else
//			printf("老不死\n");
//	}
//	return 0;
//}

















//int main()
//{
//	int a = 0;
//	;//是语句-是一条空语句
//
//	return 0;
//}





























//结构体
//char int doule...
//人、书。。。复杂对象
//名字，身高。。。
//书名、作者。。。
//描述复杂对象---结构体--我们自己创造出来的类型
//结构体关键字
//创建一个结构体类型
//struct Book
//{
//	char name[20];//C语言程序设计
//	short price;//55
//
//};//分号是用来结束这个类型定义的，不可缺少
//int main()
//{
////利用结构体类型创建一个该类型的结构体变量
//	struct Book b1 = { "C语言程序设计",55 };
//	//b1.name = "C++";//name不是变量，不可以直接赋值   b1.price = 15;这个是可以的因为price是变量 name是数组，而数组的数组名本质上是地址  所以
//	strcpy(b1.name, "C++");//strcpy-string copy--字符串拷贝-库函数-头文件-string.h
//	printf("%s\n", b1.name);
//
//


	//struct Book* pb = &b1;
	////利用pb打印出我的书名和价格
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);

	//.操作符应用到结构体变量 .成员
	//->结构体指针->成员
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);



	//printf("书名：%s\n", b1.name);
	//printf("价格：%d元\n", b1.price);
	//b1.price = 15;
	//printf("修改后的价格：%d元\n", b1.price);

//
//	return 0;
//
//}






















//int main()
//
	//double d = 3.14;
	//double* pd = &d;
	//*pd = 5.5;
	//printf("%d\n", sizeof(pd));//32位平台4  64-8
	//printf("d = %lf\n", d);
	//printf("d = %lf\n", *pd);
	//printf("%d\n", sizeof(char*));
	//printf("%d\n", sizeof(short*));
	//printf("%d\n", sizeof(int*));
	//printf("%d\n", sizeof(double*));//都是4 






	//int a = 10;//申请了4个字节的空间
	////printf("%p\n", &a);
	//int* p = &a;//p是一个变量-指针变量
	////printf("%p\n", p);
	//*p = 20;//* - 解引用操作符、间接访问操作符
	//printf("a = %d\n", a);

//
//	return 0;
//}









































