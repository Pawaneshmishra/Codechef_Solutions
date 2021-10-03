#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int T,n,count;
    cin>>T;
    
    while(T--)
    {
        count=0;
        cin>>n;
        long long int a[n];
        long long int b[n];
        
        for(long long int i=0; i<n; i++) cin>>a[i];
        for(long long int i=0; i<n; i++) cin>>b[i];
        
        if(a[0]>=b[0]) count++;
        
        for(long long int i=1; i<n; i++)
        {
            if((a[i]-a[i-1])>=b[i]) count++;   
        }
        
        cout<<count<<endl;
        
        
    }
    
    return 0;
}