#include <iostream>
using namespace std;

int main() {
    int x;
    cout<<"enter the value of x ";
    cin>>x;

   
    for (int i = 0 ; i<x ; i++){
        for(int j = x; j>=i+1; j--){
            cout<<"*";
            
        }
        cout<<"\n";
       
    }
     cout<<endl ;
    
}