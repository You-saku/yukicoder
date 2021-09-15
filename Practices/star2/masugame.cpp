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
    int n;
    cin >> n;
    long long ans = 0;
    map<int,int>red;
    vector<int>blue;
    for(int i = 0; i < n; i++){
        int a,b,t;
        cin >> a >> b >> t;
        if(a==0){
            red[b-t]++;
        }else{
            blue.push_back(b-t);
        }
    }

    for(auto x: blue){
        if(red.count(x)){
            ans += red[x];
        }
    }
    cout << ans << endl;
    return 0;
}