#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    int n;
    cin>>n;
    string str[n];
    for(int i=0; i<n; i++){
        cin>>str[i];
    }
    sort(str,str+n);
     for(int i=0; i<n; i++){
        cout<<str[i]<<'\n';
    }
    return 0;
}