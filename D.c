#include <iostream>

using namespace std;

const int N_max = 100000;

int main()
{
    int M = 0;
    int N = 0;
    cin >> N >> M;
    int arr[N_max];
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < N; i++) {
        cout << arr[(i - M) % N];
    }
    return 0;
}
