#include <stdio.h>
#include<math.h>
void main()
{
   float x1,x2,y1,y2,d;
   printf("enter the values of x1,x2\n");
   scanf("%f%f",&x1,&x2);
   printf("enter the values of y1,y2\n");
   scanf("%f%f",&y1,&y2);
   d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
   printf("Distance between the two points is%.2f",d);
}
