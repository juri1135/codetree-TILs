#include <iostream>
using namespace std;

int main() {
   int n;
   cin>>n;
   if(n%2==0 && (n/10 + n%10)%5==0){
    cout<<"Yes";
   }
   else{
    cout<<"No";
   }
    return 0;
}