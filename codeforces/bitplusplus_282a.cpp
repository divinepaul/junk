#include<iostream>
using namespace std;

int main(){
    int x=0,n;
    cin>>n;
    for(int i=0;i<n;i++){
        string op;
        cin>>op;
        if(op.find("++") != std::string::npos){
         x++;
        }
        if(op.find("--") != std::string::npos){
            x--;
        }
    }
    cout<<x;
    return 0;
}
