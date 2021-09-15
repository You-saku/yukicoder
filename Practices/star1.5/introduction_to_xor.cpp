#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<map>
#include <ios>
#include <iomanip> 
#include<algorithm>

using namespace std;
long long MAX = 1000000000000000000;
int main(){
    int n;
    cin >> n;
    vector<long long>a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i = 0; ; i++){
        bool flag = true;
    long long tmp = 1LL << i;
        for(int j =0; j < n; j++){
            if(a[j] & tmp){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << tmp << endl;
            return 0;
        }
    }
    return 0;
}