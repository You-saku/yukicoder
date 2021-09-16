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
    string s;
    cin >> s;
    int num = s.size();
    sort(s.begin(), s.end());
    string ans = "a";
    for(int i=0; i<num; i++){
        if(s[i] == 'a'){
            ans+='a';
        }else{
            cout << ans << endl;
            return 0;
        }
    }
    cout << ans << endl;
    return 0;
}