#include<iostream>
#include<sstream>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    int pow=1;
    long long ans=0;
    int n = s.size();
    for(int i=n-1;i>=0;i--){
        if(s[i]=='1'){
            ans += pow;
        }
        pow*=2;
    }
    cout<<ans;
}