#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int T;
	string s;
	cin>>T;
	
	while(T--)
	{
	    
	    int left[26]={0};
	    int right[26]={0};
	    cin>>s;
	    int len=s.length();
	    
	    for(int i=0;i<len/2;i++)
	    {
	        int index=s[i]-'a';
	        left[index]++;
	    }
	    
	    for(int i = ((len+1)/2) ;i<len;i++)
	    {
	        int index=s[i]-'a';
	        right[index]++;
	    }
	    
	    int j=1;
	    for(int i=0;i<26;i++)
	    {
	        if(left[i]!=right[i])
	        {
	            j=0;
	        }
	      
     	}
     	
     	if(j==0) cout<<"NO"<<"\n";
     	else cout<<"YES"<<"\n";
	
	
}
return 0; 
}