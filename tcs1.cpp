#include<iostream>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    if(s.front()=='[' && s.back()==']'){
        s = s.substr(1, s.size()-2);
    }
    stringstream ss(s);
    string str;
    vector<int>v;
    while(getline(ss, str, ','))
    {   
        int num = stoi(str);
        v.push_back(num);

    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
  
    int n = v.size();
    if(n==1){ cout<<-1<<"\n";
    }
    else if(n==2) cout<< v[0]<<" "<<v[1]<<"\n";
    else 
    cout<< v[1]<< " "<<v[n-2]<<endl;
    return 0;
}