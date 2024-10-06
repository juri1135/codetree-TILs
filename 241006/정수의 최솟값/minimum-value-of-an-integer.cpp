#include <iostream>
#include <algorithm>
using namespace std;
int func(int a,int b,int c){
    return min({a,b,c});
}
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    cout<<func(a,b,c);
    return 0;
}