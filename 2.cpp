#include <iostream>
using namespace std;

int N_max = 10000;
int main() {
	int N = 0;
	cin >> N;
	int arr[N_max];
	int sum = 0;
	for(int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	for(int i = 0; i < N; i++) {
		if(i % 3 == 0 && i % 7 == 0) {
			sum += arr[i];
		}
	}
	cout << sum;
	return 0;
}
