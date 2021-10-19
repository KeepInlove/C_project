#include<stdio.h>
int main(int argc, char const *argv[]){
    // char c;
    // while ((c=getchar())!='!')
    // {
    //   putchar(++c);
    // }
    // int i,j,k;
    // for ( i = 0,j=10; i <=j; i++,j--)
    // {
    //     k=i+j;
    // }
    //  printf("i=%d\nj=%d\nk=%d",i,j,k);
    // int i=0;
    // while (i<20)
    // {
    //     i++;
    //     if (i%5==0)continue;
    //     printf("%d,",i);
    // }
    



    int i,j;
    for ( i = 1,j=1; j<=30; j++){
        if (i>=10) break;
        if(i%2==1) {
            i+=5;
            continue;
        }
        i-=3;
    }
    printf("i=%d j=%d\n",i,j);
return 0;
}