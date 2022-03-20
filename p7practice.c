#include <stdio.h>
#include <math.h>
struct _triangle
{
  float base,altitude,area;
}; 
typedef struct _triangle Triangle;
Triangle input_triangle()
{
  Triangle x;
  printf("Enter the base:- ");
  scanf("%f",&x.base);
  printf("Enter the altitude:- ");
  scanf("%f",&x.altitude);
  return x;
}
void find_area(Triangle *t)
{
  // t.area=0.5* t.base * t.altitude;
  // printf("%.2f",t.area);    
  // **if not used as pointer then use above one**
  t->area=0.5* t->base * t->altitude;
  printf("%.2f",t->area);
}
int main()
{
  Triangle t;
  t=input_triangle();
  find_area(&t);
  return 0;
}