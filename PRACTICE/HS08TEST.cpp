#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int x;
    float y;
    
    cin>>x;
    cin>>y;
    
    if(x%5==0 && y>=x+0.5)
    {
        y=y-x-0.5;
        cout<<fixed<<setprecision(2)<<y;
    }
    
    else
    cout<<fixed<<setprecision(2)<<y;
	return 0;
}