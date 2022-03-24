#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,count = 0;
    char str[50];
    cin>>n;
    cin>>str;
    char k = str[0];
    for (int i = 1; i < strlen(str); i++) {
        if(k==str[i]){
            count++;
        } else {
            k = str[i];
        }
    }
    cout<<count;
    return 0;
}
