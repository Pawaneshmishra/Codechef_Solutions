#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,max;
	cin>>n;
	
	long long int a[n];
	
	for(long long int i=0; i<n ;i++)
	cin>>a[i];
	
	sort(a,a+n);
	
	max=a[0]*n;
	
	for(long long int i=1; i<n; i++)
	{
	    if(a[i]*(n-i) > max) max = a[i]*(n-i);
	}
	
	cout<<max;
	

	return 0;
}
