#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<map>
#include<algorithm>

using namespace std;

int main(){
    int a,b,c,d,m;
    cin >> a >> b >> c >> d >> m;
    int max = 0;
    int ans;
    for(int i = a; i <= b; i++){
        for(int j = c; j <= d; j++){
            int tmp = i+j;
            if(tmp%m > max) max = tmp%m;
        }
    }
    cout << max << endl;
    return 0;
}