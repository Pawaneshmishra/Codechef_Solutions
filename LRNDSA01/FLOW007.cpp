#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	long long int T,n,rem;
	cin>>T;
	
	while(T--)
	{
	    
	    cin>>n;
	    rem=0;
	    while(n!=0)
	    {
	        rem=rem*10+(n%10);
	        n/=10;
	    }
	    
	    cout<<rem<<"\n";
	}
	return 0;
}
