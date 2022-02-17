#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int ans = 0;
    int bit_count = floor(log2(n))+1;
    int ones = ((1 << bit_count) - 1);
    ans =  ones ^ n;
    cout<<ans*n<<endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
