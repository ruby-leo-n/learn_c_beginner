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
	
	printf("점1의 좌표를 입력:"); 
	scanf("%d %d",&r.p1.x,&r.p1.y);
	
	printf("점2의 좌표를 입력:"); 
	scanf("%d %d",&r.p2.x,&r.p2.y);
	
	w= abs(r.p2.x-r.p1.x);
	h = abs(r.p2.y-r.p1.y);
	
	peri = 2*w+2*h;
	area = w*h;
	
	printf("사각형의 넓이는 %d\n",area);
	printf("사각형의 둘레는 %d",peri);
	
	return 0;
}
  
