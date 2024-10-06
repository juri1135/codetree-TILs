#include <iostream>
using namespace std;
void func(int n,int m){
    for(int i=0; i<n; i++){
        for( int k=0; k<m; k++){
            printf("1");
        }
        printf("\n");
    }
}
int main() {
    int n,m;
    cin>>n>>m;
    func(n,m);
    return 0;
}