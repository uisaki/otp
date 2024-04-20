#include <stdio.h>

#define N 5

int main(void)
{
	int array[N];
	int i;
	
	for (i = 0; i <= N; i++) { // should: i < N
	array[i] = 0;
	}
	
	return 0;
}
