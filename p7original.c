#include <stdio.h>
struct _triangle
{
  float base,height,area;
};
typedef struct _triangle Triangle;

Triangle input()
{
  Triangle t;
  printf("Enter value of base:- ");
  scanf("%f",&t.base);
  printf("Enter value of height:- ");
  scanf("%f",&t.height);
  return t;
}
void find_area(Triangle *t)
{
  t->area=0.5*t->base*t->height;
}
void output(Triangle t)
{
  printf("Area of Triangle with base %.2f and height %.2f = %.2f",t.base,t.height,t.area);
}
int main()
{
  Triangle t,r;
  t=input();
  find_area(&t);
  output(t);
  return 0;
}