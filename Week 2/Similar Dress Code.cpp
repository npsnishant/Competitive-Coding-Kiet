#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void solve(){
    string str;
    cin>>str;
    int one=0,zero=0, ans=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='1'){
            one++;
        }
        else{
            zero++;
        }
    }
     ans = min(one, zero);
    cout<<ans<<endl;
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
