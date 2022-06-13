#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#define N 500
#pragma comment(lib,"Winmm.lib")
#include<commctrl.h> 
#include<mmsystem.h>
#include<digitalv.h>
#include <process.h>

int index = 0;
DWORD WINAPI play_bgm_poc(LPVOID lpParameter)
{
    static MCI_OPEN_PARMS mciOpen;
    static MCI_PLAY_PARMS mciPlay;
    static MCI_DGV_SETAUDIO_PARMS mciSetAudioPara;

    mciOpen.lpstrElementName = "111.mp3";     //可以改成你自己的歌曲目录
    mciSendCommand(0, MCI_OPEN, MCI_OPEN_ELEMENT, (DWORD)&mciOpen);

    mciSendCommand(mciOpen.wDeviceID, MCI_PLAY, MCI_DGV_PLAY_REPEAT,
        (DWORD)&mciPlay);

    mciSendCommand(mciOpen.wDeviceID, MCI_SETAUDIO, MCI_DGV_SETAUDIO_VALUE | 
        MCI_DGV_SETAUDIO_ITEM,(DWORD)(LPVOID)&mciSetAudioPara);


    return 0;
}


/*单词*/
typedef struct danci
{char danc[50];
int shunx;
char yisi[120];
}DANCI;
/*声明*/
int danci1(danci dc[N]);
int danci2(danci dc[N]);
int danci3(danci dc[N]);
int danci4(danci dc[N]);
int danci5(danci dc[N]);
int danci6(danci dc[N]);
int danci7(danci dc[N]);
void kaitou();
void tuan();
void tuan2();


