#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,j=1;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
	    
	    if(j%2!=0)
	    {
	        cout<<j<<" "<<j+1<<" "<<j+2<<" "<<j+3<<" "<<j+4<<"\n";
	     }
	    
	    else if(j%2==0)
	    {
	        cout<<j+4<<" "<<j+3<<" "<<j+2<<" "<<j+1<<" "<<j<<"\n";
	    }
	    
	    j+=5;
	}
	
	return 0;
}
