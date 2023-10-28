#include<stdio.h>
int main(){
	int m,n,s;
	printf("请输入:");
	scanf("%d%d",&m,&n);
	 while(n!=0){
	 	s=m%n;
		m=n;
		n=s;
	}
		
		printf("最大公约数是:%d\n",m);
		
		
		return 0; 
		 
	 	
	 	
	 	
	 	
	 	
	 	
	 	
	 }
	
	
	
	
	
	
	
	