FILE *fppp;
void m_yydc()
{struct danci dc[N];
int y,i;
int cishu[7][500]={0};
char ch[50];
char ch1[50]={"1"};
system("color F0");
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
printf("\t\t\t\t\t\t\t\t\t\t\b\b\b\b【全屏之后，按 1 打开背景音乐，否则输入其他~】   回答：");scanf("%s",ch);

if(strcmp(ch,ch1)==0)
{/*背景音乐*/
    HANDLE hThread1;
    hThread1=CreateThread(NULL,0,play_bgm_poc,NULL,0,NULL);
    CloseHandle(hThread1);

/**/
}





kaitou();
bb:system("cls");
printf("\n        ———————————————————————————————————————————————————————————————————————————————————————\n");
printf("\n\t\t\t\t\t\t\t\t     欢  迎  使  用  龙  龙  牌  单  词  复  习  \n\n\n\t\t\t\t\t\t\t\t\t\t1.单词复习\n\n\t\t\t\t\t\t\t\t\t\t2.复习情况\n\n\t\t\t\t\t\t\t\t\t\t3.单词总览\n\n\t\t\t\t\t\t\t\t\t\t4.单词抽默\n\n\n\t\t\t\t\t\t\t\t\t （本程序按00一律回到主页面。）\n");
printf("\n\t\t\t\t\t\t\t\t\t\t");cf:fflush(stdin);scanf("%d",&y);printf("\n");

if(y==1)
{int x,n,a,i,m,j,dui,cuo,bk,min,max,ui;
int hu[500];
int gg[500];
char ccdd[50];
char ccee[50];
int vc[5][4]={{1,67,138,208},{1,80,158,237},{1,81,169,252},{1,86,170,264},{1,86,179,260}};
int vxc[6][3]={{30,104,174},{40,117,195},{42,124,214},{39,128,213},{41,133,220},{40}};
hh:system("cls");
printf("\n        ——————————————————————————————————  单 词  复 习  ——————————————————————————————————————————————\n");
printf("\n\t\t\t\t\t\t\t\t\t\tpart 1\n\n\t\t\t\t\t\t\t\t\t\tpart 2\n\n\t\t\t\t\t\t\t\t\t\tpart 3\n\n\t\t\t\t\t\t\t\t\t\tpart 4\n\n\t\t\t\t\t\t\t\t\t\tpart 5\n\n\t\t\t\t\t\t\t\t\t\tpart 6\n\n\t\t\t\t\t\t\t\t\t\tpart 7\n\n\n\t\t\t\t\t\t\t\t\t\t请输入要复习的板块:");
aa:fflush(stdin);scanf("%d",&x);printf("\n\t\t\t\t\t\t\t\t\t\t");
if(x==1)  n=danci1(dc);
else if(x==2)   n=danci2(dc);
else if(x==3)   n=danci3(dc);
else if(x==4)   n=danci4(dc);
else if(x==5)   n=danci5(dc);
else if(x==6)   n=danci6(dc);
else if(x==7)   n=danci7(dc);
else if(x==00)  goto bb;
else  {printf("请认真对待！再次输入要复习的板块:");goto  aa;}

hhck:system("cls");
if(x==6||x==7)
{printf("        ———————————————————————————————————— part %d ———————————————————————————————————————————————\n",x);
printf("\n\t\t\t\t\t\t\t\t\t\t1.全篇  %d 个\n\n\t\t\t\t\t\t\t\t\t\t2.返回\n\n\t\t\t\t\t\t\t\t\t\t请输入要复习的篇章:",n);
abk:fflush(stdin);scanf("%d",&bk);printf("\n\t\t\t\t\t\t\t\t\t\t");
if(bk==1)  {min=1;max=n;}
else if(bk==2)  goto hh;
else if(bk==00)   goto bb;
else {printf("请认真对待！再次输入要复习的板块:");goto  abk;}
}
else
{printf("\n        ———————————————————————————————————— part %d ———————————————————————————————————————————————\n",x);
printf("\n\t\t\t\t\t\t\t\t\t\t1.上篇  %d 个\n\n\t\t\t\t\t\t\t\t\t\t2.中篇  %d 个\n\n\t\t\t\t\t\t\t\t\t\t3.下篇  %d 个\n\n\t\t\t\t\t\t\t\t\t\t4.全篇  %d 个\n\n\t\t\t\t\t\t\t\t\t\t5.返回\n\n\t\t\t\t\t\t\t\t\t\t请输入要复习的篇章:",vc[x-1][1]-vc[x-1][0]+1,vc[x-1][2]-vc[x-1][1],vc[x-1][3]-vc[x-1][2],n);
aak:fflush(stdin);scanf("%d",&bk);printf("\n\t\t\t\t\t\t\t\t\t\t");
if(bk==1)  {min=vc[x-1][bk-1];max=vc[x-1][bk];}
else if(bk==2)   {min=vc[x-1][bk-1]+1;max=vc[x-1][bk];}
else if(bk==3)  {min=vc[x-1][bk-1]+1;max=vc[x-1][bk];}
else if(bk==4)   {min=vc[x-1][0];max=vc[x-1][3];}
else if(bk==5)   goto hh;
else if(bk==00)   goto bb;
else {printf("请认真对待！再次输入要复习的板块:");goto  aak;}
if(bk==4)   goto uuss;
}
/**选择ab所有*/
system("cls");
if(x<7&&bk!=4)
	{if(bk==1)  
		 if(x<6) printf("\n        ——————————————————————————————————  part %d   上 篇  —————————————————————————————————————————————\n",x);
         else  printf("\n        ——————————————————————————————————  part %d   全 篇  —————————————————————————————————————————————\n",x);
	else if(bk==2)   printf("\n        ——————————————————————————————————  part %d   中 篇  —————————————————————————————————————————————\n",x);
	else printf("\n        ——————————————————————————————————  part %d   下 篇  —————————————————————————————————————————————\n",x);
    }
printf("\n\t\t\t\t\t\t\t\t\t\t1.A区  %d 个\n\n\t\t\t\t\t\t\t\t\t\t2.B区  %d 个\n\n\t\t\t\t\t\t\t\t\t\t3.all  %d 个\n\n\t\t\t\t\t\t\t\t\t\t4.返回\n\n\t\t\t\t\t\t\t\t\t\t请输入要复习的区域:",vxc[x-1][bk-1]-min+1,max-vxc[x-1][bk-1],max-min+1);
uxxi:fflush(stdin);scanf("%d",&ui);printf("\n\t\t\t\t\t\t\t\t\t\t");
if(ui==1)  max=vxc[x-1][bk-1];
else if(ui==2)   min=vxc[x-1][bk-1]+1;
else if(ui==3)  
      {if(x<6)
		  if(bk==1)  {min=vc[x-1][bk-1];max=vc[x-1][bk];}
          else if(bk==2)   {min=vc[x-1][bk-1]+1;max=vc[x-1][bk];}
          else  
		      {min=vc[x-1][bk-1]+1;max=vc[x-1][bk];}
	  else 
	  {min=1;max=n;}
      }
else if(ui==4)   goto hhck;
else if(ui==00)   goto bb;
else {printf("请认真对待！再次输入要复习的区域:");goto  uxxi;}

uuss:for(i=min-1;i<max;i++)   cishu[x-1][i]=0;
dui=0;cuo=0;

system("cls");
for(i=3;i>0;i--)
{printf("\n        ———————————————————————————————————————————————————————————————————————————————————————\n");
printf("\n\t\t\t\t\t\t\t\t你只有两次的机会输入单词，%d秒后进入单词复习。",i);
Sleep(500);
system("cls");
}

/*AB所有******************************/

system("cls");
if((x<6&&bk==4)||(x==7&&bk==1))
          printf("\n        ———————————————————————————————— part %d  全 篇 【 %d 个 】————————————————————————————————————————————\n",x,max-min+1);
else
    {if(ui==3)
		{if(x<7&&bk!=4)
		if(bk==1)  
			 if(x<6) 
				   printf("\n        ——————————————————————————————— part %d  上篇 【all:  %d 个 】——————————————————————————————————————————\n",x,max-min+1);
           	 else  printf("\n        ——————————————————————————————— part %d  全篇 【all:  %d 个 】——————————————————————————————————————————\n",x,max-min+1);
		else if(bk==2)   printf("\n        ——————————————————————————————— part %d  中篇 【all:  %d 个 】——————————————————————————————————————————\n",x,max-min+1);
		else printf("\n        ——————————————————————————————— part %d  下篇 【all:  %d 个 】——————————————————————————————————————————\n",x,max-min+1);
        }
	else if(ui==1)
		{if(x<7&&bk!=4)
		if(bk==1)  
			 if(x<6) 
				   printf("\n        ——————————————————————————————— part %d  上篇 【A区:  %d 个 】——————————————————————————————————————————\n",x,max-min+1);
           	 else  printf("\n        ——————————————————————————————— part %d  全篇 【A区:  %d 个 】——————————————————————————————————————————\n",x,max-min+1);
		else if(bk==2)   printf("\n        ——————————————————————————————— part %d  中篇 【A区:  %d 个 】——————————————————————————————————————————\n",x,max-min+1);
		else printf("\n        ——————————————————————————————— part %d  下篇 【A区:  %d 个 】——————————————————————————————————————————\n",x,max-min+1);
        }
	else
		{if(x<7&&bk!=4)
		if(bk==1)  
			 if(x<6) 
				   printf("\n        ——————————————————————————————— part %d  上篇 【B区:  %d 个 】——————————————————————————————————————————\n",x,max-min+1);
           	 else  printf("\n        ——————————————————————————————— part %d  全篇 【B区:  %d 个 】——————————————————————————————————————————\n",x,max-min+1);
		else if(bk==2)   printf("\n        ——————————————————————————————— part %d  中篇 【B区:  %d 个 】——————————————————————————————————————————\n",x,max-min+1);
		else printf("\n        ——————————————————————————————— part %d  下篇 【B区:  %d 个 】——————————————————————————————————————————\n",x,max-min+1);
        }
    }
/******************************/
dui=0;cuo=0;

srand((unsigned)time(NULL));

a=rand()%(n-1+1+1);
while(a==0)
a=rand()%(n-1+1+1);

hu[0]=a;
for(i=1;i<n;i++)
{a=rand()%(n-1+1+1);
while(a==0)
a=rand()%(n-1+1+1);
for(j=0;j<i;j++)
if(a==hu[j])  break;
if(i>j)  i--;
else hu[i]=a;
}

j=0;
for(i=0;i<n;i++)
if(hu[i]>=min&&hu[i]<=max)  gg[j++]=hu[i];

for(i=0;i<j;i++)
{printf("\n\t\t\t\t\t\t\t\t\b\b\b\b√. %-120s\n",dc[gg[i]-1].yisi);
m=0;
gv:printf("\n\t\t\t\t\t\t\t\t");fflush(stdin);gets(ccdd);

if(ccdd[0]!='0'&&ccdd[1]!='0')   

		if(strcmp(ccdd,dc[gg[i]-1].danc)==0)      {dui++;cishu[x-1][gg[i]-1]=1;}
		else {m++;if(m==1)  goto gv;
		           else {
					   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
					     printf("\n\t\t\t\t\t\t\t\t正确答案:%s\n",dc[gg[i]-1].danc);cishu[x-1][gg[i]-1]=m;cuo++;
				         oip:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),249); 
                             printf("\n\t\t\t\t\t\t\t\t再次复习:");fflush(stdin);gets(ccee);
				         if(strcmp(ccee,dc[gg[i]-1].danc)!=0)  goto oip;
						 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
				      }
		     }
else 
{cishu[x-1][gg[i]-1]=2;
if((i+1)%10==0)
{printf("\n                                                                                                                                                                      %d               \n",i+1);
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n\n");
}
else
{printf("\n                                                                                                                                                                     %d               \n",i+1);
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n\n");
}
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
printf("\n\t\t\t\t\t\t\t\t\t\t本次退出前  ( 正确率： %.2f%% )\n\n\t\t\t\t\t\t\t\t\t\t对%d个，错%d个，未复习%d个\n\n\n\t\t\t\t\t\t\t\t\t\t按任意键返回。",(dui*1.0)/(dui+cuo+1)*100,dui,cuo+1,max-min-dui-cuo-1+1);getch();goto hh;
goto bb;
}

if((i+1)%10==0)
{printf("\n                                                                                                                                                                     %d               \n",i+1);
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
}printf("\n"); 
}
if(j%10!=0)
{printf("\n                                                                                                                                                                     %d               \n",j);
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n\n");
}
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
printf("\n\t\t\t\t\t\t\t\t\t\t本板块已经复习完了  ( 正确率： %.2f%% )\n\n\t\t\t\t\t\t\t\t\t\t对%d个，错%d个，未复习%d个\n\n\n\t\t\t\t\t\t\t\t\t\t按任意键返回。",(dui*1.0)/(dui+cuo)*100,dui,cuo,max-min-dui-cuo+1);getch();goto hh;

}

