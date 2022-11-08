#include <stdio.h>

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);//"%d%d"之间不应该有逗号
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	printf("\n");
//	printf("%c\n", ch);
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//end of file 文件结束标准 （-1）
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()//只能输入纯数字
//{
//	int useless = 0;
//	int yet = 0;
//	char password[18] = {0};
//	printf("请输入密码：");
//	scanf("%s", password);
//	useless = getchar();
//	printf("请确认Y/N");
//	yet = getchar();
//	if ('Y' == yet || 'y' == yet)
//		printf("确认成功");
//	else
//		printf("确认失败");
//
//	return 0;
//}

//int main()//可输入空格特殊符号大小写
//{
//	int a = 0;
//	int useless = 0;
//	char password[18] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);
//	while ((useless = getchar()) != '\n')//使用循环处理缓冲区数据到\n
//	{
//		;
//	}
//	printf("请确认（输入Y/N）：\n");
//	a = getchar();
//	if (a == 'Y' || a == 'y')
//		printf("输入成功");
//	else
//		printf("输入失败");
//
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch >'9' )
//			continue;
//		putchar(ch);
//	}
//
//	return 0;
//}


//int main()//训练第一次
//{
//	int ch = 0;//忘记输入变量
//	while ((ch = getchar()) != EOF)//写成getchar（ch）
//	{
//		if (ch < '0' || ch > '9')//大小于符号搞反，||是或的意思
//			continue;
//		putchar(ch);
//		printf("\n");
//		printf("%c\n", ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		else
//			putchar(ch);
//	}
//
//	return 0;
//}


//int main()//for语句求奇数
//{
//	int a = 0;
//	for (a = 1; a <= 100; a += 2)//之间是分号
//	{
//		printf("%d ", a);
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			//continue;//输出1234678910（1到10缺5）当i==5时if语句成立，continue语句运行，循环程序跳至for语句判断位置。
//			break;//输出1234，当i==5时，if语句成立，break语句运行，跳出循环。
//		printf("%d\n", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)//建议for语句的循环控制变量的取值采用“前闭后开区间”的写法
//		//也就是左为=，右为大小于符号，当然也可以使用<=符号，列如本代码中i<10可以写为i<=9
//		//但是建议为右开区间
//		//因为可以代表如下意义
//		//10次循环
//		//10次打印
//		//10个元素
//	{
//		printf("%d\n", arr[i]);//将数组下标与i关联
//	}
//	return 0;
//}

//int main()//死循环代码,for语句第一个变种
//{
//	for (;;)//for循环的初始化，判断，调整都可以省略
//		//但是for语句的判断部分省略，那判断条件恒为真
//		//如果不是非常熟练，建议不要随便省略！！
//	{
//		printf("hello world\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 0; a < 10; a++)//可以省略a=10看看效果
//	{
//		for (b = 0; b < 10; b++)//可以省略b=10看看效果
//		{
//			printf("hello world\n");
//			printf("%d\n", a);
//			printf("%d\n", b);
//		}
//	}
//	printf("%d\n", a);//由a,b的值可以看出a,b值经过for循环后已被赋值到10，并没有因为出循环而恢复初始值
//	printf("%d\n", b);//因为赋值留存等原因，不能随意省略for语句里的初始判断调整语句
//	return 0;
//}

//int main()//for语句第二个变种
//{
//	int x, y;
//	for (x = 0, y = 0; x < 5 && y < 2; ++x, y++)
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}

//int main()//常见错误判断(小坑)
//{
//	int x = 0;
//	int y = 0;
//	for (x = 0, y = 0; 0 == y; x++, y++)//=是赋值，不是相等,y=0为赋值语句，在该处没有起到判断作用
//					  //y = 0 是赋值，在判断语句位置赋予其0代表为假，for不循环
//	{				  
//		y++;
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()//do while 循环语句，先跑程序后判断再循环。
//{
//	int i = 1;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}


//int main()//阶乘练习
//{
//	int n = 0;
//	int a = 0;
//	int b = 1;
//	printf("请输入数字：");
//	scanf("%d", &n);
//	if (n != 0)
//	{
//		for (a = n; a != 0; a--)
//		{
//			b = b * a;
//		}
//		printf("%d\n", b);
//	}
//	else
//		printf("阶乘= 1\n");
//	return 0;
//}

//int main()//阶乘
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//int main()//阶乘
//{
//	int i = 0;
//	int ret = 1;
//	int a = 0;
//	int sum = 0;
//	for (i = 1; i <= 4; i++)//1 + 2 + 6 + 24
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//int main()//阶乘
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		for (i = 1, ret = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}