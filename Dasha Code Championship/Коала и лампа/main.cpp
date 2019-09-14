#include <iostream>
#include <string>
#include <vector>

using namespace std;


bool is_working(const int a,const int b,const  char init,const  int time){
    if (time >= b){
        int cnt = (time - b) / a + 1;
        if (init == '0'){
            return cnt % 2 == 1;
        } else {
            return cnt % 2 == 0;
        }



    } else {
        if (init == '0'){
            return false;
        } else {
            return true;
        }
    }
}




int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }
    int cnt =0;
    int max = 0;

//    for(int time = 0; time <= 10; time++) {
//        for (int i = 0; i < n; i++) {
//            bool ans = is_working(a[i], b[i], s[i], time);
//            cout << i << " " << ans << endl;
//
//
//        }
//    }

    for(int time = 0; time <= 5 + 5*4*3*2*10; time++){
        cnt = 0;
        for (int i = 0; i < n; i++){
            if (is_working(a[i], b[i], s[i], time)){

                cnt+= 1;
            }

        }
        if (cnt > max){
            max = cnt;
        }


    }

    cout << max;
    return 0;
}