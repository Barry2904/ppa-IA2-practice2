#include<stdio.h>
void input_string(char *a)
{
  printf("Enter a string:- ");
  scanf("%s",a);
}
int str_reverse(char *a)
{
  int i,l=0;
  for(i=0;a[i]!='\0';i++)
  {
    l++;
  }
  return l;
}
void output(char *a,int reverse)
{
  int i;
  for(i=reverse-1;a[i]!='\0';i--)
  {
    printf("%c",a[i]);
  }
}
int main()
{
  int reverse;
  char a[100];
  input_string(a);
  reverse=str_reverse(a);
  output(a,reverse);
  return 0;
}