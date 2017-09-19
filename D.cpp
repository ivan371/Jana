#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    int t = 0;
    int nc = 0;
    cin >> N;
    int arr[4];
    arr[0] = N / 1000;
    arr[1] = (N % 1000) / 100;
    arr[2] = (N % 100) / 10;
    arr[3] = N % 10;
    for(int i = 0; i < 4; i++) {
        if(arr[i] == 0)
            nc++;
        for(int j = 0; j < 4; j++) {
            if(arr[i] < arr[j]) {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    if (nc != 0) {
        t = arr[0];
        arr[0] = arr[nc];
        arr[nc] = t;
    }
    for(int i = 0; i < 4; i++) {
        cout << arr[i];
    }
    return 0;
}
