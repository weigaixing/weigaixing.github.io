#include <graphics.h>

#include <conio.h>

#define PI 3.14159265

// ������

void main()

{

// ������СΪ 800 * 600 �Ļ�ͼ����

initgraph(800, 600);

// ����ԭ�� (0, 0) Ϊ��Ļ���루Y��Ĭ������Ϊ����

setorigin(400, 300);

// ʹ�ð�ɫ��䱳��

setbkcolor(BLUE);

cleardevice();

// ����

setfillcolor(RGB(7, 190, 234));	// ͷ

setlinecolor(BLACK);

fillroundrect(-105, -196, 135, 54, 228, 228);

setfillcolor(WHITE);	// ��

fillellipse(-115, -144, 115, 46);

fillroundrect(-63, -159, 0, -95, 56, 56);	// ����

fillroundrect(0, -159, 63, -95, 56, 56);	// ����

setfillcolor(BLACK);

solidcircle(-26, -116, 6);	// ������

solidcircle( 26, -116, 6);	// ������

setfillcolor(RGB(201, 62, 0));	// ����

fillcircle(0, -92, 15);

line(10, -67, 10, -4);	// ����

arc(-108, -220, 108, -4, PI * 5 / 4, PI * 7 / 4);	// ��

line(-42, -73, -90, -81);	// ����

line( 42, -73, 90, -81);

line(-41, -65, -92, -55);

line( 41, -65, 92, -65);

line(-42, -57, -90, -49);

line( 42, -57, 90, -39);

// ������

line(-81, 32, -138, 72);	// �ֱ�(��)

line( 81, 32, 138, 72);

line(-96, 96, -116, 110);	// �ֱ�(��)

line( 96, 96, 116, 110);

line(-96, 85, -96, 178);	// �����

line( 96, 85, 96, 178);

arc(-10, 168, 10, 188, 0, PI);	// ���ڲ�

setfillcolor(WHITE);	// ��

fillcircle(-140, 99, 27);

fillcircle( 140, 99, 27);

fillroundrect(-2, 178, -112, 205, 24, 24);	// ��

fillroundrect( 2, 178, 112, 205, 24, 24);

setfillcolor(RGB(7, 190, 234));	// ���������ɫ

floodfill(0, 100, BLACK);

setfillcolor(WHITE);	// ��Ƥ

fillcircle(0, 81, 75);

solidrectangle(-60, 4, 60, 24);	// �ð�ɫ���β�������Ķ�Ƥ

pie(-58, 23, 58, 139, PI, 20);	// �ڴ�

// ������

setfillcolor(RGB(169, 38, 0));	// ����

fillroundrect(-100, 23, 100, 42, 12, 12);

setfillcolor(RGB(245, 237, 38));	// ��������

fillcircle(0, 49, 19);

setfillcolor(BLACK);	// �����ϵĶ�

solidellipse(-24, 50, 4, 57);

setlinestyle(PS_SOLID, 3);

line(0, 57, 0, 68);

setlinestyle(PS_SOLID, 1);	// �����ϵ���·

line(-16, 40, 16, 40);

line(-18, 44, 18, 44);

// ��������˳�

_getch();

closegraph();

}
