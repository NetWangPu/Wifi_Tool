#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<shellapi.h>
//Ԥ��������
int main()  //������
{  //��������ʼ
	printf("#########################################################\n");
	printf("#\t\t\t\t\t\t\t#\n");
	printf("#\t\t\t\t\t\t\t#\n");
	printf("#\t\t\t\t\t\t\t#\n");
	printf("#########################################################\n");  //�������ͼ��
	Sleep(100);   //��ʱ100ms
	printf("������ͨ��ѧ����ѧԺ����WIFI���Ӹ������\n");
	Sleep(100);   //��ʱ100ms
	printf("Power by c     Code by Mr.wang\n");
	Sleep(100);   //��ʱ100ms
	printf("ע:��������C���Ե�ѧϰ Դ�����ϴ���GitHub\n");
	Sleep(100);   //��ʱ100ms
	system("color 4");   //����������ɫ
	printf("����������ִ�в������س�\n");  //��ʾ�û�����
	Sleep(100);   //��ʱ100ms
	printf("1.��WiFi������ַ\n");
	Sleep(100);   //��ʱ100ms
	printf("2.��WiFi������ַ\n");  //������ѡ��
	Sleep(100);   //��ʱ100ms
	printf("3.�򿪴���ĿԴ����ַ\n");
	int a;     //�������a����ֵ������int��
	scanf_s("%d", &a);     //ʹ��scanf��ȡ�û����벢��ֵ��a
	if (a == 1)  //�ж�
	{
		printf("���ڴ���ַ"); //��ʾ�û����ڴ���ַ
		Sleep(100);   //��ʱ100ms
		system("start http://10.40.3.1/");  //����ַ
		printf("���ڴ���ַ");
	}
	if (a == 2)  //�ж�
	{
		printf("���ڴ���ַ"); //��ʾ�û����ڴ���ַ
		Sleep(100);   //��ʱ100ms
		system("start http://10.40.3.1/");  //����ַ
		printf("���ڴ���ַ");
	}
	if (a == 3)  //�ж�
	{
		printf("���ڴ���ַ");  //��ʾ�û����ڴ���ַ
		Sleep(100);   //��ʱ100ms
		system("start https://github.com/NetWangPu/Wifi_Tool");  //����ַ
		printf("���ڴ���ַ");
	}
	return 0;  //�������ķ���ֵΪ0
}