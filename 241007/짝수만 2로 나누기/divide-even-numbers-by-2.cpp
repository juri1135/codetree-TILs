#include <iostream>
using namespace std;
int N;
void func(int arr[]){
    for(int i=0; i<N; i++){
        if(arr[i]%2==0) arr[i]/=2;
    }
}
int main() {
    int arr[100];
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    func(arr);
    for(int i=0; i<N; i++){
        cout<<arr[i]<<" ";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}