#include <iostream>
using namespace std;

int func(int x, int y){
    int ans=0;
    for(int i=x; i<=y; i++){
        if(i%3==0){ans++; }
        else{
            if(i/1000000==3 || i/1000000==6 || i/1000000==9) {ans++; }
            else if(i/100000==3 || i/100000==6 || i/100000==9) {ans++; }
            else if(i/10000==3 || i/10000==6 || i/10000==9) {ans++; }
            else if(i/1000==3 || i/1000==6 || i/1000==9) {ans++; }
            else if(i/100==3 || i/100==6 || i/100==9) {ans++; }
            else if(i/10==3 || i/10==6 || i/10==9) {ans++; }
            else if(i%10==3 || i%10==6 || i%10==9) {ans++; }
        }
    }
    return ans;
}

int main() {
   int a,b;
   cin>>a>>b;
   cout<<func(a,b);
    return 0;
}