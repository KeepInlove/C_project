#include<stdio.h>
int main(int argc, char const *argv[])
{
int weight;
printf("请输出你的体重：");
scanf("%d",&weight);
if (weight>70)
    printf("你胖了");
else
   printf("体重正常哦") ;

return 0;
}