else if(y==2)
{int n,x,ma,mb,mc,ki,ra,maa,mbb,mcc;
ghh:system("cls");
printf("\n        ——————————————————————————————————  复 习  情 况  ——————————————————————————————————————————————\n");
printf("\n\t\t\t\t\t\t\t\t\t\tpart 1\n\n\t\t\t\t\t\t\t\t\t\tpart 2\n\n\t\t\t\t\t\t\t\t\t\tpart 3\n\n\t\t\t\t\t\t\t\t\t\tpart 4\n\n\t\t\t\t\t\t\t\t\t\tpart 5\n\n\t\t\t\t\t\t\t\t\t\tpart 6\n\n\t\t\t\t\t\t\t\t\t\tpart 7\n\n\n\t\t\t\t\t\t\t\t\t\t请输入要查找的复习单词板块情况:");
dd:fflush(stdin);scanf("%d",&x);
if(x==1)  n=danci1(dc);
else if(x==2)   n=danci2(dc);
else if(x==3)   n=danci3(dc);
else if(x==4)   n=danci4(dc);
else if(x==5)   n=danci5(dc);
else if(x==6)   n=danci6(dc);
else if(x==7)   n=danci7(dc);
else if(x==00)  goto bb;
else  {printf("\n\t\t\t\t\t\t\t\t\t\t");printf("请认真对待！再次输入要查找的复习单词板块情况:");goto  dd;}
system("cls");
ma=0;mb=0;mc=0;
maa=0;mbb=0;mcc=0;
for(i=0;i<n;i++)
if(cishu[x-1][i]==0) ma++;
else if(cishu[x-1][i]==1)  mb++;
else mc++;

printf("\n        ———————————————————————————————————— part %d ———————————————————————————————————————————————\n",x);
printf("\n\t\t\t\t\t\t\t\t\t\t1.错题\n\n\t\t\t\t\t\t\t\t\t\t2.已复习\n\n\t\t\t\t\t\t\t\t\t\t3.未复习\n\n\t\t\t\t\t\t\t\t\t\t4.返回\n\n\n\t\t\t\t\t\t\t\t\t\t请输入要查看的题库:");
dpp:fflush(stdin);scanf("%d",&ra);printf("\n\t\t\t\t\t\t\t\t\t\t");
gpt:
if(ra==1)  
{printf("\n\n");
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
printf("\n\t\t\t\t\t\t\t\t\t\t错题（再接再厉）：%d\n\n",mc);
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
for(i=0;i<n;i++)
if(cishu[x-1][i]==2)
{printf("\t\t%-50s%-120s",dc[i].danc,dc[i].yisi);printf("\n");mcc++;
if(mcc%10==0)  
{printf("\n                                                                                                                                                                     %d               \n",mcc);
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
}printf("\n");
}
if(mc%10!=0)
{printf("\n                                                                                                                                                                     %d               \n",mc);
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n\n");
}
}

else if(ra==2)  
{printf("\n\n");
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
printf("\n\t\t\t\t\t\t\t\t\t\t已复习单词：%d\n\n",mb);
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
for(i=0;i<n;i++)
if(cishu[x-1][i]==1)
{printf("\t\t%-50s%-120s",dc[i].danc,dc[i].yisi);printf("\n");mbb++;
if(mbb%10==0)  
{printf("\n                                                                                                                                                                     %d               \n",mbb);
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
}printf("\n");
}
if(mb%10!=0)
{printf("\n                                                                                                                                                                     %d               \n",mb);
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n\n");
}
}

else if(ra==3)  
{printf("\n\n");
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
printf("\n\t\t\t\t\t\t\t\t\t\t未复习单词：%d\n\n",ma);
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
for(i=0;i<n;i++)
if(cishu[x-1][i]==0)
{printf("\t\t%-50s%-120s",dc[i].danc,dc[i].yisi);printf("\n");maa++;
if(maa%10==0)  
{printf("\n                                                                                                                                                                     %d               \n",maa);
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
}printf("\n");
}
if(ma%10!=0)
{printf("\n                                                                                                                                                                     %d               \n",ma);
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n\n");
}
}
else if(ra==4)   goto ghh;
else if(ra==00)   goto bb;
else   {printf("请认真对待！再次输入要查看的题库:");goto  dpp;}

fflush(stdin);printf("\n\t\t\t\t\t\t\t\t\t\t请输入要查看的题库:");scanf("%d",&ra);
if(ra==00||ra==1||ra==2||ra==3||ra==4)
{system("cls");
printf("\n        ———————————————————————————————————— part %d ———————————————————————————————————————————————\n",x);
printf("\n\t\t\t\t\t\t\t\t\t\t1.错题\n\n\t\t\t\t\t\t\t\t\t\t2.已复习\n\n\t\t\t\t\t\t\t\t\t\t3.未复习\n\n\t\t\t\t\t\t\t\t\t\t4.返回\n\n\n\t\t\t\t\t\t\t\t\t\t请输入要查看的题库:");
goto gpt;
}

}

