#include <stdio.h>
#include <math.h>
int main()
{
      float x1,x2,y1,y2,d;
      printf("enter a value of x1:");
      scanf("%f", &x1);
      printf("enter a value of y1:");
      scanf("%f", &y1);
      printf("enter a value of x2:");
      scanf("%f", &x2);
      printf("enter a value of y2:");
      scanf("%f", &y2);
      d=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
      printf("distance between the two given point is %f",d);
      //getch();
      }
