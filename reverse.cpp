#include<iostream>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string ch;
    string str="";

    while(ss >> ch){
        str+= ch;
    }
    vector<int>v;
    for(int i=0;i< s.size();i++){
        if(s[i]==' '){
            v.push_back(i);
        }
    }

    reverse(str.begin(), str.end());

    for(int i=0;i<v.size();i++){
        str.insert(v[i], " ");
    }
    cout<< str;
}