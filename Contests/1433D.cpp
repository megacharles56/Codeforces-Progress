#include <bits/stdc++.h>
#define mp make_pair
#define io_ ios_base::sync_with_stdio(0);cin.tie(0);
#define lli long long int

using namespace std;
int n, i, j;
vector<int> gangs(5007);
vector<int> roads[5007];

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        for(i=0;i<n;i++) cin >> gangs[i];
        for(i=1;i<n;i++){
            if(gangs[0]!=gangs[i]){
                j=i;
                roads[0].push_back(i+1);
            }
        }
        if(!roads[0].empty()){
            cout << "YES" << "\n";
            for(i=1;i<n;i++){
                if(gangs[i]==gangs[0]){
                    roads[j].push_back(i+1);
                }
            }
            for(i=0;i<n;i++){
                if(!roads[i].empty()){
                    for(int town: roads[i]){
                        cout << i+1 << " " << town << "\n";
                    }
                }
            }
        }else cout << "NO" << "\n";
        gangs.clear();
        roads->clear();
    }
}