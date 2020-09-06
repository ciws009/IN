#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    
    string s = "indeednow";
    sort(s.begin(), s.end());
    for(int i = 0; i < n; i++) {
        sort(v[i].begin(), v[i].end());
        if(s == v[i]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}