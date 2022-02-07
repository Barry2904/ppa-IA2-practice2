#include<stdio.h>
int input_side()
{
  int x;
  printf("Enter side length:- ");
  scanf("%d",&x);
}
int check_scalene(int a,int b,int c)
{
  if(a==b && b==c && c==a)
  {
    int x=0;
    return x ;
  }
  else
  {
    int x=1;
    return x;
  }
}
void output(int a,int b,int c,int isscalene)
{
  if(isscalene!=0)
  {
    printf("Triangle is not scalene");
  }
  else if(isscalene==0)
  {
    printf("is a scalene triangle measurement");
  }
}
int main()
{
  int a,b,c,result;
  a=input_side();
  b=input_side();
  c=input_side();
  result=check_scalene(a,b,c);
  output(a,b,c,result);
  return 0;
}
