#include<stdio.h>
struct _triangle
{
  float base,altitude,area;
};
typedef struct _triangle Triangle; 
int input_n()
{
  int x;
  printf("How many triangles to compare? ");
  scanf("%d",&x);
  return x;
}
Triangle input_triangle()
{
  Triangle x;
  printf("Enter the base:- ");
  scanf("%f",&x.base);
  printf("Enter the altitude:- ");
  scanf("%f",&x.altitude);
  return x;
}
void input_n_triangles(int n, Triangle t[])
{
  int i;
  for(i=0;i<n;i++)
  {
    t[i]=input_triangle();
  }
}
void find_area(Triangle *t)
{
  t->area=0.5*t->base*t->altitude;
}
void find_areas_n(int n, Triangle t[])
{
  int i;
  for(i=0;i<n;i++)
  {
    find_area(&t[i]);
  }
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
  Triangle small;
  small=t[0];
  int i;
  for(i=1;i<n;i++)
  {
    if(small.area > t[i].area)
    {
      small= t[i];
    }
  }
  return small;
}
void output(int n, Triangle t[], Triangle small)
{
  printf("These are the triangles entered:- \n");
  for(int i=0;i<n;i++)
  {
    printf("%.2f, %.2f and\n", t[i].base, t[i].altitude);
  }
  printf("Of these the smallest triangle is: \n");
  printf("with base=%.2f & altitude=%.2f having area = %.2f\n",small.base, small.altitude, small.area);
}
int main()
{
  Triangle small;
  int n;
  n=input_n();
  Triangle t[n];
  input_n_triangles(n,t);
  find_areas_n(n,t);
  small=find_smallest_triangle(n,t);
  output(n,t,small);
  return 0;
}