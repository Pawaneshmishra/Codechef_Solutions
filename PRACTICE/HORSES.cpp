#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int T,N;
	cin>>T;
	
	while(T--)
	{
	    cin>>N;
	    long long int a[N];
	    
	    for(long long int i=0; i<N ;i++)    cin>>a[i];
	    
	    sort(a,a+N);
	    
	    long long int diff = a[1]-a[0];
	    
	    for(long long int i=0; i<N-1; i++)
	    {
	        if((a[i+1]-a[i]) < diff)
	        diff=a[i+1]-a[i];
        }
        
        cout<<diff<<endl;
	    
	}
	
	return 0;
}
