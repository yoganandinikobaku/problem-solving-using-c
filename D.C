#include<conio.h>
#include<dos.h>
#include<graphics.h>
int main()
{
   int gd = DETECT, gm, i, a;
   initgraph(&gd, &gm,"c:\\TURBOC3\\BGI");
   for(i=0;i<600;i++)
   {
      // upper body of circle
      line(50+i,405,100+i,405);
      line(75+i,375,125+i,375);
      line(50+i,405,75+i,375);
      line(100+i,405,100+i,345);
      line(150+i,405,100+i,345);
      line(75+i,345,75+i,370);
      line(70+i,370,80+i,370);
      line(80+i,345,100+i,345);
      //wheel
      circle(150+i,405,30);
      circle(150+i,405,30);
      //road
      line(0,436,getmaxx(),436);
      //stone
      rectangle(getmaxx()-i,436,650-i,431);
      //stop the screen for 10 secs
      delay(10);
      //clear the screen
      cleardevice();
   }
   getch();
   //close the graphs
   closegraph();
}
























