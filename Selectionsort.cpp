#include <iostream>
#include<vector>
using namespace std;?
void getMinIndex(vector<int>&A, int n){
    int i, j, ans;
    for(int i=0;i<n; i++){
        ans=i;
        for(j=i+1;j<n;j++){
            if(A[j]<A[ans]){
                ans=j;}}
                swap(A[i], A[ans]);
        
    }
}
int main() {
    int n,e;
    cin>>n;
    vector<int>A;
    for(int i=0;i<n;i++){
        cin>>e;
        A.push_back(e);
       
    }
    getMinIndex(A, n);
   // print(A, n);
      for(int i=0; i<A.size();i++) {
        cout<<A[i];
        cout<<"\t";
    }
    
    return 0;
    
    }
