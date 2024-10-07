#include <iostream>
using namespace std;
void func(int n){
    int num=1;
    for(int i=1; i<=n; i++){
        for(int k=1; k<=n; k++){
            cout<<num<<" ";
            num++;
            if(num==10) num=1;
        }
        cout<<'\n';
    }
}
int main() {
    int n;
    cin>>n;
    func(n);
    // 여기에 코드를 작성해주세요.
    return 0;
}