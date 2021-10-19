#include<stdio.h>
int max(int a,int b,int c);
int main(){
  int m= max(4,5,6);
  printf("%d\n",m);

}
int max(int a,int b,int c){
    int max;
    if (a>b)
        max=a;
    else
        max=b;
    if(max>c)
        return max;
    return c;
}