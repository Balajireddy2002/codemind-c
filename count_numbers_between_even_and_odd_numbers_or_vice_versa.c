#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-2;i++){
        if((arr[i]%2==0 and arr[i+2]&1) or(arr[i]&1 and arr[i+2]%2==0)){
            count++;
        }
    }
    cout<<count;
}