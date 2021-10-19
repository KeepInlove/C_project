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
    printf("¡¾whileÓï¾ä¡¿sum=%d\n",sum);
    int a,s=0;
    for (a = 0; a < 10; a++)
    {
        /* code */
        if (a%2==0)
        {
            /* code */
            s+=a;
        }else{
            s-=a;
        }
    }
    printf("¡¾forÓï¾ä¡¿s=%d\n",s);
    return 0;
}