#include<stdio.h>
#include<string.h>
int contoh (int a);
int main (){
	int b;
	b=5;//pemanggilan fungsi 
	printf("hasil= %i",b);
	
}
int contoh(int a){
	return(a+=4);
}
