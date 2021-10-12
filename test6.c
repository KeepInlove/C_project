#include<stdio.h>
int main(int argc, char const *argv[]){
    int i,sum;
    i=1;
    sum=0;
    
    while (i<=100)
    {
        /* code */
        sum=sum+i;
        i++;
    }
    printf("sum=%d\n",sum);
    return 0;
}