#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int count=0, k=0;
    vector<int> v;
    for(int i=0;i<n-1;i++){
        int x = abs(arr[i]-arr[i+1]);
        if(x<0 || x>n){
            cout<<"Incorrect Formation"<<endl;
            return;
        }
        v.push_back(x);
    }
    
    for(int i=0;i<v.size()-1;i++){
        if(v[i]<v[i+1]){
            count++;
        }
    }
    for(int i=0;i<v.size()-1;i++){
        // cout<<v[i]<<endl;
        if(v[i]>v[i+1]){
            k++;
        }
    }
    
    // cout<<count<<"  "<<k<<endl;
    if(count==n-2 || k==n-2){
        cout<<"Correct Formation"<<endl;
    }
    else{
        cout<<"Incorrect Formation"<<endl;
    }
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
