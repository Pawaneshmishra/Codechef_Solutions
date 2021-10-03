#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,x,sum;
    cin>>n;
    
    for(long long int i=0; i<n; i++)
    {
        sum=0;
        cin>>x;
        
        for(long long int j=1; x>=pow(5,j); j++)
        {
            sum+= x/pow(5,j);
        }
        
        cout<<sum<<endl;
    }
    
    return 0;
}