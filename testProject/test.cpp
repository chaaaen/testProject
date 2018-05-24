#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include<process.h>
#include<time.h>
#include <math.h>	
//#pragma comment (lib,"lib.lib")
#pragma	comment	(linker,"/subsystem:\"windows\" /entry:\"mainCRTStartup\"")
#define PI 3.1415926
#define R 500


void main1()
{

	char str[100] = { 0 };
	int chen = 0;
	const int a = 34;
	scanf("%[^\n]", str);

	printf("%d\n", a);


	printf("%p\n", &a);

	*(int*)&a = 23;

	printf("%d\n", a);

	printf("%p", &a);

	printf("%d\n", chen);


	printf("%d\n%d\n%d\n%d\n%d", sizeof(int), sizeof(float), sizeof(double), sizeof(long), sizeof(short));


	while (1)
	{
		for (char ch = '0'; ch <= '9'; ch++)
		{
			for (char cl = '8'; cl <= 'f'; cl++)
			{
				if (cl >= '9' && cl <= 'a')
				{

				}
				else
				{
					sprintf(str, "color %c%c", ch, cl);
					system(str);
				}





			}



		}
	}






}

void timeset(void *p)
{
	int i = 0;
	while (1)
	{
		i++;
		char str[100] = { 0 };
		sprintf(str, "title ��ǰʱ���%d��", i);
		system(str);
		Sleep(1000);
	}
	system("color 3f");
}

void colorall(void *p)
{
	time_t ts;
	unsigned int num = time(&ts);
	srand(num);
	for (;;)
	{
		int num1 = rand() % 16;
		Sleep(200);

		int num2 = rand() % 16;
		char str1[50] = { 0 };
		sprintf(str1, "color %x%x", num1, num2);
		system(str1);
	}
}


void colorall2(void *p)
{

	time_t ts;
	unsigned int number = time(&ts);
	srand(number);
	while (true)
	{
		int number1 = rand() % 16;
		Sleep(100);
		int number2 = rand() % 16;
		char strNumber[50] = { 0 };
		sprintf(strNumber, "color %x%x", number1, number2);
		system(strNumber);
	}

}

void detach()
{
	int i = 100;
AAA:if (i <= 999)
{
	int a = i / 100;
	int b = i / 10 % 10;
	int c = i % 10;
	a*a*a + b * b*b + c * c*c == i ? printf("%d^3+%d^3+%d^3=%d\n", a, b, c, i) : 1;
	i++;
	goto AAA;
}
}
void run(void *p)
{
	MessageBoxA(0, "hell0", "hacker", 0);
}

double pf(int n)
{
	double jiegou = 1.0;
	for (int i = 0; i < n; i++)
	{
		jiegou *= 2;
	}
	//printf("%f\n", jiegou);
	return jiegou;
}
void guessTest()
{
	time_t ts;
	unsigned int number = time(&ts);
	srand(number);
	int randNumber = rand() % 100 + 1;
	while (true)
	{
		int a = 0;
		scanf("%d", &a);
		if (a < randNumber)
		{
			printf("С��");
		}
		else if (a > randNumber)
		{
			printf("����");
		}
		else
		{
			printf("�¶���");
			break;
		}
	}
}

void delayed()
{
	int i = 0;
	while (true)
	{
		i++;
		Sleep(1000);
		if (i == 5)
		{
			exit(0);
			break;
		}
	}


}
int px = 400;
int px1 = 1400;
int py = 500;

void runCircle()
{
	HWND win = FindWindowA("notepad", "�ޱ��� - ���±�");
	if (win == NULL)
	{
		printf("û���ҵ�����");

	}
	else
	{
		int x;
		int y;
		int angle = 0;
		int status = 1;
		while (true)
		{
			if (angle == 0)
			{
				if (status == 0)
				{
					status = 1;
				}
				else
				{
					status = 0;
				}
			}

			if (status == 1)
			{
				x = px + cos(angle*PI / 180)*R;
				y = py - sin(angle*PI / 180)*R;
			}
			else
			{
				x = px1 - cos(angle*PI / 180)*R;
				y = py - sin(angle*PI / 180)*R;
			}
			SetWindowPos(win, NULL, x, y, 300, 300, 1);
			angle++;
			if (angle == 360)
			{
				angle = 0;
			}
			Sleep(10);
		}

	}
}
int gongyueshu(int m, int n)
{
	if (m%n == 0)
	{
		return n;
	}
	else
	{
		return gongyueshu(n, m%n);
	}
}
int a[10][3] = { 0 };

