#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter the value of n: ";
   cin>>n;
    for(int i = 0; i<n; i++){

        for (int j= 0; j<i ; j++){
         cout<<" ";

        }

        for (int k=0 ; k<(2*(n-i)-1); k++){
         cout <<n+i;
        }
         cout<<"\n";
       
    }


    for(int i=n-2 ; i>=0; i--){
      for(int j = 0; j<i ; j++){
         cout<<" ";
      }
      for(int k= 0 ;k<(2*(n-i)-1); k++ ){
         cout<<n+i;
      }
      cout<<"\n";
    }
      return 0;
}