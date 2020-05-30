#include <iostream>
#include <map>
#include <string>


using namespace std;

map <char, int> make_d(string s){
    map <char, int> ans;
    for (char c : s){
        ans[c] += 1;
    }
    return ans;
}

bool is_equal(map <char, int> d1, map <char, int> d2){
   return d1 == d2;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    cout << is_equal(make_d(s1), make_d(s2))<< endl;
    return 0;
}