#include <stdlib.h>
#include <stdio.h>

void sort(int* a, int n)
{
	int temp;
	for (int i = n; i > 0; i--)
	{
		for(int j = 0; j < i-1; j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

int locate(int* a, int x, int i_l, int i_p) { // a - array, x - value to locate, i_l, i_p - beginning and end of array, indexes
	int n = sizeof(a)/sizeof(int);
	int i_sr;
	while(i_l <= i_p)
	{
		i_sr = (i_l + i_p)/2;
		if(a[i_sr] == x) { return i_sr; }
		else if(a[i_sr] < x) { return locate(a, x, i_sr+1, i_p); }
		else { return locate(a, x, i_l, i_sr-1); }
	}
	return -1;
}

int printarr(int *a, int n) {
	for(int i = 0; i<n ; i++)
	{
		printf("%d, ", *(a+i));
	}
	printf("\n");
}

int main() {

	int n;
	int x;

	printf("Size of array?\n");
	scanf("%d", &n);

	int* a;
	a = (int*)malloc(n * sizeof(int));

	printf("Assign values:\n");

	for(int i = 0; i < n; i++)
	{
		scanf("%d", a+i);
	}

	sort(a, sizeof(a)/sizeof(int));

	printf("Assigned values: ");

	for(int i = 0; i < n; i++)
	{
		printf("%d\n", *(a+i));
	}

	printf("What value to search for?");
	scanf("%d", &x);

	if(locate(a, x, 0, n-1) == -1) { printf("Value not found :(\n"); }
	else { printf("Value found at index %d", locate(a, x, 0, n-1)); }

	return 0;
}
