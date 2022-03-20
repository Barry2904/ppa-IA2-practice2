#include<stdio.h>
int input_array_size()
{
  int x;
  printf("Enter the size of the array:- ");
  scanf("%d",&x);
  return x;
}
void input_array(int n,int a[n])
{
  int i,x;
  for(i=0;i<n;i++)
  {
    printf("Enter number:- ");
    scanf("%d",&x);
    a[i]=x;
  }
}
int is_composite(int n)
{
  int i,count=0;
  for(i=1;i<=n;i++)
  {
    if(n%i==0)
    {
      count++;
    }   
  }
  return count;
}
int sum_composite_numbers(int n, int *a)
{
  int result=0,i,count;
  for(i=0;i<n;i++)
  {
    count=is_composite(a[i]);
    if(count>2)
    {
      result=result+a[i];
    }
  }return result;
}
void out_put(int sum)
{
  printf("Sum of composite numbers is %d",sum);
}
int main()
{
  int n,sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum=sum_composite_numbers(n,a);
  out_put(sum);
  return 0;
}