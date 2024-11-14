#include <iostream>
using namespace std;
int ans=0;
int main() {
    int a,b;
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        int check=0;
        if(i==1) check=1;
        for(int j=2; j<i; j++){
            if(i%j==0) check=1;
        }
        if(check==0) ans+=i;
    }
    cout<<ans;
    return 0;
}