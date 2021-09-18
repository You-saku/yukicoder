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
    int n;
    cin >> n;
    long long sum = 0;
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        sum+=tmp;
    }
    if(sum % n == 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}