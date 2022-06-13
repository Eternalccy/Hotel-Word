#include<stdio.h>
#include<windows.h>
#include"jdgl.h"
#include"yydc.h"
#include"bjyy.h"
#include"tb.h"

/*#pragma comment(lib,"glew32.lib")*/

#pragma comment(lib,"Winmm.lib")
#include<commctrl.h> 
#include<mmsystem.h>
#include<digitalv.h>
#include <process.h>

void main()
{int x;
m_tb;
m_bjyy();
a1:system("cls");char s;
printf("\n\n\n\t\t\t\t\t\t\t\t\t\t1.酒店管理\n\n\t\t\t\t\t\t\t\t\t\t2.英语单词\n\n\t\t\t\t\t\t\t\t\t\t请输入：");
b1:fflush(stdin);s=getchar();
if(s=='1') 
{x=m_jdgl();
	if(x)  {system("cls");system("color 0F");goto a1;}
}
else if(s=='2')
{x=m_yydc();
if(x)  
{/*system("pause");mciSendString("close 111.mp3", NULL, 0, NULL);*/system("cls");system("color 0F");goto a1;}
}
else  {printf("\n\n\n\t\t\t\t\t\t\t\t\t\t请重新输入：");goto b1;}


}