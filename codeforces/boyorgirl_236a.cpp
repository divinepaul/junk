#include <bits/stdc++.h>
using namespace std;

int main (int argc, char *argv[])
{
    string name;
    int count = 0;
    cin>>name;
    map<char, int> m;
    for (int i = 0; i < name.length(); i++) {
       if(m.count(name[i])==0){
        m.insert({name[i],1});
       } else {
        m[name[i]]++;
       }
        
    }
    for (auto const& x : m){
        count++; 
    }
    if(count%2==0)
        cout<<"CHAT WITH HER!";
    else 
        cout<<"IGNORE HIM!";
    
}
