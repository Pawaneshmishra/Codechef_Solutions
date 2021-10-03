#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int l,r;
	
	cin>>l>>r;
	
	if(l%2==0) l+=1;
	
	for(int i=l;i<=r;i=i+2)
	{
	    cout<<i<<" ";
	}
	return 0;
}
