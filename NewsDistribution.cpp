#include <bits/stdc++.h>

#define io_ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
const int N=1000030;
int n, m;
vector<vector<int>> graph(N);
vector<int> visited(N);
vector<int> siz(N);
int color=0;
int findEveryFriend(int node){
    if(visited[node]) return 0;
    visited[node]=color;
    int sum=(node<n?1:0);
    for(int otherNode : graph[node]){
        sum+=findEveryFriend(otherNode);
    }
    return sum;
}

int main(){
    io_
    cin >> n >> m;
    int k, ki;
    for(int i=0;i<m;i++){
        cin >> k;
        for(int j=0;j<k;j++){
            cin >> ki;
            graph[ki-1].push_back(i+n);
            graph[i+n].push_back(ki-1);
        }
    }

    for(int i=0;i<n;i++){
        if(!visited[i]){
            color++;
            siz[color]=findEveryFriend(i);
        }
        cout << siz[visited[i]] << " ";
    }
}
