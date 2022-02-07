#include<stdio.h>
void input(float *base,float *height)
{
  printf("Enter base measurement:- ");
  scanf("%f",base);
  printf("Enter height measurement:- ");
  scanf("%f",height);
}
void find_area(float base,float height,float *area)
{
  *area=0.5*(base)*(height);
}
void output(float base,float height,float area)
{
  float x=0.5;
  printf("Area of triangle is %.1f * %.2f * %.2f =%.2f",x,base,height,area);
}
int main()
{
  float base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(base,height,area);
  return 0;
}