else if(y==3)
{int x,n;
char ccdd[100];
char da[2]={00};
op:system("cls");
printf("\n        ——————————————————————————————————  单 词  总 览  ——————————————————————————————————————————————\n");
printf("\n\t\t\t\t\t\t\t\t\t\tpart 1\n\n\t\t\t\t\t\t\t\t\t\tpart 2\n\n\t\t\t\t\t\t\t\t\t\tpart 3\n\n\t\t\t\t\t\t\t\t\t\tpart 4\n\n\t\t\t\t\t\t\t\t\t\tpart 5\n\n\t\t\t\t\t\t\t\t\t\tpart 6\n\n\t\t\t\t\t\t\t\t\t\tpart 7\n\n\n\t\t\t\t\t\t\t\t\t\t请输入要查看的单词板块:");
dp:fflush(stdin);scanf("%d",&x);
if(x==1)  n=danci1(dc);
else if(x==2)   n=danci2(dc);
else if(x==3)   n=danci3(dc);
else if(x==4)   n=danci4(dc);
else if(x==5)   n=danci5(dc);
else if(x==6)   n=danci6(dc);
else if(x==7)   n=danci7(dc);
else if(x==00)  goto bb;
else  {printf("\n\t\t\t\t\t\t\t\t\t\t请认真对待！再次输入要查看的单词板块:");goto  dp;}
system("cls");
printf("\n        ———————————————————————————————————————————————————————————————————————————————————————\n");
printf("\n\t\t\t\t\t\t\t\t\t\t\bpart %d 单词总览 (%d个)\n\n",x,n);
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
for(i=0;i<n;i++)
{printf("\t\t%-50s%-120s",dc[i].danc,dc[i].yisi);printf("\n");
if((i+1)%10==0)  
{printf("\n                                                                                                                                                                     %d               \n",i+1);
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
}printf("\n");
}
if(n%10!=0)  
{printf("                                                                                                                                                                     %d               \n",n);
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
}
fflush(stdin);printf("\n\n\t\t\t\t\t\t\t\t\t\t按任意键返回");getch();goto op;

}

