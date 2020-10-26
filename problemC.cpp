#include <bits/stdc++.h>
using namespace std;

int main () {
   

        long long int n, x, pos;

        cin >> n >> x >> pos;

        long long int result = 1;


        for (long long int i = n - 1; i > 0; --i) { result = (result * i) % 1000000007; //cout << result << endl; } 


        if (pos == 0 && n == 1) cout << result - 1 << endl;
        else cout << result << endl;
  
}