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
//		printf("%dΪ����\n", a);
//	else
//		printf("%dΪż��\n", a);
//	return 0;
//}




















//int main()
//{
//	//int num = 4;
//	//if (num = 5)//һ���Ⱥ��Ǹ�ֵ��
//	//{
//	//	printf("�Ǻ�\n");
//	//}����
//	int num = 4;
//	if (5 == num)//�õĴ����� 
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}














//����else
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (a == 2)
//			printf("hehe\n");
//	else
//			printf("haha\n");//else�������δƥ���if����ƥ��
//	return 0;
//}














//int main()
//{
//	int age = 20;
//	if (age < 18)
//	{//�������������Ҫִ�ж�����䣬Ӧ����ʹ�ô����
//		printf("δ����\n");
//		printf("δ����\n");
//	}
//	else
//	{
//		if (age < 28 | age >= 18)
//			printf("����\n");
//		else if (age >= 28 | age < 50)
//			printf("׳��\n");
//		else if (age >= 50 | age < 90)
//			printf("����\n");
//		else
//			printf("�ϲ���\n");
//	}
//	return 0;
//}

















//int main()
//{
//	int a = 0;
//	;//�����-��һ�������
//
//	return 0;
//}





























//�ṹ��
//char int doule...
//�ˡ��顣�������Ӷ���
//���֣���ߡ�����
//���������ߡ�����
//�������Ӷ���---�ṹ��--�����Լ��������������
//�ṹ��ؼ���
//����һ���ṹ������
//struct Book
//{
//	char name[20];//C���Գ������
//	short price;//55
//
//};//�ֺ�����������������Ͷ���ģ�����ȱ��
//int main()
//{
////���ýṹ�����ʹ���һ�������͵Ľṹ�����
//	struct Book b1 = { "C���Գ������",55 };
//	//b1.name = "C++";//name���Ǳ�����������ֱ�Ӹ�ֵ   b1.price = 15;����ǿ��Ե���Ϊprice�Ǳ��� name�����飬��������������������ǵ�ַ  ����
//	strcpy(b1.name, "C++");//strcpy-string copy--�ַ�������-�⺯��-ͷ�ļ�-string.h
//	printf("%s\n", b1.name);
//
//


	//struct Book* pb = &b1;
	////����pb��ӡ���ҵ������ͼ۸�
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);

	//.������Ӧ�õ��ṹ����� .��Ա
	//->�ṹ��ָ��->��Ա
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);



	//printf("������%s\n", b1.name);
	//printf("�۸�%dԪ\n", b1.price);
	//b1.price = 15;
	//printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);

//
//	return 0;
//
//}






















//int main()
//
	//double d = 3.14;
	//double* pd = &d;
	//*pd = 5.5;
	//printf("%d\n", sizeof(pd));//32λƽ̨4  64-8
	//printf("d = %lf\n", d);
	//printf("d = %lf\n", *pd);
	//printf("%d\n", sizeof(char*));
	//printf("%d\n", sizeof(short*));
	//printf("%d\n", sizeof(int*));
	//printf("%d\n", sizeof(double*));//����4 






	//int a = 10;//������4���ֽڵĿռ�
	////printf("%p\n", &a);
	//int* p = &a;//p��һ������-ָ�����
	////printf("%p\n", p);
	//*p = 20;//* - �����ò���������ӷ��ʲ�����
	//printf("a = %d\n", a);

//
//	return 0;
//}









































