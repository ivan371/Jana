#include <iostream>
using namespace std;

int N_max = 1000000;
int main() {
	int N = 0;
	cin >> N;
	int arr[N_max];
	for(int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	int min1 = arr[N - 1];
	int min2 = arr[N - 2];
	int max1 = arr[1];
	int max2 = arr[0];
	for(int i = 0; i < N; i++) {
		if(min1 > arr[i]) {
			if(min2 > arr[i])
				min2 = arr[i];
			else
				min1 = arr[i];
		}
		else if(min2 > arr[i]) {
			min2 = arr[i];
		}
		if(max1 < arr[i]) {
			if(max2 < arr[i])
				max2 = arr[i];
			else
				max1 = arr[i];
		}
		else if(max2 < arr[i]) {
			max2 = arr[i];
		}
	}
	cout << min1 + min2 << " " << max1 + max2;
	return 0;
}
