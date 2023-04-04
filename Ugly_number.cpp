#include<bits/stdc++.h>
using namespace std;
#define ll int long long


//UGLY NUMBERS ARE 1,2,3,4,5,6,8,9,10,12,15 

//SOLVING BY DYNAMIC PROGRAMMING

void solve(int n){
    
    vector<int>v = {1};
    
    int i2=0,i3=0,i5=0;
    
     for(int i=1;i<n;i++){
         
         int next_ugly_num = min({v[i2]*2, v[i3]*3 ,v[i5]*5}); // first it will pick 2....
         v.push_back(next_ugly_num);
    
       if(next_ugly_num == v[i2]*2)  
            i2++;
            
        if(next_ugly_num == v[i3]*3)
            i3++;
            
         if(next_ugly_num == v[i5]*5)        
            i5++;
         
     }
    
    cout << v.back() << endl; //or we can use v.back();
}



int main(){
    
 int n;
 cin >> n;
 
 solve(n);

 return 0;
}