#include <iostream>
#include <vector>
using namespace std;


int check_idx(int a){
    int cnt = 0;
    while(a!= 1){
        cnt += 1;
        a /= 2;
    }
    return cnt;
}

int main() {
    int cnt;
    cin >> cnt;

    int n;
    int a;
    vector<string> ans(cnt);
    for(int i = 0; i < cnt; i++){
        cin >> n;
        vector<int> info(12);
        for (int j = 0; j < n; j++){
            cin >> a;
            if (a <= 2048) {
                info[check_idx(a)]++;
            }
        }
        for(int j = 0; j < 11;j++){
            info[j+1]+= info[j] / 2;
        }
        if (info[11] != 0){
            ans[i] = "YES";
        } else {
            ans[i] = "NO";
        }
    }
    for (auto i : ans){
        cout << i << endl;
    }
    return 0;
}