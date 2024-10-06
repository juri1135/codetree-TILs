#include <iostream>
using namespace std;

int main() {
   int x,y;
   cin>>x>>y;
   int ans;
   for(int i=1; i<x; i++){
    if(y%i==0 && x%i==0){
        ans=i;
    }
   }
   cout<<ans;
}