else if(y==4)
{int x,n,c,v,a,i,j,b,f,m,dui,cuo,hhccc,xxd,sx,sy;
int hu[500];
int gg[500];
char ccdd[50];
char ccee[50];
hchc:system("cls");
printf("\n        ——————————————————————————————————  单 词  抽 默  ——————————————————————————————————————————————\n");
printf("\n\t\t\t\t\t\t\t\t\t\tpart 1\n\n\t\t\t\t\t\t\t\t\t\tpart 2\n\n\t\t\t\t\t\t\t\t\t\tpart 3\n\n\t\t\t\t\t\t\t\t\t\tpart 4\n\n\t\t\t\t\t\t\t\t\t\tpart 5\n\n\t\t\t\t\t\t\t\t\t\tpart 6\n\n\t\t\t\t\t\t\t\t\t\tpart 7\n\n\n\t\t\t\t\t\t\t\t\t\t请输入要抽默的单词板块:");
dpxx:fflush(stdin);scanf("%d",&x);
if(x==1)  n=danci1(dc);
else if(x==2)   n=danci2(dc);
else if(x==3)   n=danci3(dc);
else if(x==4)   n=danci4(dc);
else if(x==5)   n=danci5(dc);
else if(x==6)   n=danci6(dc);
else if(x==7)   n=danci7(dc);
else if(x==00)  goto bb;
else  {printf("\n\t\t\t\t\t\t\t\t\t\t请认真对待！再次输入要查看的单词板块:");goto  dpxx;}


/*****************************************************************/



system("cls");
printf("\n        ——————————————————————————————— part %d    抽默  （共 %d 个） ——————————————————————————————————————————\n",x,n);
printf("\n\t\t\t\t\t\t\t\t\t\t\b\b抽 默 个 数 ：");dpxxc:fflush(stdin);scanf("%d",&c);
if(c>n)  {printf("\n\t\t\t\t\t\t\t\t\t\t\b\b请认真对待！再次输入抽默个数：");goto  dpxxc;}
if(c==00)   goto bb;
printf("\n\t\t\t\t\t\t\t\t\t\t\b\b中→英 占 数 ：");dpxc:fflush(stdin);scanf("%d",&v);
if(v>c)  {printf("\n\t\t\t\t\t\t\t\t\t\t\b\b请认真对待！再次输入英文占数：");goto  dpxc;}
printf("\n\t\t\t\t\t\t\t\t\t\t\b\b英→中 占 数 ：%d\n\n\t\t\t\t\t\t\t\t\t\t\b\b3秒后，进入默写~",c-v);Sleep(2000);
system("cls");
printf("\n        —————————————————————————————— 总共：%d   中→英：%d   英→中：%d    —————————————————————————————————————————\n",c,v,c-v);
/*随机产生从两组c个数，一组正常，另一组中文出现*/
srand((unsigned)time(NULL));
a=rand()%(n-1+1+1);
while(a==0)
a=rand()%(n-1+1+1);
hu[0]=a;
for(i=1;i<n;i++)
{a=rand()%(n-1+1+1);
while(a==0)
a=rand()%(n-1+1+1);
for(j=0;j<i;j++)
if(a==hu[j])  break;
if(i>j)  i--;
else hu[i]=a;
}

b=rand()%(n-1+1+1);
while(b==0)
b=rand()%(n-1+1+1);
gg[0]=b;
for(i=1;i<n;i++)
{b=rand()%(n-1+1+1);
while(b==0)
b=rand()%(n-1+1+1);
for(j=0;j<i;j++)
if(b==gg[j])  break;
if(i>j)  i--;
else gg[i]=b;
}
/*判断是否是正确的  英译中  个数*/
sx=0;sy=c-v;
while(sx<c-v)
{sx=0;
for(i=0;i<c;i++)
{for(j=0;j<sy;j++)
if(hu[i]==gg[j])  {sx++;break;}
}
sy++;
}

/**/
dui=0;cuo=0;xxd=0;
for(i=0;i<c;i++)
{f=0;
for(j=0;j<sy-1;j++)
if(hu[i]==gg[j])  {f=1;break;}

if(f==1)  printf("\n\t\t\t\t\t\t\t\t\b\b\b\b√. %-50s\n",dc[hu[i]-1].danc);
else  printf("\n\t\t\t\t\t\t\t\t\b\b\b\b√. %-120s\n",dc[hu[i]-1].yisi);

m=0;
gvf:printf("\n\t\t\t\t\t\t\t\t");fflush(stdin);gets(ccdd);
if(f==0)
{
	if(ccdd[0]!='0'&&ccdd[1]!='0')   

			if(strcmp(ccdd,dc[hu[i]-1].danc)==0)      {dui++;cishu[x-1][hu[i]-1]=1;printf("\n");}
			else {m++;if(m==1)  goto gvf;
					   else {SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
						   printf("\n\t\t\t\t\t\t\t\t正确答案:%s\n",dc[hu[i]-1].danc);cuo++;
                           oop: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),249); 
						   printf("\n\t\t\t\t\t\t\t\t再次复习:");fflush(stdin);gets(ccee);
				         if(strcmp(ccee,dc[hu[i]-1].danc)!=0)  goto oop;
						 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240); printf("\n");
                            }



				 }
	else 
	  {
		printf("\n                                                                                                                                                                     %d               \n",dui+cuo+1+xxd);
		
	printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t本次退出前  ( 正确率： %.2f%% )\n\n\n\t\t\t\t\t\t\t\t\t\t中→英\t\t对%d个，错%d个,出现%d个\t\t共%d个\t\t\t\n\n\n\t\t\t\t\t\t\t\t\t\t英→中\t\t出现：%d个\t\t\t共%d个\n\n\n\t\t\t\t\t\t\t\t\t\t未默写: %d个\n\n\n\t\t\t\t\t\t\t\t\t查看完毕  默写情况  后，按1返回，按2返回主页面\n\n\t\t\t\t\t\t\t\t\t\t回答：",(dui*1.0)/(dui+cuo+1)*100,dui,cuo+1,dui+cuo+1,v,xxd,c-v,c-dui-cuo-1-xxd);
	dppcc:fflush(stdin);scanf("%d",&hhccc);
	if(hhccc==1) goto hchc;
	else if(hhccc==2||hhccc==0)  goto bb;
	else   {printf("\n\t\t\t\t\t\t\t\t\t\t\b\b请认真对待！再次输入：");goto  dppcc;}
	}
}
else 
	if(ccdd[0]!='0'&&ccdd[1]!='0')    {SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
                                       printf("\n\t\t\t\t\t\t\t\t正确答案:%s\n",dc[hu[i]-1].yisi);xxd++;
						 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240); printf("\n");}



	else 
	  {
		printf("\n                                                                                                                                                                     %d               \n",dui+cuo+xxd+1);
		
	printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t本次退出前  ( 正确率： %.2f%% )\n\n\n\t\t\t\t\t\t\t\t\t\t中→英\t\t对%d个，错%d个，出现%d个\t\t共%d个\t\t\t\n\n\n\t\t\t\t\t\t\t\t\t\t英→中\t\t出现：%d个\t\t\t共%d个\n\n\n\t\t\t\t\t\t\t\t\t\t未默写: %d个\n\n\n\t\t\t\t\t\t\t\t\t查看完毕  默写情况  后，按1返回，按2返回主页面\n\n\t\t\t\t\t\t\t\t\t\t回答：",(dui*1.0)/(dui+cuo)*100,dui,cuo,dui+cuo,v,xxd+1,c-v,c-dui-cuo-xxd-1);
	lopp:fflush(stdin);scanf("%d",&hhccc);
		if(hhccc==1) goto hchc;
		else if(hhccc==2||hhccc==0)  goto bb;
		else   {printf("\n\t\t\t\t\t\t\t\t\t\t\b\b请认真对待！再次输入：");goto  lopp;}
	}
