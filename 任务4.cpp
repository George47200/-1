#include<stdio.h>
int main()
{int a,b,c,t;
int s;
printf("请输入三个数");
scanf("%d%d%d",&a,&b,&c);
if(a<b){
	t=a;
	a=b;
	b=t;
	
	
}
if (a<c){
	t=a;
	a=c;
	c=t;}
	
if(b<c){
	t=b;
	b=c;
	c=t;
	
};	s=a*100+b*10+c;
printf("%d",s);
	return 0;
}
 
	
	
	
	
	
	
	

