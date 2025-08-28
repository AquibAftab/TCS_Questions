#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
    string s;
     getline(cin,s);
    if(s.front()=='{' && s.back()=='}'){
        s= s.substr(1, s.size()-2);
    }
    stringstream ss(s);
    string temp;
    vector<int>nums;
    while(getline(ss, temp, ',')){
        int num = stoi(temp);
        nums.push_back(num);
    }
    double sum=0;
    sum = accumulate(nums.begin(), nums.end(),0);
    int n = nums.size();
    double ans= (1.0 * sum)/n;
    cout<<ans<<endl;
    return 0;

}