#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans = ans+arr[0][i];
            arr[0][i] = 0;
            ans = ans+arr[n-1][i];
            arr[n-1][i] = 0;
        }
        for(int i=0;i<n;i++)
        {
            ans = ans+arr[i][0];
            arr[i][0] = 0;
            ans = ans+arr[i][n-1];
            arr[i][n-1] = 0;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j || (i+j)==(n-1))
                {
                    ans = ans+arr[i][j];
                    arr[i][j]=0;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}