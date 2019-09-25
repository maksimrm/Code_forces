#include <iostream>
#include <string>
#include <vector>


using namespace std;

bool is_duel(int x1, int y1, int x2, int y2){
    return (abs(x1-x2)-2 == 0 && abs(y1-y2) - 1 == 0) ||
    (abs(x1-x2)-1 == 0 && abs(y1-y2) - 2 == 0);
}




int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n ; i++){
        string s;
        for(int j = 0; j < n ; j++){
            if (i % 2 == 0){
                if (j %2 == 0){
                    s += "W";
                } else {
                    s += "B";
                }
            } else {
                if (j %2 == 0){
                    s += "B";
                } else {
                    s += "W";
                }
            }

        }
        cout << s << endl;
    }
    return 0;
}