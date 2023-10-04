#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <easyx.h> //图形库，绘制图形，输出文字
#include <stdlib.h>
#include <time.h>
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")
//#define INTERVAL 100 //标题的高度
//#define GRID_W   100 //每个格子的宽度：x
//#define GRID_H   150 //每个格子的高度：y

//定义数组，用来存储黑块
int flags[4] = { 2,1,0,3 };
//统计成功点了多少个黑块
int gcount = 0;
//初始化数据
void init()
{
	//设置随机数种子
	srand(time(NULL));
	//随机生成黑块
	for (int i = 0; i < 4; i++)
	{
		flags[i] = rand() % 4;//0,1,2,3
	}
}

void draw()
{
	//设置线条样式
	setlinestyle(PS_SOLID, 2);//线条形式（实线，虚线...)，线条粗细
	//设置线条颜色，默认为白色
	setlinecolor(BLACK);

	for (int i = 0; i < 5; i++)
	{
		//绘制线条
		//画横线
		line(0, i * 150 + 100, 400, i * 150 + 100);
		//画竖线
		line(i * 100, 100, i * 100, 700);
	}

	//设置文字样式
	settextstyle(50, 0, _T("微软雅黑"));//设置文字长，宽，字体样式
	//设置文字颜色
	settextcolor(BLACK);
	//输出标题
	outtextxy(100, 25, _T("你好，亲亲"));

	//根据flags数组绘制黑块
	for (int i = 0; i < 4; i++)
	{
		//求出黑块的左上角的坐标
		int x = flags[i] * 100;
		int y = i * 150 + 100;
		//设置填充颜色
		setfillcolor(BLACK);
		//绘制一个矩形
		fillrectangle(x, y, x + 100, y + 150);
	}

}
//处理鼠标点击
bool mousePressMsg(ExMessage* msg)
{
	//获取下标为3的黑块的坐标
	int x = flags[3] * 100;
	int y = 3 * 150 + 100;
	//判断是不是点击的下标为2的黑块
	if (msg->x > x && msg->x < x + 100 && msg->y > y && msg->y < y + 150)
	{
		//黑块从上往下移动
		for (int i = 3; i > 0; i--)
		{
			flags[i] = flags[i - 1];
		}
		flags[0] = rand() % 4;
		gcount++;
		printf("爱你哟,Score:%d\n", gcount);
		switch (gcount)
		{
		case 1:
			mciSendString(_T("open 钢琴曲1.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲1.mp3"), 0, 0, 0);
			break;
		case 2:
			mciSendString(_T("open 钢琴曲2.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲2.mp3"), 0, 0, 0);
			break;
		case 3:
			mciSendString(_T("open 钢琴曲3.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲3.mp3"), 0, 0, 0);
			break;
		case 4:
			mciSendString(_T("open 钢琴曲4.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲4.mp3"), 0, 0, 0);
			break;
		case 5:
			mciSendString(_T("open 钢琴曲5.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲5.mp3"), 0, 0, 0);
			break;
		case 6:
			mciSendString(_T("open 钢琴曲6.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲6.mp3"), 0, 0, 0);
			break;
		case 7:
			mciSendString(_T("open 钢琴曲7.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲7.mp3"), 0, 0, 0);
			break;
		case 8:
			mciSendString(_T("open 钢琴曲8.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲8.mp3"), 0, 0, 0);
			break;
		case 9:
			mciSendString(_T("open 钢琴曲9.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲9.mp3"), 0, 0, 0);
			break;
		case 10:
			mciSendString(_T("open 钢琴曲10.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲10.mp3"), 0, 0, 0);
			break;
		case 11:
			mciSendString(_T("open 钢琴曲11.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲11.mp3"), 0, 0, 0);
			break;
		case 12:
			mciSendString(_T("open 钢琴曲12.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲12.mp3"), 0, 0, 0);
			break;
		case 13:
			mciSendString(_T("open 钢琴曲13.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲13.mp3"), 0, 0, 0);
			break;
		case 14:
			mciSendString(_T("open 钢琴曲14.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲14.mp3"), 0, 0, 0);
			break;
		case 15:
			mciSendString(_T("open 钢琴曲15.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲15.mp3"), 0, 0, 0);
			break;
		case 16:
			mciSendString(_T("open 钢琴曲16.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲16.mp3"), 0, 0, 0);
			break;
		case 17:
			mciSendString(_T("open 钢琴曲17.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲17.mp3"), 0, 0, 0);
			break;
		case 18:
			mciSendString(_T("open 钢琴曲18.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲18.mp3"), 0, 0, 0);
			break;
		case 19:
			mciSendString(_T("open 钢琴曲19.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲19.mp3"), 0, 0, 0);
			break;
		case 20:
			mciSendString(_T("open 钢琴曲20.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲20.mp3"), 0, 0, 0);
			break;
		case 21:
			mciSendString(_T("open 钢琴曲21.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲21.mp3"), 0, 0, 0);
			break;
		case 22:
			mciSendString(_T("open 钢琴曲22.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲22.mp3"), 0, 0, 0);
			break;
		case 23:
			mciSendString(_T("open 钢琴曲23.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲23.mp3"), 0, 0, 0);
			break;
		case 24:
			mciSendString(_T("open 钢琴曲24.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲24.mp3"), 0, 0, 0);
			break;
		case 25:
			mciSendString(_T("open 钢琴曲25.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲25.mp3"), 0, 0, 0);
			break;
		case 26:
			mciSendString(_T("open 钢琴曲26.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲26.mp3"), 0, 0, 0);
			break;
		case 27:
			mciSendString(_T("open 钢琴曲27.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲27.mp3"), 0, 0, 0);
			break;
		case 28:
			mciSendString(_T("open 钢琴曲28.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲28.mp3"), 0, 0, 0);
			break;
		case 29:
			mciSendString(_T("open 钢琴曲29.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲29.mp3"), 0, 0, 0);
			break;
		case 30:
			mciSendString(_T("open 钢琴曲30.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲30.mp3"), 0, 0, 0);
			break;
		case 31:
			mciSendString(_T("open 钢琴曲31.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲31.mp3"), 0, 0, 0);
			break;
		case 32:
			mciSendString(_T("open 钢琴曲32.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲32.mp3"), 0, 0, 0);
			break;
		case 33:
			mciSendString(_T("open 钢琴曲33.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲33.mp3"), 0, 0, 0);
			break;
		case 34:
			mciSendString(_T("open 钢琴曲34.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲34.mp3"), 0, 0, 0);
			break;
		case 35:
			mciSendString(_T("open 钢琴曲35.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲35.mp3"), 0, 0, 0);
			break;
		case 36:
			mciSendString(_T("open 钢琴曲36.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲36.mp3"), 0, 0, 0);
			break;
		case 37:
			mciSendString(_T("open 钢琴曲37.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲37.mp3"), 0, 0, 0);
			break;
		case 38:
			mciSendString(_T("open 钢琴曲38.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲38.mp3"), 0, 0, 0);
			break;
		case 39:
			mciSendString(_T("open 钢琴曲39.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲39.mp3"), 0, 0, 0);
			break;
		case 40:
			mciSendString(_T("open 钢琴曲40.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲40.mp3"), 0, 0, 0);
			break;
		case 41:
			mciSendString(_T("open 钢琴曲41.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲41.mp3"), 0, 0, 0);
			break;
		case 42:
			mciSendString(_T("open 钢琴曲42.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲42.mp3"), 0, 0, 0);
			break;
		case 43:
			mciSendString(_T("open 钢琴曲43.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲43.mp3"), 0, 0, 0);
			break;
		case 44:
			mciSendString(_T("open 钢琴曲44.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲44.mp3"), 0, 0, 0);
			break;
		case 45:
			mciSendString(_T("open 钢琴曲45.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲45.mp3"), 0, 0, 0);
			break;
		case 46:
			mciSendString(_T("open 钢琴曲46.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲46.mp3"), 0, 0, 0);
			break;
		case 47:
			mciSendString(_T("open 钢琴曲47.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲47.mp3"), 0, 0, 0);
			break;
		case 48:
			mciSendString(_T("open 钢琴曲48.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲48.mp3"), 0, 0, 0);
			break;
		case 49:
			mciSendString(_T("open 钢琴曲49.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲49.mp3"), 0, 0, 0);
			break;
		case 50:
			mciSendString(_T("open 钢琴曲50.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲50.mp3"), 0, 0, 0);
			break;
		case 51:
			mciSendString(_T("open 钢琴曲51.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲51.mp3"), 0, 0, 0);
			break;
		case 52:
			mciSendString(_T("open 钢琴曲52.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲52.mp3"), 0, 0, 0);
			break;
		case 53:
			mciSendString(_T("open 钢琴曲53.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲53.mp3"), 0, 0, 0);
			break;
		case 54:
			mciSendString(_T("open 钢琴曲54.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲54.mp3"), 0, 0, 0);
			break;
		case 55:
			mciSendString(_T("open 钢琴曲55.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲55.mp3"), 0, 0, 0);
			break;
		case 56:
			mciSendString(_T("open 钢琴曲56.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲56.mp3"), 0, 0, 0);
			break;
		case 57:
			mciSendString(_T("open 钢琴曲57.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲57.mp3"), 0, 0, 0);
			break;
		case 58:
			mciSendString(_T("open 钢琴曲58.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲58.mp3"), 0, 0, 0);
			break;
		case 59:
			mciSendString(_T("open 钢琴曲59.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲59.mp3"), 0, 0, 0);
			break;
		case 60:
			mciSendString(_T("open 钢琴曲60.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲60.mp3"), 0, 0, 0);
			break;
		case 61:
			mciSendString(_T("open 钢琴曲61.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲61.mp3"), 0, 0, 0);
			break;
		case 62:
			mciSendString(_T("open 钢琴曲62.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲62.mp3"), 0, 0, 0);
			break;
		case 63:
			mciSendString(_T("open 钢琴曲63.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲63.mp3"), 0, 0, 0);
			break;
		case 64:
			mciSendString(_T("open 钢琴曲64.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲64.mp3"), 0, 0, 0);
			break;
		case 65:
			mciSendString(_T("open 钢琴曲65.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲65.mp3"), 0, 0, 0);
			break;
		case 66:
			mciSendString(_T("open 钢琴曲66.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲66.mp3"), 0, 0, 0);
			break;
		case 67:
			mciSendString(_T("open 钢琴曲67.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲67.mp3"), 0, 0, 0);
			break;
		case 68:
			mciSendString(_T("open 钢琴曲68.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲68.mp3"), 0, 0, 0);
			break;
		case 69:
			mciSendString(_T("open 钢琴曲69.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲69.mp3"), 0, 0, 0);
			break;
		case 70:
			mciSendString(_T("open 钢琴曲70.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲70.mp3"), 0, 0, 0);
			break;
		case 71:
			mciSendString(_T("open 钢琴曲71.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲71.mp3"), 0, 0, 0);
			break;
		case 72:
			mciSendString(_T("open 钢琴曲72.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲72.mp3"), 0, 0, 0);
			break;
		case 73:
			mciSendString(_T("open 钢琴曲73.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲73.mp3"), 0, 0, 0);
			break;
		case 74:
			mciSendString(_T("open 钢琴曲74.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲74.mp3"), 0, 0, 0);
			break;
		case 75:
			mciSendString(_T("open 钢琴曲75.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲75.mp3"), 0, 0, 0);
			break;
		case 76:
			mciSendString(_T("open 钢琴曲76.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲76.mp3"), 0, 0, 0);
			break;
		case 77:
			mciSendString(_T("open 钢琴曲77.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲77.mp3"), 0, 0, 0);
			break;
		case 78:
			mciSendString(_T("open 钢琴曲78.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲78.mp3"), 0, 0, 0);
			break;
		case 79:
			mciSendString(_T("open 钢琴曲79.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲79.mp3"), 0, 0, 0);
			break;
		case 80:
			mciSendString(_T("open 钢琴曲80.mp3"), 0, 0, 0);
			mciSendString(_T("play 钢琴曲80.mp3"), 0, 0, 0);
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
	printf("使用说明：用鼠标左键点击最下方一行的黑块，便可使游戏运行。在游戏中可按ESC键退出游戏。记得开声音哟。");
	printf("\n");
	//控制台窗口->图形窗口
	initgraph(400, 700, EX_SHOWCONSOLE);//设置图形窗口的宽和高，并显示控制台
	//设置背景颜色
	setbkcolor(WHITE);
	cleardevice();//刷新，防止窗口颜色不变

	init();

	ExMessage msg = { 0 };
	bool isDone = true;
	//游戏主循环
	while (isDone)
	{
		//消息处理

		if (peekmessage(&msg))
		{
			//按ESC退出游戏
			switch (msg.message)
			{
			case WM_KEYDOWN:
				if (msg.vkcode == VK_ESCAPE)
				{
					printf("想你\n");
					isDone = false;
				}
				break;
			case WM_LBUTTONDOWN:
				if (mousePressMsg(&msg));
				break;

			}
		}
		//绘制
		BeginBatchDraw();//防闪屏
		cleardevice();//清屏
		draw();
		EndBatchDraw();
	}

	//getchar(); //防止闪退
	mciSendString(_T("close all"), 0, 0, 0);//手动释放内存
	return 0;
}
