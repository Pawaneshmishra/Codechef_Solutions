#include<bits/stdc++.h>
using namespace std;
int main() {

 
    int T;
    cin >> T;
    while(T--) {
    int n,m,q;
    
    
    cin>>n>>m>>q;
    
    
    unordered_set<int> A;
    int a = 1;
   
    while(q--){
     
     
     char ch;
        int i;
        
        
        
        cin>>ch>>i;
        if(a == 1)
        
        {
            if(ch == '-')
            
            {

if(A.find(i) != A.end()){
        A.erase(i);
                }
                else{
                    a = 0;
                } }
           
           
           
            else{
                
                
                
                if((int)A.size() == m){
                    a = 0;
                }
                else{
                    A.insert(i);
                }}}
    }
    
    
    
    if(a == 0){
        cout<<"Inconsistent\n";
    }
    
    
    else{
        cout<<"Consistent\n";
    }
    
        
        
        
    }
 
	return 0;
}
