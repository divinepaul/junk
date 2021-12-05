#include <iostream>
using namespace std;

void logArray(int array[],int n){
    for (int i = 0; i < n; i++){
        cout<<"| "<<array[i] <<" "; 
    }
    cout<<endl;
}


int main() {

    int len;
    cout << "Enter Number of elements : ";
    cin >> len;
    int *arr = new int[len];

    cout << "Enter "<< len <<" elements : " << endl;
    for (int i = 0; i < len; i++){
        cin>>arr[i]; 
    } 
    cout << "Elements : "<<endl;
    logArray(arr,len);
    cout<<endl;
    
    for (int i = 0; i < len; i++) {
        int min_loc  = -1;
        int min = arr[i];
        for (int j = i; j < len; j++) {
            cout<<" i: "<<i<<" j: "<<i<<endl;
            if(arr[j] < min){
                min_loc = j;
                min = arr[j];
            }
        }
        if(min_loc != -1) {
            int temp = arr[i];
            arr[i] = arr[min_loc];
            arr[min_loc] = temp;
        }

    }    
    cout << "Elements : "<<endl;
    logArray(arr,len);
    cout<<endl;
}
