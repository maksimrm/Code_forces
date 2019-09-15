#include <iostream>

using namespace std;

int main() {
    int a1, a2, k1, k2,n;
    cin >> a1 >> a2 >> k1 >> k2 >> n;
    int min, max;
    if (n - a1*(k1-1) - a2*(k2-1) <= 0){
        min = 0;
    } else {
        min = n - a1*(k1-1) - a2*(k2-1);
    }

    if (k1 < k2){

        if ((n / k1) > a1){
            max= a1;
            max += (n - k1*a1)/k2;
        } else {
            max =(n / k1);
        }
    } else {

        if ((n / k2) > a2){
            max = a2;
            max += (n - k2*a2)/k1;
        }else {
            max =(n / k2);
        }
    }
    cout << min << " " << max << endl;
    return 0;
}