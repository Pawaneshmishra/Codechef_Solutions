#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int a,b,c;
	cin>>a>>b>>c;
	
	if((a<=b && a>=c) || (a>=b && a<=c)) cout<<a;
	else if ((b<=a && b>=c) || (b>=a && b<=c)) cout<<b;
	else cout<<c;
	
	return 0;
}
