#include <iostream>
using namespace std;
#define o cout
#define i cin
int main() {
    long long n;
    cin>>n;
    o<<n<<" ";
    while(n>1){
        if(n%2==0){
            n=n/2;
            o<<n<<" ";
        }
        else{
            n=(n*3)+1;
            o<<n<<" ";
        }
        
    }
    
    return 0;
}
