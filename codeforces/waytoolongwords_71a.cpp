#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string word;
        cin>>word;
        int len = word.length();
        if(len<=10){
            cout<<word<<"\n";
            continue;
        }
        cout<<word[0]<<len-2<<word[len-1]<<"\n";
    }
}
