#include <iostream>
#include <vector>


using namespace std;


int main() {




    int cnt;
    cin >> cnt;
    for (int i = 0; i < cnt; i ++){
        int n;
        cin >> n;
        int cost_a = 0;
        vector<int> len(n);
        vector<int> cost(n);
        for (int j = 0; j < n; j++){
            cin >> len[j] >> cost[j];
        }
        for(int j = 0; j < n; j ++){
            if (len[j-1] == len[j]){
                if (cost[j-1] < cost[j]){
                    cost_a+= cost[j-1];
                    len[j-1]--;
                } else{
                    if (j < n -1) {
                        if (len[j] != len[j+1]) {
                            cost_a += cost[j];
                            len[j]--;
                        } else {
                            if ( cost[j] < cost[j-1]+cost[j]){
                                cost_a += cost[j];
                                len[j]--;
                            } else {
                                cost_a+= cost[j-1];
                                len[j-1]--;
                                cost_a += cost[j+1];
                                if (j + 1 < n -1){
                                    len[j+1] = len[j+2]-1;
                                }
                            }
                        }
                    }
                }
            }
        }
        cout << cost_a << endl;
    }
    return 0;
}