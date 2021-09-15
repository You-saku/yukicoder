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
    int n,q;
    cin >> n >> q;
    vector<bool>lamp(n,0);
    int count = 0;
    for(int i=0; i<q; i++){
        int start,end;
        cin >> start >> end;
        for(int j = start-1; j < end; j++){
            if(lamp[j]){
                lamp[j] = false;
                count--;
            }else{
                lamp[j] = true;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}