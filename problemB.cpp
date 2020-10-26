#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)  
{  
    // Corner cases  
    if (n <= 1)  return false;  
    if (n <= 3)  return true;  
    
    // This is checked so that we can skip   
    // middle five numbers in below loop  
    if (n%2 == 0 || n%3 == 0) return false;  
    
    for (int i=5; i*i<=n; i=i+6)  
        if (n%i == 0 || n%(i+2) == 0)  
           return false;  
    
    return true;  
}  
  
// Function to return the smallest 
// prime number greater than N 
int nextPrime(int N) 
{ 
  
    // Base case 
    if (N <= 1) 
        return 2; 
  
    int prime = N; 
    bool found = false; 
  
    // Loop continuously until isPrime returns 
    // true for a number greater than n 
    while (!found) { 
        prime++; 
  
        if (isPrime(prime)) 
            found = true; 
    } 
  
    return prime; 
} 

int main () {
    int t;
    cin >> t;

    while (t--) {
        int n;

        cin >> n;

        if (n < 4) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    cout << 1 << " ";
                }
                cout << endl;
            }
        }

        else {
        for (int i = 0; i < n - 2; i++) {
            for (int j = 0; j < n; j++) {
                if (j == n - 2) cout << 1 << " ";
                else if (j == n - 1) cout << 4;
                else cout << 0 << " ";
            }
            cout << endl;
        }

       

        for (int i = 0; i < n - 2; i++) {
            cout << 4 << " ";
        }

        cout << 0 << " ";

        int y = 409 - (4 * (n - 2));
        bool flag = true;
        int p = 409;
        //int nextPrime

        while (flag) {
            if (!isPrime (y)) flag = false;
            else {
                p = nextPrime(p);
                y = p - (4 * (n - 2));
            }
        }
        cout << y << endl;

        for (int i = 0; i < n - 2; i++) {
            cout << 1 << " ";
        }


        int k = 409 - (n - 2);
        flag = true;
        p = 409;
        //int nextPrime

        while (flag) {
            if (!isPrime (k)) flag = false;
            else {
                p = nextPrime(p);
                k = p - (n - 2);
            }
        }
        cout << k << " ";
        cout << 0 << endl;
        
    }
    }
}