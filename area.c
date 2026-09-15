#include <stdio.h>
int main()
{
int radius;
printf("Enter the value of radius:\n");
scanf("%d",&radius);
float area;
area=3.14*radius*radius;
perimeter=2*3.14*radius;
printf("The area of the circle is:%.2f\n",area);
printf("The perimeter of the circel is:%.2f\n",perimeter);
return 0;
}
