#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()//��һ������
//{
//	printf("hello world\n");
//
//	return 0;
//}

//int main()//�򵥵ļӷ�
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
//int main()//Ӧ��VS���������Բ����п�ƽ̨�����ļӷ�����
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
//int main()//�鿴��������ռ�ַ�����
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
//int main()//�ֲ������ͽ�����
//{
//	int a = 100;
//	printf("%d\n", a);
//
//	return 0;
//}
//int num1 = 0;//ȫ�ֱ���
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
//int main()//�����ⲿ����
//{
//	extern int g_out;
//	printf("g_out = %d\n", g_out);
//	return 0;
//}
//#define MAX 1//denfine ���峣��
//
//int main()//�����������
//{
//	int arr[MAX] = {0};
//	printf("MAX = %d\n", MAX);
//	return 0;
//}
//
//int main()//if�����ϰ
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("δ����\n");
//	else if(age <= 20)
//		printf("������\n");
//	else
//		printf("�ѳ���\n");
//
//	return 0;
//}

//int main()//else if ����ж���ϰ
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age < 28)//���Բ���ո�
//		printf("����\n");
//	else if(age>=28 && age<60)//���Բ���ո�
//		printf("����\n");
//	else if (age >= 60 && age < 90)
//		printf("����\n");
//	else//Ƕ�ף��ǵüӴ�����
//	{
//		if(age>=90 && age<120)
//			printf("�ϲ���\n");
//		else
//			printf("����\n");
//	}
//	return 0;
//}

//int main()
//{
//	//int num = 4;
//	//if (num = 5)//= �Ǹ�ֵ == ������ȣ��������ܵ����߼���������һ����дbug��
//	//	printf("���\n");//��������
//
//	int num = 4;
//	if (num == 5)//�޸�bug
//		printf("���\n");
//
//	return 0;
//}

//int main()//�������õ���дϰ�ߣ�����д����߼�ʱ������д��5 == num�������ǣ�num == 5��������Ч�����bug����
//{
//	int num = 1;
//	if (5 == num)//�����д����Ϊ��5 = num��������Գ���
//		printf("���\n");
//
//	return 0;
//}

//int main()//���������ж��Ƿ�Ϊ����
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (1 == (num % 2))
//		printf("Ϊ����\n");
//	else
//		printf("Ϊż��\n");
//	return 0;
//}

//int main()//��һ����100���������������Լ���ĥ�ģ�������
//{
//	int a = 100;
//	while (a--)
//	{
//		if (1 == (a % 2))
//			printf("%d\n", a);
//	}
//	return 0;
//}


//int main()//�ڶ�����100���������������Լ���ĥ�ģ�������
//{
//	int a = 0;
//	while (a <= 100)
//	{
//		if (1 == (a % 2))
//		{
//			printf("%d ", a);//���Կո񲻻���
//			a++;
//		}
//		else
//			a++;
//	}
//	return 0;
//}

//int main()//��ʦ�ķ�ʽ
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		printf("%d ", a);
//		a += 2;
//	}
//	return 0;
//}

//int main()//switch ��� ���֧�ж����
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch(day)//���switch-case��䣨switch������������γ������ʽ��
//	{
//	case 1://case������������γ������ʽ
//		printf("����1\n");
//		break;//���break���
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("������\n");
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
//	case 1://��໯���루ע��caes����ð�ţ���case������Բ���if��䣩
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;//���һ��Ҳ����д��break���ɺ�ϰ��
//	default://����Ƿ�����������û���ϸ�˳�򣬽���������һ��case��ע�����ð�ţ�
//		printf("������ֵ\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		if (5 == a)
//			//break;//break����ѭ��
//			continue;//��ֹ����ѭ�����󷽴��벻��ִ�У�������ͷwhile����жϲ���
//		printf("%d", a);
//		a++;
//	}
//	return 0;
//}

int main()
{
	printf("����ѧfor���ͼ������while����ѧϰ����");

	return 0;
}