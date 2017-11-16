#include <graphics.h>

#include <conio.h>

#define PI 3.14159265

// 主函数

void main()

{

// 创建大小为 800 * 600 的绘图窗口

initgraph(800, 600);

// 设置原点 (0, 0) 为屏幕中央（Y轴默认向下为正）

setorigin(400, 300);

// 使用白色填充背景

setbkcolor(BLUE);

cleardevice();

// 画脸

setfillcolor(RGB(7, 190, 234));	// 头

setlinecolor(BLACK);

fillroundrect(-105, -196, 135, 54, 228, 228);

setfillcolor(WHITE);	// 脸

fillellipse(-115, -144, 115, 46);

fillroundrect(-63, -159, 0, -95, 56, 56);	// 右眼

fillroundrect(0, -159, 63, -95, 56, 56);	// 左眼

setfillcolor(BLACK);

solidcircle(-26, -116, 6);	// 右眼球

solidcircle( 26, -116, 6);	// 左眼球

setfillcolor(RGB(201, 62, 0));	// 鼻子

fillcircle(0, -92, 15);

line(10, -67, 10, -4);	// 人中

arc(-108, -220, 108, -4, PI * 5 / 4, PI * 7 / 4);	// 嘴

line(-42, -73, -90, -81);	// 胡子

line( 42, -73, 90, -81);

line(-41, -65, -92, -55);

line( 41, -65, 92, -65);

line(-42, -57, -90, -49);

line( 42, -57, 90, -39);

// 画身体

line(-81, 32, -138, 72);	// 手臂(上)

line( 81, 32, 138, 72);

line(-96, 96, -116, 110);	// 手臂(下)

line( 96, 96, 116, 110);

line(-96, 85, -96, 178);	// 腿外侧

line( 96, 85, 96, 178);

arc(-10, 168, 10, 188, 0, PI);	// 腿内侧

setfillcolor(WHITE);	// 手

fillcircle(-140, 99, 27);

fillcircle( 140, 99, 27);

fillroundrect(-2, 178, -112, 205, 24, 24);	// 脚

fillroundrect( 2, 178, 112, 205, 24, 24);

setfillcolor(RGB(7, 190, 234));	// 身体填充蓝色

floodfill(0, 100, BLACK);

setfillcolor(WHITE);	// 肚皮

fillcircle(0, 81, 75);

solidrectangle(-60, 4, 60, 24);	// 用白色矩形擦掉多余的肚皮

pie(-58, 23, 58, 139, PI, 20);	// 口袋

// 画铃铛

setfillcolor(RGB(169, 38, 0));	// 绳子

fillroundrect(-100, 23, 100, 42, 12, 12);

setfillcolor(RGB(245, 237, 38));	// 铃铛外形

fillcircle(0, 49, 19);

setfillcolor(BLACK);	// 铃铛上的洞

solidellipse(-24, 50, 4, 57);

setlinestyle(PS_SOLID, 3);

line(0, 57, 0, 68);

setlinestyle(PS_SOLID, 1);	// 铃铛上的纹路

line(-16, 40, 16, 40);

line(-18, 44, 18, 44);

// 按任意键退出

_getch();

closegraph();

}
