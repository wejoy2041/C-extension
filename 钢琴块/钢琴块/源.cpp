#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <easyx.h> //ͼ�ο⣬����ͼ�Σ��������
#include <stdlib.h>
#include <time.h>
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")
//#define INTERVAL 100 //����ĸ߶�
//#define GRID_W   100 //ÿ�����ӵĿ�ȣ�x
//#define GRID_H   150 //ÿ�����ӵĸ߶ȣ�y

//�������飬�����洢�ڿ�
int flags[4] = { 2,1,0,3 };
//ͳ�Ƴɹ����˶��ٸ��ڿ�
int gcount = 0;
//��ʼ������
void init()
{
	//�������������
	srand(time(NULL));
	//������ɺڿ�
	for (int i = 0; i < 4; i++)
	{
		flags[i] = rand() % 4;//0,1,2,3
	}
}

void draw()
{
	//����������ʽ
	setlinestyle(PS_SOLID, 2);//������ʽ��ʵ�ߣ�����...)��������ϸ
	//����������ɫ��Ĭ��Ϊ��ɫ
	setlinecolor(BLACK);

	for (int i = 0; i < 5; i++)
	{
		//��������
		//������
		line(0, i * 150 + 100, 400, i * 150 + 100);
		//������
		line(i * 100, 100, i * 100, 700);
	}

	//����������ʽ
	settextstyle(50, 0, _T("΢���ź�"));//�������ֳ�����������ʽ
	//����������ɫ
	settextcolor(BLACK);
	//�������
	outtextxy(100, 25, _T("��ã�����"));

	//����flags������ƺڿ�
	for (int i = 0; i < 4; i++)
	{
		//����ڿ�����Ͻǵ�����
		int x = flags[i] * 100;
		int y = i * 150 + 100;
		//���������ɫ
		setfillcolor(BLACK);
		//����һ������
		fillrectangle(x, y, x + 100, y + 150);
	}

}
//���������
bool mousePressMsg(ExMessage* msg)
{
	//��ȡ�±�Ϊ3�ĺڿ������
	int x = flags[3] * 100;
	int y = 3 * 150 + 100;
	//�ж��ǲ��ǵ�����±�Ϊ2�ĺڿ�
	if (msg->x > x && msg->x < x + 100 && msg->y > y && msg->y < y + 150)
	{
		//�ڿ���������ƶ�
		for (int i = 3; i > 0; i--)
		{
			flags[i] = flags[i - 1];
		}
		flags[0] = rand() % 4;
		gcount++;
		printf("����Ӵ,Score:%d\n", gcount);
		switch (gcount)
		{
		case 1:
			mciSendString(_T("open ������1.mp3"), 0, 0, 0);
			mciSendString(_T("play ������1.mp3"), 0, 0, 0);
			break;
		case 2:
			mciSendString(_T("open ������2.mp3"), 0, 0, 0);
			mciSendString(_T("play ������2.mp3"), 0, 0, 0);
			break;
		case 3:
			mciSendString(_T("open ������3.mp3"), 0, 0, 0);
			mciSendString(_T("play ������3.mp3"), 0, 0, 0);
			break;
		case 4:
			mciSendString(_T("open ������4.mp3"), 0, 0, 0);
			mciSendString(_T("play ������4.mp3"), 0, 0, 0);
			break;
		case 5:
			mciSendString(_T("open ������5.mp3"), 0, 0, 0);
			mciSendString(_T("play ������5.mp3"), 0, 0, 0);
			break;
		case 6:
			mciSendString(_T("open ������6.mp3"), 0, 0, 0);
			mciSendString(_T("play ������6.mp3"), 0, 0, 0);
			break;
		case 7:
			mciSendString(_T("open ������7.mp3"), 0, 0, 0);
			mciSendString(_T("play ������7.mp3"), 0, 0, 0);
			break;
		case 8:
			mciSendString(_T("open ������8.mp3"), 0, 0, 0);
			mciSendString(_T("play ������8.mp3"), 0, 0, 0);
			break;
		case 9:
			mciSendString(_T("open ������9.mp3"), 0, 0, 0);
			mciSendString(_T("play ������9.mp3"), 0, 0, 0);
			break;
		case 10:
			mciSendString(_T("open ������10.mp3"), 0, 0, 0);
			mciSendString(_T("play ������10.mp3"), 0, 0, 0);
			break;
		case 11:
			mciSendString(_T("open ������11.mp3"), 0, 0, 0);
			mciSendString(_T("play ������11.mp3"), 0, 0, 0);
			break;
		case 12:
			mciSendString(_T("open ������12.mp3"), 0, 0, 0);
			mciSendString(_T("play ������12.mp3"), 0, 0, 0);
			break;
		case 13:
			mciSendString(_T("open ������13.mp3"), 0, 0, 0);
			mciSendString(_T("play ������13.mp3"), 0, 0, 0);
			break;
		case 14:
			mciSendString(_T("open ������14.mp3"), 0, 0, 0);
			mciSendString(_T("play ������14.mp3"), 0, 0, 0);
			break;
		case 15:
			mciSendString(_T("open ������15.mp3"), 0, 0, 0);
			mciSendString(_T("play ������15.mp3"), 0, 0, 0);
			break;
		case 16:
			mciSendString(_T("open ������16.mp3"), 0, 0, 0);
			mciSendString(_T("play ������16.mp3"), 0, 0, 0);
			break;
		case 17:
			mciSendString(_T("open ������17.mp3"), 0, 0, 0);
			mciSendString(_T("play ������17.mp3"), 0, 0, 0);
			break;
		case 18:
			mciSendString(_T("open ������18.mp3"), 0, 0, 0);
			mciSendString(_T("play ������18.mp3"), 0, 0, 0);
			break;
		case 19:
			mciSendString(_T("open ������19.mp3"), 0, 0, 0);
			mciSendString(_T("play ������19.mp3"), 0, 0, 0);
			break;
		case 20:
			mciSendString(_T("open ������20.mp3"), 0, 0, 0);
			mciSendString(_T("play ������20.mp3"), 0, 0, 0);
			break;
		case 21:
			mciSendString(_T("open ������21.mp3"), 0, 0, 0);
			mciSendString(_T("play ������21.mp3"), 0, 0, 0);
			break;
		case 22:
			mciSendString(_T("open ������22.mp3"), 0, 0, 0);
			mciSendString(_T("play ������22.mp3"), 0, 0, 0);
			break;
		case 23:
			mciSendString(_T("open ������23.mp3"), 0, 0, 0);
			mciSendString(_T("play ������23.mp3"), 0, 0, 0);
			break;
		case 24:
			mciSendString(_T("open ������24.mp3"), 0, 0, 0);
			mciSendString(_T("play ������24.mp3"), 0, 0, 0);
			break;
		case 25:
			mciSendString(_T("open ������25.mp3"), 0, 0, 0);
			mciSendString(_T("play ������25.mp3"), 0, 0, 0);
			break;
		case 26:
			mciSendString(_T("open ������26.mp3"), 0, 0, 0);
			mciSendString(_T("play ������26.mp3"), 0, 0, 0);
			break;
		case 27:
			mciSendString(_T("open ������27.mp3"), 0, 0, 0);
			mciSendString(_T("play ������27.mp3"), 0, 0, 0);
			break;
		case 28:
			mciSendString(_T("open ������28.mp3"), 0, 0, 0);
			mciSendString(_T("play ������28.mp3"), 0, 0, 0);
			break;
		case 29:
			mciSendString(_T("open ������29.mp3"), 0, 0, 0);
			mciSendString(_T("play ������29.mp3"), 0, 0, 0);
			break;
		case 30:
			mciSendString(_T("open ������30.mp3"), 0, 0, 0);
			mciSendString(_T("play ������30.mp3"), 0, 0, 0);
			break;
		case 31:
			mciSendString(_T("open ������31.mp3"), 0, 0, 0);
			mciSendString(_T("play ������31.mp3"), 0, 0, 0);
			break;
		case 32:
			mciSendString(_T("open ������32.mp3"), 0, 0, 0);
			mciSendString(_T("play ������32.mp3"), 0, 0, 0);
			break;
		case 33:
			mciSendString(_T("open ������33.mp3"), 0, 0, 0);
			mciSendString(_T("play ������33.mp3"), 0, 0, 0);
			break;
		case 34:
			mciSendString(_T("open ������34.mp3"), 0, 0, 0);
			mciSendString(_T("play ������34.mp3"), 0, 0, 0);
			break;
		case 35:
			mciSendString(_T("open ������35.mp3"), 0, 0, 0);
			mciSendString(_T("play ������35.mp3"), 0, 0, 0);
			break;
		case 36:
			mciSendString(_T("open ������36.mp3"), 0, 0, 0);
			mciSendString(_T("play ������36.mp3"), 0, 0, 0);
			break;
		case 37:
			mciSendString(_T("open ������37.mp3"), 0, 0, 0);
			mciSendString(_T("play ������37.mp3"), 0, 0, 0);
			break;
		case 38:
			mciSendString(_T("open ������38.mp3"), 0, 0, 0);
			mciSendString(_T("play ������38.mp3"), 0, 0, 0);
			break;
		case 39:
			mciSendString(_T("open ������39.mp3"), 0, 0, 0);
			mciSendString(_T("play ������39.mp3"), 0, 0, 0);
			break;
		case 40:
			mciSendString(_T("open ������40.mp3"), 0, 0, 0);
			mciSendString(_T("play ������40.mp3"), 0, 0, 0);
			break;
		case 41:
			mciSendString(_T("open ������41.mp3"), 0, 0, 0);
			mciSendString(_T("play ������41.mp3"), 0, 0, 0);
			break;
		case 42:
			mciSendString(_T("open ������42.mp3"), 0, 0, 0);
			mciSendString(_T("play ������42.mp3"), 0, 0, 0);
			break;
		case 43:
			mciSendString(_T("open ������43.mp3"), 0, 0, 0);
			mciSendString(_T("play ������43.mp3"), 0, 0, 0);
			break;
		case 44:
			mciSendString(_T("open ������44.mp3"), 0, 0, 0);
			mciSendString(_T("play ������44.mp3"), 0, 0, 0);
			break;
		case 45:
			mciSendString(_T("open ������45.mp3"), 0, 0, 0);
			mciSendString(_T("play ������45.mp3"), 0, 0, 0);
			break;
		case 46:
			mciSendString(_T("open ������46.mp3"), 0, 0, 0);
			mciSendString(_T("play ������46.mp3"), 0, 0, 0);
			break;
		case 47:
			mciSendString(_T("open ������47.mp3"), 0, 0, 0);
			mciSendString(_T("play ������47.mp3"), 0, 0, 0);
			break;
		case 48:
			mciSendString(_T("open ������48.mp3"), 0, 0, 0);
			mciSendString(_T("play ������48.mp3"), 0, 0, 0);
			break;
		case 49:
			mciSendString(_T("open ������49.mp3"), 0, 0, 0);
			mciSendString(_T("play ������49.mp3"), 0, 0, 0);
			break;
		case 50:
			mciSendString(_T("open ������50.mp3"), 0, 0, 0);
			mciSendString(_T("play ������50.mp3"), 0, 0, 0);
			break;
		case 51:
			mciSendString(_T("open ������51.mp3"), 0, 0, 0);
			mciSendString(_T("play ������51.mp3"), 0, 0, 0);
			break;
		case 52:
			mciSendString(_T("open ������52.mp3"), 0, 0, 0);
			mciSendString(_T("play ������52.mp3"), 0, 0, 0);
			break;
		case 53:
			mciSendString(_T("open ������53.mp3"), 0, 0, 0);
			mciSendString(_T("play ������53.mp3"), 0, 0, 0);
			break;
		case 54:
			mciSendString(_T("open ������54.mp3"), 0, 0, 0);
			mciSendString(_T("play ������54.mp3"), 0, 0, 0);
			break;
		case 55:
			mciSendString(_T("open ������55.mp3"), 0, 0, 0);
			mciSendString(_T("play ������55.mp3"), 0, 0, 0);
			break;
		case 56:
			mciSendString(_T("open ������56.mp3"), 0, 0, 0);
			mciSendString(_T("play ������56.mp3"), 0, 0, 0);
			break;
		case 57:
			mciSendString(_T("open ������57.mp3"), 0, 0, 0);
			mciSendString(_T("play ������57.mp3"), 0, 0, 0);
			break;
		case 58:
			mciSendString(_T("open ������58.mp3"), 0, 0, 0);
			mciSendString(_T("play ������58.mp3"), 0, 0, 0);
			break;
		case 59:
			mciSendString(_T("open ������59.mp3"), 0, 0, 0);
			mciSendString(_T("play ������59.mp3"), 0, 0, 0);
			break;
		case 60:
			mciSendString(_T("open ������60.mp3"), 0, 0, 0);
			mciSendString(_T("play ������60.mp3"), 0, 0, 0);
			break;
		case 61:
			mciSendString(_T("open ������61.mp3"), 0, 0, 0);
			mciSendString(_T("play ������61.mp3"), 0, 0, 0);
			break;
		case 62:
			mciSendString(_T("open ������62.mp3"), 0, 0, 0);
			mciSendString(_T("play ������62.mp3"), 0, 0, 0);
			break;
		case 63:
			mciSendString(_T("open ������63.mp3"), 0, 0, 0);
			mciSendString(_T("play ������63.mp3"), 0, 0, 0);
			break;
		case 64:
			mciSendString(_T("open ������64.mp3"), 0, 0, 0);
			mciSendString(_T("play ������64.mp3"), 0, 0, 0);
			break;
		case 65:
			mciSendString(_T("open ������65.mp3"), 0, 0, 0);
			mciSendString(_T("play ������65.mp3"), 0, 0, 0);
			break;
		case 66:
			mciSendString(_T("open ������66.mp3"), 0, 0, 0);
			mciSendString(_T("play ������66.mp3"), 0, 0, 0);
			break;
		case 67:
			mciSendString(_T("open ������67.mp3"), 0, 0, 0);
			mciSendString(_T("play ������67.mp3"), 0, 0, 0);
			break;
		case 68:
			mciSendString(_T("open ������68.mp3"), 0, 0, 0);
			mciSendString(_T("play ������68.mp3"), 0, 0, 0);
			break;
		case 69:
			mciSendString(_T("open ������69.mp3"), 0, 0, 0);
			mciSendString(_T("play ������69.mp3"), 0, 0, 0);
			break;
		case 70:
			mciSendString(_T("open ������70.mp3"), 0, 0, 0);
			mciSendString(_T("play ������70.mp3"), 0, 0, 0);
			break;
		case 71:
			mciSendString(_T("open ������71.mp3"), 0, 0, 0);
			mciSendString(_T("play ������71.mp3"), 0, 0, 0);
			break;
		case 72:
			mciSendString(_T("open ������72.mp3"), 0, 0, 0);
			mciSendString(_T("play ������72.mp3"), 0, 0, 0);
			break;
		case 73:
			mciSendString(_T("open ������73.mp3"), 0, 0, 0);
			mciSendString(_T("play ������73.mp3"), 0, 0, 0);
			break;
		case 74:
			mciSendString(_T("open ������74.mp3"), 0, 0, 0);
			mciSendString(_T("play ������74.mp3"), 0, 0, 0);
			break;
		case 75:
			mciSendString(_T("open ������75.mp3"), 0, 0, 0);
			mciSendString(_T("play ������75.mp3"), 0, 0, 0);
			break;
		case 76:
			mciSendString(_T("open ������76.mp3"), 0, 0, 0);
			mciSendString(_T("play ������76.mp3"), 0, 0, 0);
			break;
		case 77:
			mciSendString(_T("open ������77.mp3"), 0, 0, 0);
			mciSendString(_T("play ������77.mp3"), 0, 0, 0);
			break;
		case 78:
			mciSendString(_T("open ������78.mp3"), 0, 0, 0);
			mciSendString(_T("play ������78.mp3"), 0, 0, 0);
			break;
		case 79:
			mciSendString(_T("open ������79.mp3"), 0, 0, 0);
			mciSendString(_T("play ������79.mp3"), 0, 0, 0);
			break;
		case 80:
			mciSendString(_T("open ������80.mp3"), 0, 0, 0);
			mciSendString(_T("play ������80.mp3"), 0, 0, 0);
			break;
		default:
			break;
		}
		return true;
	}
	//printf("%s\n", __FUNCTION__);
	return false;
}



