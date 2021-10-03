#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,A,B,C,X;
	cin>>T;
	
	while(T--)
	{
	   cin>>A>>B>>C;
	   if(A<B && A<C)
	   {
	       X=A;
	   }
	   
	   else if(B<C)
	   {
	       X=B;
	   }
	   
	   else
	   
	   X=C;
	  
	  cout<<(A+B+C-X)<<endl; 
	   
	}
	return 0;
}
