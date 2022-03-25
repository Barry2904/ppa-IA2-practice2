// #include<stdio.h>
// int input_array_size()
// {
//   int x;
//   printf("How many numbers do you want to enter:- ");
//   scanf("%d",&x);
//   return x;
// }
// void input_array(int n,int a[n])
// {
//   int i;
//   for(i=0;i<n;i++)
//   {
//     printf("Enter %dth number:- ",i+1);
//     scanf("%d",&a[i]);
//   }
// }
// int sum_composite(int n, int a[n])
// {
//   int i,j,count,sum=0,s;
//   for(i=0;i<n && count==0;i++)
//   {
//     for(j=1;a[i]%j==0 && j<a[i];j++)
//     {
//       count=count+1;
//     }
//     if(count>2)
//     {
//       sum=sum+a[i];
//     }
//     count=0;
//   }
//   return sum;
// }
// void output(int sum)
// {
//   printf("Sum of all composite numbers is %d",sum);
// }
// int main()
// {
//   int n,result;
//   n=input_array_size();
//   int a[n];
//   input_array(n,a);
//   result=sum_composite(n,a);
//   output(result);
//   return 0;
// }

#include <stdio.h>
void input_string(char *a)
{
  printf("Enter a string:- ");
  scanf("%s",a);
}
int str_length(char *a)
{
  int i,l=0;
  for(i=0;a[i]!='\0';i++) 
    l=l+1;
  return l;
}
char str_reverse(char *a,int length)
{
  char temp[30];
  int i,j;
  for(i=0;a[i]!='\0';i++)
    a[i]=a[length-i-1];
}
void output(char *temp,int length)
{
  int i;
  printf("The reverse is ");
  for(i=0;temp[i]!='\0';i++)
    printf("%c",temp[i]);
}
int main()
{
  int length;
  char temp[30];
  char a[30];
  input_string(a);
  length=str_length(a);
  str_reverse(a,length);
  output(a,length);
  return 0;
}

