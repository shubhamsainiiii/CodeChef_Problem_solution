#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,X,Y;
        cin>>A>>B>>X>>Y;
        if(A*B<=X*Y)cout<<"Yes\n";
        else if(A*B>X*Y)cout<<"No\n";
    }
    return 0;
}
