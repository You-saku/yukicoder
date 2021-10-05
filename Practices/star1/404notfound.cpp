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
    string S;
    cin >> S;
    if(S[0] == '4' || S[0] == '5'){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}