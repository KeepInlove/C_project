#include<ctype.h>
#include<stdio.h>
char Change(char a){
    if(isupper(a)) return a+32;
    if(islower(a)) return a-32;
    else return a;
    // printf("%d\n",isupper(a));//�ж��Ƿ�����Ǵ�д��ĸ
	// printf("%d\n",islower(a));//�ж��Ƿ������Сд��ĸ
}
int main(int argc, char const *argv[]){
    char x,y;
    scanf("%c",&x);
    y= Change(x);
    printf("%c",y);
}
