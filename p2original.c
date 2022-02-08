
#include<stdio.h>
int input_side()
{
  int x;
  printf("Enter side length:- ");
  scanf("%d",&x);
  return x;
}
int check_scalene(int a,int b,int c)
{
  if(a!=b && a!=c && b!=c)
  {
    return 1;
  }
  else 
  {
    return 0;
  }
  
}
void output(int a,int b,int c,int isscalene)
{
  if(isscalene==0)
  {
    printf("Triangle is not scalene");
  }
  else if(isscalene==1)
  {
    printf("Triangle is scalene");
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

