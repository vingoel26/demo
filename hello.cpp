#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

 int n;
    cin>>n;
    int r=0;
    int d=0;
   
    int a[n];
    for(int i=0;i<n;i++){
       
        cin>>a[n];
        
    }
        
        
       for(int i=0;i<n;i++){
            
            
            if(a[n]%2==0){
                
                r++;
            }
            else{
                d++;
            }
        }
        
        if(r>d){
            cout<<"READY FOR BATTLE"<<endl;
        }
        else{
            cout<<"NOT READY"<<endl;
        }
    }