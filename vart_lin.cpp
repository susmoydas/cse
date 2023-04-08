#include<graphics.h>
#include<stdio.h>
void main()
{
int x,y,x1,y1,delx,dely,m,grtr_d,smlr_d,d;
int gm,gd=DETECT;
initgraph(&gd,&gm,"C:\\TC\\BGI");
printf("******* BRESENHAM'S LINE DRAWING ALGORITHM *****\n\n");
printf("enter initial coordinate = ");
scanf("%d %d",&x,&y);
printf("enter final coordinate = ");
scanf("%d %d",&x1,&y1);delx=x1-x;
dely=y1-y;
grtr_d=2*dely-2*delx;&nbsp; &nbsp;// when d > 0
smlr_d=2*dely;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; // when d< 0
d=(2*dely)-delx;

do{
putpixel(x,y,1);
if(d<0) {
d=smlr_d+d;
}
else
{
d=grtr_d+d;
y=y+1;
}
x=x+1;
}while(x<x1);
getch();
}