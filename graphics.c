
#include<graphics.h>
void main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	circle(150,150,100);
	getch();
	closegraph();
}

