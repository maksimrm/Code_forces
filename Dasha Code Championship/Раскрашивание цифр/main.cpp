#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int etalon = 0;


bool finder(int a){
    return a < etalon;
}




int main() {
    int t;
    cin >> t;
    vector<vector<int>> result(t);
    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> v(n);
        vector<int> ans(n);
        for (int j = 0; j < n; j++){
            v[j] = s[j] - '0';
        }
        for (int j = 0; j < n; j++) {
            etalon = v[j];
            int cnt = count_if(begin(v)+j, end(v), finder);
            if (cnt){
                if (j == 0){
                   ans[0] = 2;
                } else if (v[j-1] <= v[j]) {

                }
            }
        }
    }
    return 0;
}