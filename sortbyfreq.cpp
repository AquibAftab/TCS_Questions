#include<iostream>
#include<sstream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
unordered_map<int, int>mp;

static  bool comp(int a, int b){
    if(mp[a]==mp[b]){
        return a<b;
    }
    return mp[a]> mp[b];
}
int main(){
    string s;
    getline(cin, s);
    if(s.front()=='{' && s.back()=='}'){
        s = s.substr(1, s.size()-2);
    }
    stringstream ss(s);
    string temp;
    vector<int>v;

    while(getline(ss, temp, ',')){
        int num = stoi(temp);
        v.push_back(num);
    }
   
    for(auto it: v){
        mp[it]++;
    }
    sort(v.begin(), v.end(), comp);
    for(auto it: v){
        cout<<it<<" ";
    }
    
    
    
}