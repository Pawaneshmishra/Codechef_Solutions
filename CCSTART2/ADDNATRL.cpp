#include <iostream>
using namespace std;

int main() {
	// your code goes here
    long long int n,sum=0;
    cin>>n;
    
    for(long long int i=1 ; i<=n ;i++) sum+=i;
    
    cout<<sum;
	return 0;
}
