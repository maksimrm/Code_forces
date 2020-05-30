#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int64_t prev, cur;

    for (int i = 0; i < n; i++){
        cin >> cur;
        if (i == 0){
            prev = cur;
            cout << prev << endl;
        }
        if (cur != prev){
            prev = cur;
            cout << prev << endl;
        }

    }
    return 0;
}