#include<iostream>
#include<sstream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    if(s.front()=='[' && s.back()== ']'){
        s= s.substr(1, s.size()-2);
    }
    stringstream ss(s);
    vector<int>v;
    string temp;
    while(getline(ss,temp,',')){
        int num = stoi(temp);
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    int n= v.size();
    if(n%2!=0){
        cout<<v[n/2];
    }
    else{
        double ans=0.0;
        ans = (double)((v[n/2] + v[n/2 -1]))/2;
        cout<<ans<<endl;
    }
    return 0;
}