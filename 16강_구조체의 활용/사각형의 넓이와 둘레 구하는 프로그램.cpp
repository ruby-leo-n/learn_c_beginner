#include <stdio.h>
#include <math.h>
struct point
{
	int x;
	int y;
 };
 
struct rect
{
	struct point p1;
	struct point p2;
};

int main(void){
	struct rect r;
	int w, h, area, peri;
	
	printf("��1�� ��ǥ�� �Է�:"); 
	scanf("%d %d",&r.p1.x,&r.p1.y);
	
	printf("��2�� ��ǥ�� �Է�:"); 
	scanf("%d %d",&r.p2.x,&r.p2.y);
	
	w= abs(r.p2.x-r.p1.x);
	h = abs(r.p2.y-r.p1.y);
	
	peri = 2*w+2*h;
	area = w*h;
	
	printf("�簢���� ���̴� %d\n",area);
	printf("�簢���� �ѷ��� %d",peri);
	
	return 0;
}
  
