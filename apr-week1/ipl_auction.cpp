#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int dp[n];
    int ans=INT_MIN;
    int sum=0;
    dp[0] = arr[0];
    dp[1] = max(arr[0], arr[1]);
    for(int i=2;i<n;i++){
        dp[i] = max(dp[i-2]+arr[i],dp[i-1]);
    }
    
    cout<<dp[n-1]<<endl;
    
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
