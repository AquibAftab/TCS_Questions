#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int pow=1, n= s.size();
    long long ans=0;

    for(int i= n-1;i>=0;i--){
        if(s[i]=='1'){
            ans+=pow;
        }
        pow*=8;
    }
    cout<<ans;
}