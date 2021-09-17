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
    string s;
    cin >> s;
    int size = s.size();
    string ans = "kyoprotenkei90";
    sort(ans.begin(), ans.end());
    sort(s.begin(), s.end());
    if(ans == s){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}