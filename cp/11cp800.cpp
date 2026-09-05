#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    int dist = INT_MAX;
    int zero_count = 0;
    for(int i=0; i<n; i++) {

        cin >> v[i];

        if(v[i] == 0) {
            zero_count++;
            break;
        }
        int temp = abs(0-v[i]);
        dist = min(dist, temp);
    }

    if(zero_count != 0) cout << 0 << endl;
    else cout << dist << endl;

}