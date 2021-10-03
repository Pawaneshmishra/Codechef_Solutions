#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N,T,sum,b;
    string country,a;
    cin>>N;
    
    while(N--)
    {
        cin>>T;
        cin>>country;
        sum=0;
        
        while(T--)
        {
           cin>>a;
           
           if(a=="CONTEST_WON")
           {
               cin>>b;
               
               if(b>20)
               {
                   sum+=300;
               }
               
               else
               {
                   sum+=320-b;
               }
           }
           
           else if(a=="TOP_CONTRIBUTOR")
           {
               sum+=300;
           }
           
           else if(a=="BUG_FOUND")
           {
               cin>>b;
               sum+=b;    
           }
           
           else
           {
               sum+=50;
           }
        }
        
        if(country=="INDIAN")
        {
            cout<<sum/200<<endl;
        }
        
        else
        {
            cout<<sum/400<<endl;
        }
    }
    
    
    return 0;
}