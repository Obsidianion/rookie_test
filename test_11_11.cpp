#include <stdio.h>
#include <string.h>//strlen头文件  strcmp头文件
#include <Windows.h>//Sleep头文件
#include <stdlib.h>//system头文件



//int main()//遍历
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 1;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int csz = sz + 1;
//	for (i = 0; i <= sz; i++)
//	{
//		if (k == arr[i])//注意，犯错为(k == i)
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == csz)
//		printf("没找到");
//
//	return 0;
//}

//int main()//二分法
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//数组用大括号包括{}，后面没有\0
//	int x = 7;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while (left <= right)//不是<=，不行，跑不出来
//	{
//		int mid = (right + left) / 2;//犯错，在循环内部
//		if (x > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (x < arr[mid])//犯错，应该是else if
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到。");
//	}
//	return 0;
//}


//int main()
//{
//	char arr1[] = "welcome to this word!!!!!";//这是字符串用""包括，和数组不一样，后面有隐藏的\0
//	char arr2[] = "#########################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//-2 是因为字符串后面还有个\0
//	int right = strlen(arr1) - 1;//strlen是求字符串长度函数
//
//
//
//	//while(left <= right)//while函数
//	//{
//
//	//	arr2[left] = arr1[left];
//	//	arr2[right] = arr1[right];
//	//	right--;
//	//	left++;
//	//	printf("%s\n", arr2);
//	//	//休息一秒
//	//	Sleep(900);
//	//}
//
//
//
//
//	for (left = 0; left <= right; left++)//for 函数
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		right--;
//		printf("%s\n", arr2);
//		Sleep(300);
//		if (left <= right)//保留住最后出来的文字
//		{
//			system("cls");//执行系统命令的一个函数，cls是清空函数
//		}
//	}
//
//
//	return 0;
//}



//输入密码程序
int main()
{
	int i = 0;
	char password[18] = {0};//字符串书写还没掌握
	char truepassword[] = "123456";
	for (i = 1; i <= 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", password);
		//if (password == "ABC123666")//==不能用于比较两个字符串相等,应该使用一个库函数 - strcmp
		if(strcmp(password, truepassword) == 0)
		{
			printf("密码正确。\n");
			break;
		}
		else
		{
			printf("密码错误。\n");
		}
	}
	if (strcmp(password, truepassword) == 0)
	{
		;
	}
	else
	{
		printf("很遗憾，您已经用完三次输入机会。\n");
	}

	//if (i == 4)
	//	printf("很遗憾，您已经用完三次输入机会。\n");//老师代码


	return 0;
}