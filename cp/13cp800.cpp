#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int maxVal = -1;
        for(int i=0; i<n; i++) {
            cin >> a[i];
            maxVal = max(maxVal, a[i]);
        }
        bool flag = true;
        for(int i=0; i<n-1; i++) {
            if(a[i] != a[i+1]) {
                flag = false;
                break;
            }
        }
        if(flag) cout << -1 << endl;
        else {
            vector<int> b;
            vector<int> c;
            // c.push_back(maxVal);

            for(int i=0; i<n; i++) {
                if(a[i] == maxVal) c.push_back(a[i]);
                else b.push_back(a[i]);
            }
        
            cout << b.size() << " " << c.size() << endl;

            for(int i=0; i<b.size(); i++) {
                cout << b[i] << " ";
            }
            cout << endl;
            
            for(int i=0; i<c.size(); i++) {
                cout << c[i] << " ";
            }
            cout << endl;
        }
    }
}