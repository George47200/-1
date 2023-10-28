#include<stdio.h>
#include<string.h>

int main(){
int length=0; 
	char a[101];
	gets(a);
    printf("%c",a[0]-32);
    length=strlen(a);
    for (int i=1;i<=length;i++){
    	printf("%c",a[i]);
	}
	
	
	
	
	
	
	
	return 0;
} 
