#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int s_count = 0;
    getline(cin, s);
    int len = s.length();
    for(int i = 0; i < len; i++) {
        if(s[i] == '0' || s[i] == '2' || s[i] == '4' || s[i] == '6' || s[i] == '8'){
            s_count++;
        }
    }
    cout << s_count;
}