int main()
{
	printf("ʹ��˵������������������·�һ�еĺڿ飬���ʹ��Ϸ���С�����Ϸ�пɰ�ESC���˳���Ϸ���ǵÿ�����Ӵ��");
	printf("\n");
	//����̨����->ͼ�δ���
	initgraph(400, 700, EX_SHOWCONSOLE);//����ͼ�δ��ڵĿ�͸ߣ�����ʾ����̨
	//���ñ�����ɫ
	setbkcolor(WHITE);
	cleardevice();//ˢ�£���ֹ������ɫ����

	init();

	ExMessage msg = { 0 };
	bool isDone = true;
	//��Ϸ��ѭ��
	while (isDone)
	{
		//��Ϣ����

		if (peekmessage(&msg))
		{
			//��ESC�˳���Ϸ
			switch (msg.message)
			{
			case WM_KEYDOWN:
				if (msg.vkcode == VK_ESCAPE)
				{
					printf("����\n");
					isDone = false;
				}
				break;
			case WM_LBUTTONDOWN:
				if (mousePressMsg(&msg));
				break;

			}
		}
		//����
		BeginBatchDraw();//������
		cleardevice();//����
		draw();
		EndBatchDraw();
	}

	//getchar(); //��ֹ����
	mciSendString(_T("close all"), 0, 0, 0);//�ֶ��ͷ��ڴ�
	return 0;
}
