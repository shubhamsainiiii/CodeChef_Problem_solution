#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int B1,B2,B3;
        cin>>B1>>B2>>B3;
        if(B1+B2+B3<=1) cout<<"Water filling time\n";
        else cout<<"Not now\n";
    }
    return 0;
}
