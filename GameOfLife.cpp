#include <bits/stdc++.h>
#define mp make_pair
#define io_ ios_base::sync_with_stdio(0);cin.tie(0);
#define lli long long int

using namespace std;

int main(){
    io_
    lli n, m, t; cin >> n >> m >> t;
    vector<string> matrix(n);
    vector<vector<int>> movements={{0,1},{0,-1},{1,0},{-1,0}};
    getline(cin, matrix[0]);
    for(int i=0;i<n;i++){
        getline(cin, matrix[i]);
    }
    while(t--){
        vector<vector<lli>> visited(n,vector<lli>(m,0));
        queue<pair<pair<lli, lli>, lli>> q;
        int i, j, x, y, l;
        lli p, l=0;
        cin >> x >> y >> p;
        q.push(mp(mp(x-1,y-1), l));
        bool condition=true;
        while(!q.empty()&&condition){
            i=q.front().first.first;
            j=q.front().first.second;
            l=q.front().second+1;
            visited[i][j]=1;
            for(vector<int> movement : movements){
                int row=i+movement[0], col=j+movement[1];
                if(((row>=0&&row<n)&&(col>=0&&col<m))&&visited[row][col]!=1){
                    q.push(mp(mp(row,col), l));
                    if(matrix[row][col]==matrix[i][j]){
                        condition=false;
                    }
                }
            }
            q.pop();
        }
        //calculate state depending on L distance from x y to group
        if(q.empty()){
            cout << matrix[x-1][y-1];
        }else{
            if(p<l)
                cout << matrix[x-1][y-1];
            else{
                if((p-l)%2==0){
                    if(matrix[x-1][y-1]=='0') cout << 1;
                    else cout << 0;
                }else{
                    cout << matrix[x-1][y-1];
                }
            }
        }
        cout << "\n";
    }
}