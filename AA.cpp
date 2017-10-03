#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int len = s.length();
    string s1(len, 0);
    for(int i = 0; i < len; i++) {
        s1[i] = s[len - i - 1];
    }
    cout << s1;
}