if((i+1)%10==0)
		{printf("\n                                                                                                                                                                     %d               \n",i+1);
		printf("        ———————————————————————————————————————————————————————————————————————————————————————\n\n");
		}

}
if(c%10!=0)
{printf("\n                                                                                                                                                                     %d               \n",c);		
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
}
printf("\n\t\t\t\t\t\t\t\t\t\t此次默写已经结束了  ( 正确率： %.2f%% )\n\n\n\t\t\t\t\t\t\t\t\t\t中→英\t\t对%d个，错%d个，出现%d个\t\t共%d个\t\t\t\n\n\n\t\t\t\t\t\t\t\t\t\t英→中\t\t出现：%d个\t\t\t共%d个\n\n\n\t\t\t\t\t\t\t\t\t查看完毕  默写情况  后，按1返回，按2返回主页面\n\n\t\t\t\t\t\t\t\t\t\t回答：",(dui*1.0)/v*100,dui,cuo,dui+cuo,v,c-v,c-v);
dppccxc:fflush(stdin);scanf("%d",&hhccc);
		if(hhccc==1) goto hchc;
		else if(hhccc==2||hhccc==0)  goto bb;
		else   {printf("\n\t\t\t\t\t\t\t\t\t\t\b\b请认真对待！再次输入：");goto  dppccxc;}


}


