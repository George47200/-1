#include<stdio.h>
int main(){
	int m,n,s;
	printf("������:");
	scanf("%d%d",&m,&n);
	 while(n!=0){
	 	s=m%n;
		m=n;
		n=s;
	}
		
		printf("���Լ����:%d\n",m);
		
		
		return 0; 
		 
	 	
	 	
	 	
	 	
	 	
	 	
	 	
	 }
	
	
	
	
	
	
	
	
