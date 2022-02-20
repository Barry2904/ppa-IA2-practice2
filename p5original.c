// First, divide the large number by a small number.
// If the remainder is left, then divide the first divisor by remainder.
// If the remainder divides the first divisor completely, then it is the HCF or highest common factor of the given two numbers.
// If the remainder does not divide the first divisor completely, then repeat the steps.
// 88 45
#include<stdio.h>
int input()
{
  int x;
  printf("Enter Number:- ");
  scanf("%d",&x);
  return x;
}
int gdc(int a,int b)
{
  int i,gcd;
  if(b>a)
    if(b%a==0)
      return a;
  else if(a>b)
    if(a%b==0)
      return b;
  for(i=1;i<a;i++)
  {
    if(a%i==0 && b%i==0)
      gcd = i;
  }
  return gcd;
        
}
void output(int a,int b,int r)
{
  printf("GDC OF %d AND %d is %d",a,b,r);
}
int main()
{
  int a,b,r;
  a=input();
  b=input();
  r=gdc(a,b);
  output(a,b,r);
  return 0;
}
