#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T,n,g,i,q,sum;
    cin>>T;
    
    while(T--)
    {
        cin>>g;
        while(g--)
        {
            cin>>i>>n>>q;
            if(n%2 != 0  &&  i!=q) cout<<(n+1)/2<<endl;
            else cout<<n/2<<endl;
   
        }
    }
    return 0;
}