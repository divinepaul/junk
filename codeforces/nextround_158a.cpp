#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int *scores = new int[n];
    int minScore = 0;
    for(int i=0;i<n;i++){
        int score;
        cin>>score;
        scores[i] = score;
        if((i+1)==k){
           minScore = score;
        }
    }
    int students = 0; 
    if(scores[0]<0){
        cout<<0;
    } else {
        for (int i = 0; i < n; i++) {
            if(scores[i]>=minScore && scores[i]>0){
                students++;
            }
        }
        cout<<students;
    }
}
