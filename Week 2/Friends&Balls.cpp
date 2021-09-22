#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

void solve(){
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        arr[i] = 0;
    }
    long long n;
    cin>>n;
    while(n--){
        long long a,b;
        cin>>a>>b;
        for(int i=a;i<=b;i++){
            arr[i] = arr[i]+1;
            
        }
    }
    int q;
    cin>>q;
    while(q--){
        int x,ans=0;
        cin>>x;
        for(int i=0;i<t;i++){
            if(arr[i]>=x){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
