#include <iostream>
using namespace std;
int func(int a,int b){
    int ans=0;
    for(int i=a; i<=b; i++){
        int check=0;
        for(int k=2; k<a; k++){
            if(i%k==0) check=1;
        }
        if(check==0)ans+=i;
    }
    return ans;
}
int main() {
    int a,b;
    cin>>a>>b;
    cout<<func(a,b);
    // 여기에 코드를 작성해주세요.
    return 0;
}