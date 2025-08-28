#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int k;
    cin>>k;
    if(s.front()=='{' && s.back()=='}'){
        s= s.substr(1, s.size()-2);
    }
    stringstream ss(s);
    string temp;
    vector<int>v;

    while(getline(ss, temp, ',')){
        int num = stoi(temp);
        v.push_back(num);
    }
    vector<int>num;
    int n = v.size();

    for(int i=k;i<n;i++){
        num.push_back(v[i]);
    }
    for(int i=0;i<k;i++){
        num.push_back(v[i]);
    }
    for(auto it: num){
        cout<< it<<" ";
    }
    cout<<endl;
    return 0;
    
}