else
{printf("\t\t\t\t\t\t\t\t\t\t请认真对待！再次输入要复习的板块:");goto  cf;}

}




int danci1(danci dc[N])
{int n;
n=0;
if((fppp=fopen("danc1.txt","r"))==NULL)
{printf("敬请期待");exit(0);}
while(!feof(fppp))
{fscanf(fppp,"%50s%4d%120s\n",dc[n].danc,&dc[n].shunx,dc[n].yisi);
printf("\n");
n++;
}
fclose(fppp);
return n;
}

int danci2(danci dc[N])
{int n;
n=0;
if((fppp=fopen("danc2.txt","r"))==NULL)
{printf("敬请期待");exit(0);}
while(!feof(fppp))
{fscanf(fppp,"%50s%4d%120s\n",dc[n].danc,&dc[n].shunx,dc[n].yisi);
printf("\n");
n++;
}
fclose(fppp);
return n;
}

int danci3(danci dc[N])
{int n;
n=0;
if((fppp=fopen("danc3.txt","r"))==NULL)
{printf("敬请期待");exit(0);}
while(!feof(fppp))
{fscanf(fppp,"%50s%4d%120s\n",dc[n].danc,&dc[n].shunx,dc[n].yisi);
printf("\n");
n++;
}
fclose(fppp);
return n;
}

int danci4(danci dc[N])
{int n;
n=0;
if((fppp=fopen("danc4.txt","r"))==NULL)
{printf("敬请期待");exit(0);}
while(!feof(fppp))
{fscanf(fppp,"%50s%4d%120s\n",dc[n].danc,&dc[n].shunx,dc[n].yisi);
printf("\n");
n++;
}
fclose(fppp);
return n;
}

int danci5(danci dc[N])
{int n;
n=0;
if((fppp=fopen("danc5.txt","r"))==NULL)
{printf("敬请期待");exit(0);}
while(!feof(fppp))
{fscanf(fppp,"%50s%4d%120s\n",dc[n].danc,&dc[n].shunx,dc[n].yisi);
printf("\n");
n++;
}
fclose(fppp);
return n;
}

int danci6(danci dc[N])
{int n;
n=0;
if((fppp=fopen("danc6.txt","r"))==NULL)
{printf("敬请期待");exit(0);}
while(!feof(fppp))
{fscanf(fppp,"%50s%4d%120s\n",dc[n].danc,&dc[n].shunx,dc[n].yisi);
printf("\n");
n++;
}
fclose(fppp);
return n;
}

int danci7(danci dc[N])
{int n;
n=0;
if((fppp=fopen("danc7.txt","r"))==NULL)
{printf("敬请期待");exit(0);}
while(!feof(fppp))
{fscanf(fppp,"%50s%4d%120s\n",dc[n].danc,&dc[n].shunx,dc[n].yisi);
printf("\n");
n++;
}
fclose(fppp);
return n;
}

