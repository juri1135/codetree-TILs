#include <iostream>
using namespace std;
int func(int n){
    int sum=0;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    return sum/10;
}
int main() {
    int n;
    cin>>n;
    cout<<func(n);
    return 0;
}