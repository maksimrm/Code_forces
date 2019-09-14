#include <iostream>

#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(begin(v), end(v));

    int cnt = 0;
    int a = 0;
while(!v.empty()){
    sort(begin(v), end(v));
    cnt += 1;
    a = v[0];
    for (int i = 0; i < v.size(); i++){
        if (v[i] % a == 0){
            v.erase(begin(v)+i);
            i--;
        }

    }
}


    cout << cnt;
    return 0;
}