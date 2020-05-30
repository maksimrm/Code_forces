#include <iostream>

using namespace std;

int max(int a, int b){
    if (a > b){
        return a;
    }
    return b;
}

int main() {
    int n;
    int cur = 0;
    int m = 0;
    int a;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> a;
        if (a == 0){
            m = max(m, cur);
            cur = 0;
        }
        if (a == 1){
            cur++;
            m = max(m, cur);
        }
    }

    cout << m << endl;
    return 0;
}