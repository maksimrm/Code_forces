#include <iostream>
#include <string>
#include <cstring>

using namespace std;

bool is_tr(string s, char c){
    bool ans = false;
    for (char i : s){
        if (i == c){
            ans = true;
            break;
        }
    }
    return ans;
}

int main() {

    string s, q;
    cin >> s;
    cin >> q;
    int tr = 0;

    for (char c: q){
        if (is_tr(s, c)){
            tr ++;
        }
    }
    cout << tr << endl;
    return 0;
}