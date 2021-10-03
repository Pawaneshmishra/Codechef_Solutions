#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int Q,n,count,res;
	char s,t;
	cin>>Q;
	
	while(Q--)
	{
	    cin>>n;
	    count=0;
	    res=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>s;
	        if (s=='1') 
	        count++;
	        
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>t;
	        if(t=='1') 
	        res++;
	        
	    }
	    
           if (count<res && count<(n/2)) cout<<count<<endl;
           else if(res<(n/2)) cout<<res<<endl;
           else cout<<n/2<<endl;
	    
	}
}
