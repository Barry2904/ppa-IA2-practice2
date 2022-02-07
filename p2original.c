/*
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
*/

#include<stdio.h>
int input_side(){
  int n;
  printf("enter the three sides->");
  scanf("%d",&n);
  return n;
}
int check_scelene(int a, int b,int c){
  int isscalene;
  if (a!=b && a!=c && b!=c && c!=b){
    isscalene=0;
    
  }
  return isscalene;


}
void output(int a,int b,int c,int isscalene ){
  printf("the sides of the traingle is scelne %d%d%d%d",a,b,c,isscalene);
}
int main(){
  int a,b,c,res;
  a=input_side();
  b=input_side();
  c=input_side();
  res=check_scelene(a,b,c);
  output(a,b,c,res);
  return 0;

}