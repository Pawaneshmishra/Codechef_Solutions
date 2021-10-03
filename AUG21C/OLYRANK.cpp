#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,a,b,c,A,B,C;
	cin>>T;
	
	while(T--)
	{
	   cin>>a>>b>>c>>A>>B>>C;
	   
	   if((a+b+c)>(A+B+C))
	   cout<<1<<endl;
	   
	   else
	   cout<<2<<endl;
	}
	return 0;
}
