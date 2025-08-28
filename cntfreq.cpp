#include<iostream>
#include<vector>
#include<sstream>
#include<unordered_map>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    if(s.front()=='{' && s.back()=='}'){
        s = s.substr(1, s.size()-2);
    }
    stringstream ss(s);
    string temp;
    vector<int>arr;
    while(getline(ss,temp,',')){
        int num = stoi(temp);
        arr.push_back(num);
    }
    unordered_map<int,int>mp;
    for(auto it: arr){
        mp[it]++;
    }
    for(auto it: mp){
        cout<< it.first <<" "<< it.second<<endl;
    }
    return 0;
}