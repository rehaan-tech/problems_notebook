
#include<bits/stdc++.h>
using namespace std;
    int main(){
        int n,s=0,vs=0;
        cin>>n;
        vector<int> v(n);
       
        for(int i=0;i<n-1;i++){
        cin>>v[i];
        vs+=v[i];
        }
        for(int j = 1 ; j<=n ; j++ ){
        s+=j;
        }

        cout<<s-vs<<"\n";



    }
