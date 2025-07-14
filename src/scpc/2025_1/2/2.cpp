#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void f(int tc) {
    long long n, l;
    cin>>n>>l;
    vector<long long> v(n), ls(n), rs(n);
    for(auto &i:v) cin>>i;
    sort(v.begin(), v.end());
    ls[0] = v[0];
    rs[n-1]=l-v[n-1];
    for(int i=1;i<n;i++) {
        ls[i]=ls[i-1]+v[i];
        rs[n-i-1]=rs[n-i]+l-v[n-i-1];
    }
    long long ans = ls[n-1]*2;
    for(int i=0;i<n;i++) {
        long long ln = i ? ls[i-1] : 0;
        long long rn = i < n - 1 ? rs[i+1] : 0;
        ans=min(ans, ln*2+rn*2+l);
    }
    cout << ans << '\n';
}

int main() {
    int t;
    cin>>t;
    for(int i=1;i<=t;i++) {
        cout << "Case #" << i << '\n';
        f(i);
    }
}