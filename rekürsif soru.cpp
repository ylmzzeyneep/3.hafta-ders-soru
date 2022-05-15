#include <stdio.h>
int fonk(int x){
	if(x<=0)
	return 0;
	return fonk(x-1) + 2;
}

int main(){
	int x;
	printf("bir sayi giriniz:");
	scanf("%d", &x);
	
	printf("%d", fonk(x));
	return 0;
}
