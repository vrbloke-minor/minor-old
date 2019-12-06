#include <stdio.h>
#include <stdlib.h>

int moc(double base, double exponent) {
	double result = 1;
	for(int i = 0; i < exponent; i++) { result *= base; }
	return (int)result;
}

int* transform(int x, int size) { //tablica jest od tylu
	int* res = (int*)malloc(size*sizeof(int));
	for(int i=size-1; i>=0; i--)
	{
		res[i] = (x/moc(10,i));
		x -= res[i]*moc(10,i);
	}
	return res;
}

int main() {
	int size;
	int n[4];
	printf("Provide size of numbers and 4 numbers:\n");
	scanf("%d", &size);
	for(int i = 0; i<4; i++) { scanf("%d", &n[i] ); }
	printf("\n");
	int* res = (int*)malloc(size*sizeof(int));
	for(int i = 0; i<4; i++)
	{
		res = transform(n[i], size);
		for(int i = size-1; i>=0; i--) { printf("%d", res[i]); }
		printf("\n");
	}
	printf("----\n");
	res = transform(n[0]+n[1]+n[2]+n[3], size);
	for(int i = size-1; i>=0; i--) { printf("%d", res[i]); }
	printf("\n");
	
	return 0;
}
