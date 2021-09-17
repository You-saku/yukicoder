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

int main(){
    long long n;
    cin >> n;
    long long count = 0;
    for(int i=1; i<=n-1; i++){
        long long tmp = n * n - 1LL * i * i;
        long long y = (long long)(sqrt(1.0 * tmp) + 1.0e-9);
        if (i * i + y * y == n *n)  count++; 
    }
    cout << count << endl;
    return 0;
}