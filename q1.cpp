#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ,m;
    if(!(cin>>n>>m)) return 0;
    vector<string>g(n);
    for(int i=0;i<n;i++){
        cin>>g[i];
    }
    vector<vector<int>>vis(n, vector<int>(m,0));
    vector<int>comps;
    int dirs[4][2] = {{1,0}, {-1,0}, {0,1},{0,-1}};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j] && g[i][j]=='F'){
                int cnt=0;
                deque<pair<int,int>>dq;
                dq.emplace_back(i,j);
                vis[i][j]=1;
                while(!dq.empty()){
                    auto it= dq.front();
                    dq.pop_back();
                    int r= it.first;
                    int c =  it.second;
                    cnt++;
                    for(auto &d: dirs){
                        int nr = r + d[0], nc = c + d[1];
                        if(nr>=0 && nr<n && nc>=0 && nc<m && !vis[nr][nc] && g[nr][nc]=='F'){
                            vis[nr][nc]=1;
                            dq.emplace_back(nr,nc);
                        }
                    }
                }
                comps.push_back(cnt);

            }
        }
    }
    sort(comps.begin(), comps.end(), greater<int>());
    long long john=0;
    for(size_t k=1;k< comps.size();k+=2) john += comps[k];
    cout<<john<<endl;
    return 0;


}