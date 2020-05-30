#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int64_t a, b, c;
    cin >> a >> b >> c;
    uint32_t m = a;

    if (m > b){
        m = b;
    }
    if (m > c){
        m = c;
    }

    cout << abs(a-m) + abs(c-m)+abs(b - m) << endl;
    return 0;
}