#include <stdio.h>
void input_string(char *a)
{
  printf("Enter a string:- ");
  scanf("%s",a);
}
int str_reverse(char *a)
{
  int i,l=0,j=0;
  for(i=0;a[i]!=0;i++)
    l=l+1;
  return l;
}
void output(char *a,int reverse_a)
{
  int i;
  printf("The reverse of %s is ",a);
  for(i=reverse_a-1;a[i]!='\0';i--)
    printf("%c",a[i]);
}
int main()
{
  int reverse_a;
  char a[30];
  input_string(a);
  reverse_a=str_reverse(a);
  output(a,reverse_a);
  return 0;
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//   int i,l;
//   char a[30];
//   printf("Enter a string:- ");
//   scanf("%s",a);
//   l=strlen(a);
//   for(i=l-1;a[i]!='\0';i--)
//     printf("%c",a[i]);
// }