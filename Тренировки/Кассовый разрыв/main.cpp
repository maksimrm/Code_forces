#include <iostream>
#include <vector>



using namespace std;

int main() {

    int64_t m, n, s;
    cin >> n >> m >> s;
    int cnt, from, to;
    vector<int> positive_operations(m, 0);
    vector<int> negative_operations(m, 0);
    for (int i = 0; i < n; i++){
        cin >> cnt >> from >> to;
        if (cnt < 0){
            negative_operations[from] += cnt;
        } else {
            positive_operations[to] += cnt;
        }
    }


    int ans = 1;
    for (int i = 0; i < m; i++){
        s += negative_operations[i];
        if (s < 0){
            ans = 0;
            break;
        }
        s += positive_operations[i];
    }

    if (s < 0){
        ans = 0;
    }

    if (ans == 0) {
        cout << "YES" << endl;
    }  else {
        cout << "NO" << endl;
    }
    return 0;
}