/*开场*/
void kaitou()
{int i,j,k,m=0;
char zhh[40];
char mii[40];
char zh[40]={"zml"};
char mi[40]={"303006"};
for(i=1;i<=10;i++)
{system("cls");
tuan();
printf("\n\n\n\n\n\n\n\n\n\n\n\n");
for(j=0;j<i;j++)
printf("▆▆▆▆▆▆▆▆▆▆▆▆▆▆▆▆▆▆");
printf("  %d%%",i*10);
Sleep(400);
}
nnpp:system("cls");
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
printf("\t\t\t\t\t\t\t\t\t\t\b\b◤              ◥\n\n");
printf("\t\t\t\t\t\t\t\t\t\t\b\b  账号：");
fflush(stdin);gets(zhh);
printf("\n\t\t\t\t\t\t\t\t\t\t\b\b  密码：");
fflush(stdin);gets(mii);
printf("\n\t\t\t\t\t\t\t\t\t\t\b\b◣              ◢\n");
if((strcmp(zhh,zh)==0)&&(strcmp(mii,mi)==0))    {printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\b\b\b   合 作 愉 快 ~");Sleep(2000);}
else
{m++;
if(m==3)   
{printf("\n\n\n\n\n\n\n\n\n\n\n\n");
printf("\t\t\t\t\t\t\t\t\t\t\b\b\b有内鬼！！！终止交易！！！\n");Sleep(1000);
for(k=5;k>=0;k--)
{system("cls");
tuan2();
printf("\n\n\t\t\t\t\t\t\t\t\t\t\b\b\b\b\b程序将于%d秒后，与设备同归于尽！！！\n\n",k);
Sleep(700);
}
exit(0);
}
else {printf("\n\t\t\t\t\t\t\t\t\t\t\b\b账号或密码有误，请重新输入！");Sleep(1000);goto  nnpp;}
}

}

void tuan()
{printf("\n\n\n\n\n\n\n\n\n\n");
printf("\t\t\t\t\t\t\t\t\t\t\t\t\t     　　　　   ／|\n");
printf("\t\t\t\t\t\t\t\t\t\t\t\t\t　　 /＼ 　   ∠＿/\n");
printf("\t\t\t\t\t\t\t\t\t\t\t\t\t　  /　│　　 ／　／\n");
printf("\t\t\t\t\t\t\t\t\t\t\t\t\t　 │　/ ＿,＜ 　／　　 /`ヽ\n");
printf("\t\t\t\t\t\t\t\t\t\t◤            ◥\t   │　　　 　　ヽ\\ 　 /　　〉\n");
printf("\t\t\t\t\t\t\t\t\t\t\t\t\t 　 Y　　　　　`　\\  /　　/\n");
printf("\t\t\t\t\t\t\t\t\t\t天 王 盖 地 虎 ！\t   (●　、　●　　|〈　　/\n");
printf("\t\t\t\t\t\t\t\t\t\t\t\t\t　  \\　 へ　　　　|　＼〈\n");
printf("\t\t\t\t\t\t\t\t\t\t小 鸡 炖 蘑 菇 ~\t     >- 、_　 ィ　│  ／／\n");
printf("\t\t\t\t\t\t\t\t\t\t\t\t\t　  / へ　　 /　/＜| ＼＼\n");
printf("\t\t\t\t\t\t\t\t\t\t◣            ◢\t   ヽ_/　 　(_／　│ ／／\n");
printf("\t\t\t\t\t\t\t\t\t\t\t\t\t　　7　　　　　　　|／\n");
printf("\t\t\t\t\t\t\t\t\t\t\t\t\t　　＞―r￣￣`-―＿|\n");
}

void tuan2()
{printf("\n\n\n\n\n\n\n\n\n\n");
printf("\t\t\t\t\t\t\t\t\t  你 完 蛋 了 ！！！ 哈 哈 哈 哈 哈 ~  \n\n");
printf("\t\t\t\t\t\t\t\t\t　　　 ● 　 　　　　 ╭══╮\n");
printf("\t\t\t\t\t\t\t\t\t　　　　█┳　　　　 ╭╯ΘΘ║\n");
printf("\t\t\t\t\t\t\t\t\t　　　 ┛┗　　　　　╰⊙═⊙╯。oо○\n");

}
/*输入输出*/
/*if((fppp=fopen("danc1.txt","w"))==NULL)
{printf("no");exit(0);}
for(i=0;i<3;i++)
	{scanf("%50s%100s",&dc[i].danc,&dc[i].yisi);
	dc[i].shunx=i+1;
	fppprintf(fppp,"%-50s%-4d%-100s\n",dc[i].danc,dc[i].shunx,dc[i].yisi);
    }
fclose(fppp);
if((fppp=fopen("danc1.txt","r"))==NULL)
	{printf("no");exit(0);}
for(i=0;i<10;i++)
	{
	fscanf(fppp,"%50s%4d%100s\n",dc[i].danc,&dc[i].shunx,dc[i].yisi);
	printf("%-50s%-4d%-100s",dc[i].danc,dc[i].shunx,dc[i].yisi);
	printf("\n");
    }
fclose(fppp);*/