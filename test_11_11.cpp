#include <stdio.h>
#include <string.h>//strlenͷ�ļ�  strcmpͷ�ļ�
#include <Windows.h>//Sleepͷ�ļ�
#include <stdlib.h>//systemͷ�ļ�



//int main()//����
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 1;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int csz = sz + 1;
//	for (i = 0; i <= sz; i++)
//	{
//		if (k == arr[i])//ע�⣬����Ϊ(k == i)
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == csz)
//		printf("û�ҵ�");
//
//	return 0;
//}

//int main()//���ַ�
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//�����ô����Ű���{}������û��\0
//	int x = 7;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while (left <= right)//����<=�����У��ܲ�����
//	{
//		int mid = (right + left) / 2;//������ѭ���ڲ�
//		if (x > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (x < arr[mid])//����Ӧ����else if
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����");
//	}
//	return 0;
//}


//int main()
//{
//	char arr1[] = "welcome to this word!!!!!";//�����ַ�����""�����������鲻һ�������������ص�\0
//	char arr2[] = "#########################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//-2 ����Ϊ�ַ������滹�и�\0
//	int right = strlen(arr1) - 1;//strlen�����ַ������Ⱥ���
//
//
//
//	//while(left <= right)//while����
//	//{
//
//	//	arr2[left] = arr1[left];
//	//	arr2[right] = arr1[right];
//	//	right--;
//	//	left++;
//	//	printf("%s\n", arr2);
//	//	//��Ϣһ��
//	//	Sleep(900);
//	//}
//
//
//
//
//	for (left = 0; left <= right; left++)//for ����
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		right--;
//		printf("%s\n", arr2);
//		Sleep(300);
//		if (left <= right)//����ס������������
//		{
//			system("cls");//ִ��ϵͳ�����һ��������cls����պ���
//		}
//	}
//
//
//	return 0;
//}



//�����������
int main()
{
	int i = 0;
	char password[18] = {0};//�ַ�����д��û����
	char truepassword[] = "123456";
	for (i = 1; i <= 3; i++)
	{
		printf("���������룺");
		scanf("%s", password);
		//if (password == "ABC123666")//==�������ڱȽ������ַ������,Ӧ��ʹ��һ���⺯�� - strcmp
		if(strcmp(password, truepassword) == 0)
		{
			printf("������ȷ��\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (strcmp(password, truepassword) == 0)
	{
		;
	}
	else
	{
		printf("���ź������Ѿ���������������ᡣ\n");
	}

	//if (i == 4)
	//	printf("���ź������Ѿ���������������ᡣ\n");//��ʦ����


	return 0;
}