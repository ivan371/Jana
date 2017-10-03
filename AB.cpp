#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int s_count = 0;
    getline(cin, s);
    int len = s.length();
    for(int i = 0; i < len; i++) {
        if(s[i] == ' '){
            s_count++;
        }
    }
    cout << s_count;
}
