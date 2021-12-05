#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int m,n;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
           int item;
           cin>>item;
           if(item){
                m = i+1;
                n = j+1;
           }
        }
    }
    cout<<(abs(3-m)+abs(3-n));
    return 0;
}
