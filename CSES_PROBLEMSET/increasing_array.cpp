#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,count=0;
    cin >>n;
    long long arr[n];
    for(long long i=0;i<n;i++){
     cin >> arr[i];
    }
    for(long long j=1;j<n;j++){
        if(arr[j]>=arr[j-1]){
            continue;
        }
        else{
            while(arr[j]<arr[j-1]){
                arr[j]+=1;
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}
