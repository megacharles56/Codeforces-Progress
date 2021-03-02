#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k; cin >> n >> k;
    vector<int> planks(n);
    vector<int> ans(n-k+1);
    multiset<int, greater<int>> map;
    for(int i=0;i<n;i++){
        cin >> planks[i];
    }
    for(int i=0;i<k;i++){
        map.insert(planks[i]);
    }
    ans[0]=*(map.begin());
    for(int i=0, j=k;j<n;i++,j++){
        map.erase(planks[i]);
        map.insert(planks[j]);
        ans[i+1]=*(map.begin());
    }
    for(int i=0;i<n-k+1;i++){
        cout << ans[i] << " ";
    }
    
}