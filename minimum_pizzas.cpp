#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int X, N;
        cin >> X >> N;
        if ((X*N)% 4 != 0)
        {
            cout << ((X*N)/4) + 1 << "\n";
        }
        else {
            cout << (X*N) / 4<<"\n";
        }
    }
    return 0;
}
