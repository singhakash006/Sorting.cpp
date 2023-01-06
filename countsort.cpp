// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void countsort(int *arr, int n){
    int k=arr[0];
    for(int i=0;i<n;i++){
        k=max(arr[i],k);
    }cout<<k<<endl;
    
    int count[100]={0};
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=1;i<=k;i++){
        count[i]+=count[i-1];
    }
    int output[n];
    for(int i=n-1;i>=0;i--){
        output[--count[arr[i]]]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }
}
int main(){
    int arr[7]={1,2,5,4,1,3,2};
   countsort(arr,7);
   for(int i=0;i<7;i++)
    cout<<arr[i]<<"";


    return 0;
}
