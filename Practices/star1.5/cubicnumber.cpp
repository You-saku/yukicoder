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

int MAX = 1000000;
int main(){
    long long n;
    cin >> n;
    for(int i=1; i<=MAX; i++){
        long long tmp = (1LL*i)*(1LL*i)*(1LL*i);
        if(tmp == n){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}