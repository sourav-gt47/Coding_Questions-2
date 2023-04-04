#include<bits/stdc++.h>
using namespace std;
#define ll int long long


void solve(int arr[],int n){
    
      int total = (n*(n+1)/2);
      int sum=0;
      for(int i=0;i<n;i++){
          
          sum += arr[i];
          
      }
    cout << (total - sum) << endl; //subtracting the total by the sum of the array.
    
}



int main(){
    
    int arr[] = {1, 2, 7, 6, 3, 4, 8};
    
    solve(arr,8);
    
    return 0;
}