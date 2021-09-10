#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<map>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int a,b;
        cin >> a >> b;
        int count = b;
        int sum = a*b;

        cout << count+sum << endl;
    }
    return 0;
}