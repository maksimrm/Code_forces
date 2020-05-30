#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(vector<unsigned short int> left, vector<unsigned short int> right){
    return left.size() < right.size();
}

vector<unsigned short int> merge(vector<unsigned short int> left, vector<unsigned short int> right){
    vector<unsigned short int> ans(left.size()+right.size());
    unsigned short int i = 0;
    unsigned short int j = 0;
    while (i + j < ans.size()) {
        if (i < left.size() && j < right.size()) {
            if (left[i] < right[j]) {
                ans[i+j] = left[i];
                i++;
            } else {
                ans[i+j] = right[j];
                j++;
            }
        } else if(i < left.size()){
            ans[i+j] = left[i];
            i++;
        } else {
            ans[i+j] = right[j];
            j++;
        }
    }
    return ans;
}


int main() {
    unsigned short int n, k, a;
    cin >> n;
    vector<vector<unsigned short int>> arrays(n);
    for (unsigned short int i = 0; i < n; i++){
        cin >> k;
        for (unsigned short int j = 0; j < k; j++){
            cin >> a;
            arrays[i].push_back(a);
        }
    }
    sort(begin(arrays), end(arrays), compare);

    vector<unsigned short int> ans;
    unsigned short int i = 0;
    for (unsigned short int i = 0; i < n; i++){
        if (i+1 < n){
            if (arrays[i+1].size() > ans.size()){
                ans = merge(arrays[i], ans);
            } else {
                arrays[i+1] = merge(arrays[i+1], arrays[i]);
            }
        } else {
            ans = merge(ans, arrays[i]);
        }
    }

    for (unsigned short int item : ans){
        cout << item << " ";
    }
    cout << endl;
    return 0;
}