#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int n,s1=0,s2=0;
    cin>>n;
    
    
    for(long long int i=1;i<=2*n;i++)
    {
        if(i%2==0) s2+=i;
        else s1+=i;
    }
    cout<<s1<<" "<<s2;

	return 0;
}
