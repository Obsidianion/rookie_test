#include <stdio.h>

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);//"%d%d"֮�䲻Ӧ���ж���
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
//	while ((ch = getchar()) != EOF)//end of file �ļ�������׼ ��-1��
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()//ֻ�����봿����
//{
//	int useless = 0;
//	int yet = 0;
//	char password[18] = {0};
//	printf("���������룺");
//	scanf("%s", password);
//	useless = getchar();
//	printf("��ȷ��Y/N");
//	yet = getchar();
//	if ('Y' == yet || 'y' == yet)
//		printf("ȷ�ϳɹ�");
//	else
//		printf("ȷ��ʧ��");
//
//	return 0;
//}

//int main()//������ո�������Ŵ�Сд
//{
//	int a = 0;
//	int useless = 0;
//	char password[18] = { 0 };
//	printf("���������룺");
//	scanf("%s", password);
//	while ((useless = getchar()) != '\n')//ʹ��ѭ�������������ݵ�\n
//	{
//		;
//	}
//	printf("��ȷ�ϣ�����Y/N����\n");
//	a = getchar();
//	if (a == 'Y' || a == 'y')
//		printf("����ɹ�");
//	else
//		printf("����ʧ��");
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


//int main()//ѵ����һ��
//{
//	int ch = 0;//�����������
//	while ((ch = getchar()) != EOF)//д��getchar��ch��
//	{
//		if (ch < '0' || ch > '9')//��С�ڷ��Ÿ㷴��||�ǻ����˼
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


//int main()//for���������
//{
//	int a = 0;
//	for (a = 1; a <= 100; a += 2)//֮���Ƿֺ�
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
//			//continue;//���1234678910��1��10ȱ5����i==5ʱif��������continue������У�ѭ����������for����ж�λ�á�
//			break;//���1234����i==5ʱ��if��������break������У�����ѭ����
//		printf("%d\n", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)//����for����ѭ�����Ʊ�����ȡֵ���á�ǰ�պ����䡱��д��
//		//Ҳ������Ϊ=����Ϊ��С�ڷ��ţ���ȻҲ����ʹ��<=���ţ����籾������i<10����дΪi<=9
//		//���ǽ���Ϊ�ҿ�����
//		//��Ϊ���Դ�����������
//		//10��ѭ��
//		//10�δ�ӡ
//		//10��Ԫ��
//	{
//		printf("%d\n", arr[i]);//�������±���i����
//	}
//	return 0;
//}

//int main()//��ѭ������,for����һ������
//{
//	for (;;)//forѭ���ĳ�ʼ�����жϣ�����������ʡ��
//		//����for�����жϲ���ʡ�ԣ����ж�������Ϊ��
//		//������Ƿǳ����������鲻Ҫ���ʡ�ԣ���
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
//	for (a = 0; a < 10; a++)//����ʡ��a=10����Ч��
//	{
//		for (b = 0; b < 10; b++)//����ʡ��b=10����Ч��
//		{
//			printf("hello world\n");
//			printf("%d\n", a);
//			printf("%d\n", b);
//		}
//	}
//	printf("%d\n", a);//��a,b��ֵ���Կ���a,bֵ����forѭ�����ѱ���ֵ��10����û����Ϊ��ѭ�����ָ���ʼֵ
//	printf("%d\n", b);//��Ϊ��ֵ�����ԭ�򣬲�������ʡ��for�����ĳ�ʼ�жϵ������
//	return 0;
//}

//int main()//for���ڶ�������
//{
//	int x, y;
//	for (x = 0, y = 0; x < 5 && y < 2; ++x, y++)
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}

//int main()//���������ж�(С��)
//{
//	int x = 0;
//	int y = 0;
//	for (x = 0, y = 0; 0 == y; x++, y++)//=�Ǹ�ֵ���������,y=0Ϊ��ֵ��䣬�ڸô�û�����ж�����
//					  //y = 0 �Ǹ�ֵ�����ж����λ�ø�����0����Ϊ�٣�for��ѭ��
//	{				  
//		y++;
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()//do while ѭ����䣬���ܳ�����ж���ѭ����
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


//int main()//�׳���ϰ
//{
//	int n = 0;
//	int a = 0;
//	int b = 1;
//	printf("���������֣�");
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
//		printf("�׳�= 1\n");
//	return 0;
//}

//int main()//�׳�
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

//int main()//�׳�
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

//int main()//�׳�
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