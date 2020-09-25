#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<shellapi.h>
//预处理命令
int main()  //主函数
{  //主函数开始
	printf("#########################################################\n");
	printf("#\t\t\t\t\t\t\t#\n");
	printf("#\t\t\t\t\t\t\t#\n");
	printf("#\t\t\t\t\t\t\t#\n");
	printf("#########################################################\n");  //输出方块图形
	Sleep(100);   //延时100ms
	printf("北京交通大学海滨学院电脑WIFI连接辅助软件\n");
	Sleep(100);   //延时100ms
	printf("Power by c     Code by Mr.wang\n");
	Sleep(100);   //延时100ms
	printf("注:代码用于C语言的学习 源码已上传至GitHub\n");
	Sleep(100);   //延时100ms
	system("color 4");   //更改字体颜色
	printf("输入相关序号执行操作并回车\n");  //提示用户操作
	Sleep(100);   //延时100ms
	printf("1.打开WiFi连接网址\n");
	Sleep(100);   //延时100ms
	printf("2.打开WiFi改密网址\n");  //输出相关选择
	Sleep(100);   //延时100ms
	printf("3.打开此项目源码网址\n");
	int a;     //定义变量a的数值类型是int型
	scanf_s("%d", &a);     //使用scanf获取用户输入并赋值给a
	if (a == 1)  //判断
	{
		printf("正在打开网址"); //提示用户正在打开网址
		Sleep(100);   //延时100ms
		system("start http://10.40.3.1/");  //打开网址
		printf("正在打开网址");
	}
	if (a == 2)  //判断
	{
		printf("正在打开网址"); //提示用户正在打开网址
		Sleep(100);   //延时100ms
		system("start http://10.40.3.1/");  //打开网址
		printf("正在打开网址");
	}
	if (a == 3)  //判断
	{
		printf("正在打开网址");  //提示用户正在打开网址
		Sleep(100);   //延时100ms
		system("start https://github.com/NetWangPu/Wifi_Tool");  //打开网址
		printf("正在打开网址");
	}
	return 0;  //主函数的返回值为0
}