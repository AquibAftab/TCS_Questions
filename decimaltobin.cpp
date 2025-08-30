#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    int place=1;

    while(n!=0){
        int bit = n&1;
        ans+= bit*place;
        n=n>>1;
        place*=10;
    }
    cout<< ans;

}