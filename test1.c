#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    char c;
    c = getchar( );
    printf( "\nYou entered: ");
    putchar( c );
    if(c >= 'A' && c <= 'Z'){
        printf("�����Ϊ��д��ĸ:%c\n",c);
    }else{
         printf("�����Ϊ:%c\n",c);
    }
    return 0;
}
