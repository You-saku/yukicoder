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
    vector<int>A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    int sum = A[0];
    for(int i = 1; i < n; i++){
        if(A[i] - A[i-1] != 1){
            sum += A[i];
        }
    }
    cout << sum << endl;
    return 0;
}