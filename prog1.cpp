#include <stdio.h>

int func(int a){
	int count=0;

	for(int i=1;i<=a;i++){
		if(a%i==0)count++;
	}
	return count;
}

int main(){

	int a, b, n;
	scanf("%d %d %d", &a, &b, &n);

	for(int i=a;i<=b;i++){
		if(func(i)==n){
			printf("%d\n", i);	
		}
	}

	return 0;
}
