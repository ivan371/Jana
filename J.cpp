#include <iostream>

using namespace std;


void qsort(int *arr, int size) {
    int i = 0;
    int j = size - 1;
    int mid = arr[size / 2];
    do {
        while(arr[i] < mid) {
            i++;
        }
        while(arr[j] > mid) {
            j--;
        }
        if (i <= j) {
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    } while (i <= j);

    if(j > 0) {
            qsort(arr, j + 1);
    }
    if (i < size) {
        qsort(&arr[i], size - i);
    }
}

const int N_max = 500000;
int main()
{
    int N = 0;
    cin >> N;
    int arr[N_max];
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    qsort(arr, N);
    int res = 2;
    for(int i = 0; i < N - 1; i++) {
        if(arr[i] == arr[i + 1]) {
            res--;
        }
        if(res == 0)
            break;
    }
    if(res != 0)
        cout << 1;
    else
        cout << 0;
    return 0;
}
