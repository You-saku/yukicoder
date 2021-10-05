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

// 完全に頭が止まった
// 回答できませんでした
int main(){
    int n,m;
    cin >> n >> m;
    vector<long long>T(m);
    vector<long long>P(m);

    for(int i=0; i<m;i++){
        cin >> T[i] >> P[i];
    }

    if(m >= 2){
        for(int i=0; i<m-1; i++){
            if(abs(T[i+1]-T[i]) < abs(P[i+1] - P[i])){
                cout << "No" << endl;
                return 0;
            }
        }
    }else{
        if(T[0] < P[0]){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}