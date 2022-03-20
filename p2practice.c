#include<stdio.h>
int input_side()
{
  int x;
  printf("Enter the side length:- ");
  scanf("%d",&x);
  return x;
}
int check_scalene(int a, int b, int c)
{
  if(a!=b&&a!=c&&c!=b)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
void output(int a, int b, int c, int check)
{
  if(check==1)
  {
    printf("Triangle is scalene");
  }
  else
  {
    printf("Triangle is not scalene");
  }
}
int main()
{
  int a,b,c,check;
  a=input_side();
  b=input_side();
  c=input_side();
  check=check_scalene(a,b,c);
  output(a,b,c,check);
  return 0;
}