//第六题
/*
#include <stdio.h>
#include <math.h>
void main()
{
	double x,y;
	printf("请输入一个数字：");
	scanf("%lf",&x);
	if(x<1){
		y=2*x+1;
	}
	if(x>=1&&x<10){
		y=1;
	}
	if(x>=10){
		y=sqrt(x);
	}
	printf("%lf",y);
}
*/

//第七题
/*
#include <stdio.h>
void main()
{
	int x=0,y=0,z=0,g=0,n=0;
	char k[100]={0};
	char f;
	printf("请输入一行字符：");
	gets(k);
	for(n=0;n<100;n++){
        f = k[n];
        if(f==0){
            continue;
        }
	printf("%d\n",k[n]);
	if((k[n]>64&&k[n]<91)||(k[n]>96&&k[n]<123)){
	x++;
	}
	else if(k[n]==32){
	y++;	
	}
	else if(k[n]>47&&k[n]<58){
	z++;
	}
	else {
	g++;
	}}
	printf("英文字母有%d个\n空格有%d个\n数字有%d个\n其他字符有%d个\n",x,y,z,g);
	}
	*/

//第八题
/*
#include <stdio.h>
void main()
{
	 int n=100,g,s,b,x;
     for(n=100;n<=999;n++)
	{
         g = n%10;  //个位
         s = n/10%10; //十位
         b = n/100;  //百位
         x = b*b*b+s*s*s+g*g*g;

         if(x==n){
          printf("水仙花数为：%d\n",n);
         }
     }
	}	
*/