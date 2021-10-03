#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T,n,cars,k;
	cin>>T;
	
	while(T--)
	{
	    cin>>n;
	    int a[n];
	    
	    for(int i=0; i<n; i++)
	    {
	        cin>>a[i];
	    }
	    
	    cars=1;
	    k=a[0];
	    
	    for(int i=1; i<n; i++)
	    {
	        if(k>=a[i])
	        {
	            cars++;
	            k=a[i];
	        }
	    }
	    
	    cout<<cars<<endl;
	    
	    
	}
	
	return 0;
}
