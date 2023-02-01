#include<bits/stdc++.h>
using namespace std;
#define MOD 10000007

#define mem(a,b) memset(a, b, sizeof(a) )


#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


const int mx = 1e4+123;
int dp[mx];
int a, b, c, d, e, f;
int fn(int n) {
    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;
    if (n == 3) return d;
    if (n == 4) return e;
    if (n == 5) return f;

    if ( dp[n] != -1 ) return dp[n];
    long long res = (( fn(n-1) % MOD ) + ( fn(n-2) % MOD )
     + ( fn(n-3) % MOD ) + ( fn(n-4) % MOD )
     + ( fn(n-5) % MOD ) + ( fn(n-6) % MOD )) % MOD;
     dp[n]=res;
     return dp[n];
}
int main() {
     optimize();
    int n, cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno) {


            mem(dp,-1);
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", caseno, fn(n) % 10000007);
    }
    return 0;
}



