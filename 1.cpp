#include <iostream>
using namespace std;

int N_max = 1000;
int main() {
	int N = 0;
	cin >> N;
	int arr[N_max];
	for(int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	for(int i = 0; i < N; i++) {
		cout << arr[N - i - 1] << " ";
	}
	return 0;
}
