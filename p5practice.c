#include<stdio.h>
int input()
{
  int x;
  printf("Enter number:- ");
  scanf("%d",&x);
  return x;
}
int gcd(int a, int b)
{
  int n,i,hcf;
  if(a>b)
  {
    n=a;
  }
  else
  {
    n=b;
  }
  for(i=1;i<=n/2;i++)
  {
    if(a%i==0 && b%i==0)
    {
      hcf=i;
    }
  }return hcf;
}
void output(int a, int b, int gcd)
{
  printf("HCF of %d & %d is %d",a,b,gcd);
}
int main()
{
  int a,b,hcf;
  a=input();
  b=input();
  hcf=gcd(a,b);
  output(a,b,hcf);
  return 0;
}