void show(int a[10][3]);//��ʾ������
void hanno(int n, char A, char B, char C);//
void move(char X, char Y);//
void show(int a[10][3])
{
	printf("%5c%5c%5c\n", 'A', 'B', 'C');
	printf("----------------------------\n");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
}
void hanno(int n, char A, char B, char C)
{
	if (n < 1)
	{
		return;

	}
	else if (n == 1)
	{
		printf("\n%c->%c", A, C);//
		move(A, C);
		show(a);
	}
	else
	{
		hanno(n - 1, A, C, B);
		printf("\n%c->%c", A, C);
		move(A, C);
		show(a);
		hanno(n - 1, B, A, C);
	}
}

void move(char X, char Y)
{
	int m = X - 65;
	int n = Y - 65;
	int imove = -1;
	for (int i = 0; i < 10; i++)
	{
		if (a[i][m] != 0)//�ҵ���һ����Ϊ0
		{
			imove = i;
			break;
		}
	}

	int jmove;
	if (a[9][n] == 0)
	{
		jmove = 9;
	}
	else
	{
		jmove = 10;
		for (int i = 0; i < 10; i++)
		{
			if (a[i][n] != 0)
			{
				jmove = i;
				break;
			}
		}
		jmove -= 1;
	}
	int temp = a[imove][m];
	a[imove][m] = a[jmove][n];
	a[jmove][n] = temp;

}

DWORD WINAPI	 mymsg(LPVOID lp)
{
	MessageBoxA(0, "hello", "china", 0);
	return 0;
}
void insert()
{
	int a[10] = { 1,2,3,4,5,6,8,7,9,10 };
	for (int i = 1; i < 10; i++)
	{
		int temp = a[9];
		int j = 9;
		while (j > 0 && a[j - 1] > temp)
		{
			a[j] = a[j - 1];
			j--;
			for (int i = 0; i < 10; i++)
			{
				printf("%d   ", a[i]);
			}
			printf("\n");
		}
		a[j] = temp;
	}


}

void yanghui()
{
	int a[10][10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 0 || i == j)
			{
				a[i][j] = 1;

			}
			else
			{
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%*d", 30 - i * 2, a[i][0]);
		for (int j = 0; j <= i; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n	");
	}
}

void main()
{
	//_beginthread(timeset, 0, NULL);
	//_beginthread(colorall2,0,NULL);
	//detach();
	//system("color 3f");
	//system("pause");
	//for (int i = 0; i < 3 ; i++)
	//{
	//_beginthread(run, 0, NULL);
	//}
	//system("pause");
	/*printf("%f\n",pf(63));
	double des = 0.0;
	for (int i = 0; i <= 63; i++)
	{
	des += pf(i);
	printf("%f\n", des);
	}
	printf("%e\n", des);*/
	/*guessTest();
	delayed();*/
	/*runCircle();
	int a = 25;
	int b = 110;
	printf("%d,%d", gongyueshu(b , a), a * b / gongyueshu(b, a));*/
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)//����
	{
		a[10 - 1 - i][0] = n - i;//����
	}
	show(a);
	hanno(n, 'A', 'B', 'C');
	MessageBoxA(0, "jjjjjjjjjjj", "sdfdfdsfsfsf", 0);
	HANDLE hthread;
	DWORD threadid;  //保存线程编号
	for (int i = 0; i < 5; i++)
	{
		hthread = CreateThread(NULL,//安全属性
			NULL, //堆栈大小
			mymsg, //线程的入口点
			NULL, //函数的参数
			0, //立刻执行
			&threadid);//保存线程ID
		WaitForSingleObject(hthread, INFINITE);//wait等待
		CloseHandle(hthread);
	}

	system("pause");
}

