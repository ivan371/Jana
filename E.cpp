#include <iostream>

using namespace std;

const int N_max = 30000;
int main()
{
    int N = 0;
    cin >> N;
    if(N < 2) {
        cout << 0;
        return 0;
    }
    int arr[N_max];
    int ac = 1;
    arr[0] = 2;
    int j = 0;
    for(int i = 3; i <= N; i++) {
        for(j = 0; j < ac; j++) {
            if(i % arr[j] == 0 && i != arr[j]){
                break;
            }
        }
        if(j == ac) {
            arr[ac] = i;
            ac++;
        }
    }
    for(int i = 0; i < ac; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
