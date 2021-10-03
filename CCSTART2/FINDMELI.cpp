#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,k,x;
	cin>>n>>k;
	
	while(n--)
	{
	    cin>>x;
	    if(x==k)
	    {
	        cout<<1;
	        exit(0);
	    }
	    
	    
	}
	
	cout<<-1;
	return 0;
}
