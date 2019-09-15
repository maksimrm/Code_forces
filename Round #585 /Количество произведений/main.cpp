#include <iostream>



using namespace std;




int main() {
    int n;
    cin >> n;
    int v;
    int ness[n];
    cin >> v;
    ness[0] = (v < 0);
    int neg_cnt = ness[0] % 2;
    for (int i = 1; i< n; i++) {
        cin >> v;
        ness[i] = ness[i - 1] + (v < 0);
        neg_cnt += ness[i] % 2 + (v < 0);
        for (int l = 1; l < i; l++) {
            neg_cnt += (ness[i] - ness[l - 1]) % 2;
        }
    }
    cout << neg_cnt << " " << (n*n+n)/2 - neg_cnt<< endl;
    return 0;
}