#include <stdio.h>

const int MAX = 100000;

int main() {
  int n = 0;
  int max = 0;
  scanf("%d", &n);
  double arr[MAX];
  if(arr == -1) {
    printf("FAIL");
    exit(-1);
  }
  scanf("%lf", arr[0]);
  max = arr[0];
  for(int i = 1; i < n; i++) {
    scanf("%lf", arr[i]);
    if(arr[i] > max) {
      max = arr[i];
    }
  }
  printf("%d", max);
}
