#include<iostream>

using namespace std;

void f(int tc) {
    int n, i, x, c5=0, c10=0, c50=0, ans=0;
    cin>>n;
    for(i=0;i<n;i++) {
        cin>>x;
        if(ans) continue;
        if(x==500) c5++;
        else if(x==1000) {
            if(!c5) ans=i+1;
            else {
                c5--;
                c10++;
            }
        } else {
            if(c5 >= 1 && c10 >= 4) {
                c5--;
                c10 -= 4;
                c50++;
            } else if(c5 >= 3 && c10 >= 3) {
                c5 -= 3;
                c10 -= 3;
                c50++;
            } else if(c5 >= 5 && c10 >= 2) {
                c5 -= 5;
                c10 -= 2;
                c50++;
            } else if(c5 >= 7 && c10 >= 1) {
                c5 -= 7;
                c10 -= 1;
                c50++;
            } else if(c5>=9) {
                c5 -= 9;
                c50++;
            } else ans=i+1;
        }
    }
    if(!ans) cout << n << '\n';
    else cout << ans-1 << '\n';
}

int main() {
    int t;
    cin>>t;
    for(int i=1;i<=t;i++) {
        cout << "Case #" << i << '\n';
        f(i);
    }
}