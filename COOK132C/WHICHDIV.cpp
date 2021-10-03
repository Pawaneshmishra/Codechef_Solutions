#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,N;
	cin>>T;
	
	while(T--)
	{
	    cin>>N;
	    
	    if(N<1600)
	    cout<<3<<endl;
	    
	    else if (N<2000)
	    cout<<2<<endl;
	    
	    else
	    cout<<1<<endl;
	}
	return 0;
}
