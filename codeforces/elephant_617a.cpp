#include <bits/stdc++.h>
using namespace std;

int main (int argc, char *argv[])
{
    long distance,covered=0,steps=0;
    cin>>distance;
    while(covered<distance){
        if(distance >= 5 && covered <= 5){
            covered += 5;
        } else if(covered<=4) {
            covered += 4;
        } else if(covered<= 3) {
            covered += 3;
        } else if(covered<= 2) {
            covered += 2;
        } else {
            covered++;
        }
        steps++;
    }
    cout<<steps;
    return 0;
}

