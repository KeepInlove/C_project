#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int a=5.5,b,c;
    float d= a+(int)(b/3*(int)(a+c)/2.0)%4;
    printf("结果:%f\n",d);
    return 0;
}
