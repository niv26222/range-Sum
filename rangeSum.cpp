#include <bits/stdc++.h> 
using namespace std; 
#define MOD 1000000007 
  
// Function to return the required sum 
int rangeSum(int l, int r) 
{ 
  
    int a = 1, b = 9, res = 0; 
    for (int i = 1; i <= 10; i++) { 
        int L = max(l, a); 
        int R = min(r, b); 
  
        // If range is valid 
        if (L <= R) { 
  
            // Sum of AP 
            int sum = (L + R) * (R - L + 1) / 2; 
            res += (i * i) * (sum % MOD); 
            res %= MOD; 
        } 
        a = a * 10; 
        b = b * 10 + 9; 
    } 
    return res; 
} 
  
// Driver code 
int main() 
{ 
    int l = 98, r = 102; 
    cout << rangeSum(l, r); 
  
    return 0; 
} 