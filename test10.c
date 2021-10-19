#include<ctype.h>
#include<stdio.h>
char Change(char a){
    if(isupper(a)) return a+32;
    if(islower(a)) return a-32;
    else return a;
    // printf("%d\n",isupper(a));//判断是否传入的是大写字母
	// printf("%d\n",islower(a));//判断是否传入的是小写字母
}
int main(int argc, char const *argv[]){
    char x,y;
    scanf("%c",&x);
    y= Change(x);
    printf("%c",y);
}
