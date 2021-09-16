#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<map>
#include <ios>
#include <iomanip> 
#include<algorithm>

using namespace std;

int main(){
    int ans = 0;
    string base = "12345678";
    int k;
    cin >> k;
    do{
        string tmp = "";
        for(auto &x: base){
            tmp += x;
        }
        int num = atoi(tmp.c_str());
        if(num%k == 0) ans++;

    }while(next_permutation(base.begin(), base.end()));
    cout << ans << endl;
    return 0;
}