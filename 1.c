#include <stdio.h>
#include <stdlib.h>

int main() {
	int N = 0;
	scanf("%d", &N);
	int *arr = (int *) calloc(N, sizeof(int));
	int i = 0;
	for(i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	for(i = 0; i < N; i++) {
		printf("%d ", arr[N - i - 1]);
	}
	return 0;
}
