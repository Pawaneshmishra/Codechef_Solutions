#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,a,b,c,d,i;
	cin>>T;
	
	while(T--)
	{
	   cin>>a>>b>>c>>d;
	   i=0;
	   
	   
	   if(a==b && b==c)
	   i++;
	   
	   if(a==b && b==d)
	   i++;
	   
	   if(a==d && d==c)
	   i++;
	   
	   if(d==b && b==c)
	   i++;
	   
	   if(a==b && b==c && c==d)
	   {
	       cout<<0<<endl;
	       
	   }
	   else if(i==1)
	   {
	       cout<<1<<endl;
	       
	   }
	    
	   else 
	   cout<<2<<endl;
	}
	return 0;
}
