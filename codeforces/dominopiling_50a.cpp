#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int count = 0;
    int reset = 0;
    for (int i = 0; i < m*n; i++) {
       reset++;
       if(reset>1){
           count++;
           reset = 0;
       }
    }
    cout<<count;
    return 0;
}
