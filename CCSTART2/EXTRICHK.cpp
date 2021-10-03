#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin>>a>>b>>c;
	
	if(a+b>c && a+c>b && b+c>a)
	{
	    if(a==b && b==c && a==c) cout<<1;
	    else if(a==b || b==c || a==c) cout<<2;
	    else cout<<3;
	}
	
	else
	cout<<-1;
	
	return 0;
}
