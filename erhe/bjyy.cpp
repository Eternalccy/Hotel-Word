#include<stdio.h>
#include<windows.h>
#include"bjyy.h"

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

    mciOpen.lpstrElementName = "111.mp3";     //���Ըĳ����Լ��ĸ���Ŀ¼                   //�Ⱥ�Ҫȥ���ԡ��������ԡ����桷�ַ��������ַ���
    mciSendCommand(0, MCI_OPEN, MCI_OPEN_ELEMENT, (DWORD)&mciOpen);

    mciSendCommand(mciOpen.wDeviceID, MCI_PLAY, MCI_DGV_PLAY_REPEAT,
        (DWORD)&mciPlay);

    mciSendCommand(mciOpen.wDeviceID, MCI_SETAUDIO, MCI_DGV_SETAUDIO_VALUE | 
        MCI_DGV_SETAUDIO_ITEM,(DWORD)(LPVOID)&mciSetAudioPara);


    return 0;
}

int m_bjyy()
{
char ch[50];
char ch1[50]={"1"};
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
printf("\t\t\t\t\t\t\t\t\t\t\b\b\b\b��ȫ��֮�󣬰� 1 �򿪱������֣�������������~��   �ش�");scanf("%s",ch);
if(strcmp(ch,ch1)==0)//��������
{
    HANDLE hThread1;
    hThread1=CreateThread(NULL,0,play_bgm_poc,NULL,0,NULL);
    CloseHandle(hThread1);

}
return 0;
}