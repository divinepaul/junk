#include <bits/stdc++.h>
using namespace std;

int main (){
    string input; 
    cin>>input;
    vector<char> nums;
    for (int i = 0; i < input.length(); i++) {
        if(input[i] != '+'){
            nums.push_back(input[i]);
        }
    }
    sort(nums.begin(),nums.end());
    string out;
    for (char i: nums){
        out += i;
        out += '+';
    }
    out.pop_back();
    cout<<out;
    return 0;
}


