#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int len = s.length();
    string s1(len + len / 5, 0);
    int j = 0;
    for(int i = 0; i < len; i++) {
        if(i % 5 == 0 && i != 0) {
            s1[j++] = ' ';
        }
        s1[j++] = s[i];
    }
    cout << s1;
}
