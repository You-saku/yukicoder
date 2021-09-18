#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<map>
#include<ios>
#include<iomanip> 
#include<cmath>
#include<limits>
#include<algorithm>

using namespace std;

long long modpow(long long a, long long n, long long mod) {
    long long res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}

long long  MOD = 1000000007;
int main(){
    long long a,b,c,k;
    cin >> a >> b >> c;
    cin >> k;

    long long digit = modpow(2,k,MOD-1);
    a = (a*b)%MOD;
    a = (a*c)%MOD; 
    cout << modpow(a,digit,MOD) << endl;
    return 0;
}