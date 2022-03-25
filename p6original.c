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
char str_reverse(char *a,int length,char *temp)
{
  int i,j=length-1;
  for(i=0;a[i]!='\0';i++,j--)
      temp[i]=a[j];
}
void output(char *temp,int length)
{
  // int i;
  // printf("The reverse is ");
  // for(i=0;temp[i]!='\0';i++)
  //   printf("%c",temp[i]);
  printf("%s",temp);
}
int main()
{
  int length;
  char temp[30];
  char a[30];
  input_string(a);
  length=str_length(a);
  str_reverse(a,length,temp);
  output(temp,length);
  return 0;
}

