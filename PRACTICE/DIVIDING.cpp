#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,sum,x;
    
    cin>>n;
    sum=0;
    
    for(long long int i=0; i<n; i++)
    {
        cin>>x;
        sum+=x;
    }
    
    if(((n*(n+1))/2)==sum)  cout<<"YES\n";
    else cout<<"NO\n";
    
    return 0;
}
