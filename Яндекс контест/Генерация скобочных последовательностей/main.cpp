#include <iostream>
#include <string>

using namespace std;

void gen(string s, int open, int closed, int total){
    if (open == total && closed == total){
        cout << s << endl;
    }
    if (open < total){
        gen(s + "(", open + 1, closed, total);
    }
    if (closed < total && closed < open){
        gen(s + ")", open, closed + 1, total);
    }
}


int main() {
    int n;
    cin >> n;
    gen("", 0, 0, n);
    return 0;
}