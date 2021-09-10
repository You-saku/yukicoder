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
    std::cout << std::setfill('0') << std::right << std::setw(3) << n;
    return 0;
}