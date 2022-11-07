#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()//第一个代码
//{
//	printf("hello world\n");
//
//	return 0;
//}

//int main()//简单的加法
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b;
//
//	printf("c = %d\n", c);
//
//	return 0;
//}
//
//int main()//应用VS编译器语言不具有跨平台能力的加法代码
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
//
//int main()//查看下列类所占字符长度
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	return 0;

//int a = 10;
//
//int main()//局部变量就近给量
//{
//	int a = 100;
//	printf("%d\n", a);
//
//	return 0;
//}
//int num1 = 0;//全局变量
//int num2 = 0;
//int add = 0;
//int main()
//{
//	scanf("%d%d", &num1, &num2);
//	add = num1 + num2;
//	printf("add = %d\n", add);
//	return 0;
//}
//
//int main()//引用外部变量
//{
//	extern int g_out;
//	printf("g_out = %d\n", g_out);
//	return 0;
//}
//#define MAX 1//denfine 定义常量
//
//int main()//数组基本代码
//{
//	int arr[MAX] = {0};
//	printf("MAX = %d\n", MAX);
//	return 0;
//}
//
//int main()//if语句练习
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("未成年\n");
//	else if(age <= 20)
//		printf("是青年\n");
//	else
//		printf("已成年\n");
//
//	return 0;
//}

//int main()//else if 多个判断练习
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 28)//可以不打空格
//		printf("青年\n");
//	else if(age>=28 && age<60)//可以不打空格
//		printf("中年\n");
//	else if (age >= 60 && age < 90)
//		printf("老年\n");
//	else//嵌套，记得加大括号
//	{
//		if(age>=90 && age<120)
//			printf("老不死\n");
//		else
//			printf("传奇\n");
//	}
//	return 0;
//}

//int main()
//{
//	//int num = 4;
//	//if (num = 5)//= 是赋值 == 才是相等（程序能跑但是逻辑错误，这是一个书写bug）
//	//	printf("相等\n");//反面例子
//
//	int num = 4;
//	if (num == 5)//修改bug
//		printf("相等\n");
//
//	return 0;
//}

//int main()//建立良好的书写习惯，在书写相等逻辑时可以书写（5 == num）而不是（num == 5）可以有效避免该bug出现
//{
//	int num = 1;
//	if (5 == num)//如果书写出错为（5 = num）程序测试出错
//		printf("相等\n");
//
//	return 0;
//}

//int main()//输入数据判断是否为奇数
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (1 == (num % 2))
//		printf("为奇数\n");
//	else
//		printf("为偶数\n");
//	return 0;
//}

//int main()//第一种求100以内奇数方法（自己琢磨的，骄傲）
//{
//	int a = 100;
//	while (a--)
//	{
//		if (1 == (a % 2))
//			printf("%d\n", a);
//	}
//	return 0;
//}


//int main()//第二种求100以内奇数方法（自己琢磨的，骄傲）
//{
//	int a = 0;
//	while (a <= 100)
//	{
//		if (1 == (a % 2))
//		{
//			printf("%d ", a);//可以空格不换行
//			a++;
//		}
//		else
//			a++;
//	}
//	return 0;
//}

//int main()//老师的方式
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		printf("%d ", a);
//		a += 2;
//	}
//	return 0;
//}

//int main()//switch 语句 多分支判断语句
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch(day)//理解switch-case语句（switch后面必须是整形常量表达式）
//	{
//	case 1://case后面必须是整形常量表达式
//		printf("星期1\n");
//		break;//理解break语句
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期天\n");
//	}
//	return
//		0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1://简洁化代码（注意caes后发是冒号）（case下面可以插入if语句）
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;//最后一个也还是写上break养成好习惯
//	default://处理非法情况，该语句没有严格顺序，建议放置最后一个case后（注意后方是冒号）
//		printf("超出数值\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		if (5 == a)
//			//break;//break跳出循环
//			continue;//终止本次循环，后方代码不在执行，跳到开头while语句判断部分
//		printf("%d", a);
//		a++;
//	}
//	return 0;
//}

int main()
{
	printf("明天学for语句和加深理解while语句等学习内容");

	return 0;
}