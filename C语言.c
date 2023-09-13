#include<stdio.h>
int MAX(int x,int y)
{
   if(x<=y)
    return y;
   else 
    return x;
}     
int main()
{
    int a,b,c,d,e;
    a=0;b=0;c=0;d=0;e=0;
    printf("输入三个整数：");
    scanf("%d %d %d\n",&a,&b,&c); 
    d=MAX(a,b);
    e=MAX(c,d);
    printf("最大的数是：%d\n",e);
    return 0;
}
