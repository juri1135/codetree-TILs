#include <iostream>
using namespace std;

int main() {
    int x,y;
    cin>>x>>y;
    int ans=x*y;
    for(int i=x; i<=x*y; i++){
        if(i%x==0 && i%y==0){
            ans=i;
            break;
        }
    }
    cout<<ans;
}