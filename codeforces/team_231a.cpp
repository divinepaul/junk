#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int solved=0;
    for(int i=0;i<n;i++){
        int solvable=0;;
        for(int j=0;j<3;j++){
            int solve;
            cin>>solve;
            if(solve){
                solvable++;
            }
        }
        if(solvable>1)
            solved++;
    }
    cout<<solved;
    return 0;
}
