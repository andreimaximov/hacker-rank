#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define mod 1000000007

ll power(ll x, ll y) 
{ 
    ll res = 1;      // Initialize result 
  
    x = x % mod;  // Update x if it is more than or  
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % mod; 
  
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % mod;   
    } 
    return res; 
} 
// Complete the countArray function below.
ll countArray(ll n, ll k, ll x) {
    // Return the number of ways to fill in the array.
    if(n == 2){
    if(x == 1)
    return 0;
    return 1;
    }
    ll a = power(k - 1, n - 2) - countArray(n - 1, k, x);
    a = (a + mod) % mod;
    return a;
    
}

int main()
{

    ll n,k,x;
    cin >> n >> k >> x;

    ll answer = countArray(n, k, x);

    cout << answer << "\n";

    return 0;
}

