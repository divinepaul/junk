#include <bits/stdc++.h>
using namespace std;

int main (int argc, char *argv[]){
    int k,n,w;
    cin>>k>>n>>w;
    int price = 0;
    for (int i = 1; i <= w; i++) {
        price += i*k;
    }
    if(n<price){
        cout<<abs(n-price);
    } else {
        cout<<0;
    }
    return 0;
}
