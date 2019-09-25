#include <iostream>
#include <vector>

using namespace std;

//int count_team(int c, int m, int x){
//    int cnt = 0;
//    while(c != 0 && m != 0 && c+m+x > 2 ){
//        c--;
//        m--;
//        if (x ==0 ){
//            if (c > m){
//                c--;
//            } else {
//                m--;
//            }
//        } else {
//            x--;
//        }
//        cnt++;
//    }
//    return cnt;
//}

int minimum(int a, int b, int c){
    int m;
    if (a > b){
        m = b;
    } else {
        m = a;
    }
    if (c < m){
        m = c;
    }
    return m;
}


int main() {
    int n;
    cin >> n;
    int cnt = 0;
    int c, m, x;
//    vector<int> ans(n);
    for (int i = 0; i < n; i++){
        cin >> c >> m >> x;

        cnt = minimum(c, m , x);
//        int a = cnt;
        c -= cnt;
        m -= cnt;
        x -= cnt;
        if (x == 0 && c != 0 && m != 0){
            cnt += (c % (2*m) + m % (2*c) + (c >= 2*m )*(2*m - c % (2*m)) + (2*c - m % (2*c))*(m >= 2*c))/3;
        }

//        cout << cnt << " ";
//        cnt  = a;
//        while(c != 0 && m != 0 && c+m+x > 2 ){
//            c--;
//            m--;
//            if (x ==0 ){
//                if (c > m){
//                    c--;
//                } else {
//                    m--;
//                }
//            } else {
//                x--;
//            }
//            cnt++;
//        }
        cout << cnt << endl;
//        ans[i] = count_team( c,  m, x);
    }
//    for (auto i : ans){
//        cout << i<< endl;
//    }
    return 0;
}