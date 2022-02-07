#include<stdio.h>
int input_number()
{
  int x;
  printf("Enetr number:- ");
  scanf("%d",&x);
  return x;
}
int is_composite(int n)
{
  int i,count=0;
  for(i=1;i<=n;i++)
  {
    if(n%i==0)
    {
      count=count+1;
    }
  }
  return count;
}
void output(int n,int composite)
{
  if(composite==2)
  {
    printf("%d is a prime number",n);
  }
  else
  {
    printf("%d is composite number",n);
  }
}
int main()
{
  int n,composite;
  n=input_number();
  composite=is_composite(n);
  output(n,composite);
}