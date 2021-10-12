#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    char c;
    c = getchar( );
    printf( "\nYou entered: ");
    putchar( c );
    if(c >= 'A' && c <= 'Z'){
        printf("输入的为大写字母:%c\n",c);
    }else{
         printf("输入的为:%c\n",c);
    }
    return 0;
}
