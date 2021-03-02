#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int ans=1, currentsum=0, minsum;
    vector<int> planks(n);
    for(int i=0;i<n;i++){
        cin >> planks[i];
    }
    for(int i=0;i<k;i++){
        currentsum+=planks[i];
    }
    minsum=currentsum;
    for(int i=0, j=k;j<n;i++,j++){
        currentsum-=planks[i];
        currentsum+=planks[j];
        if(currentsum<minsum){
            minsum=currentsum;
            ans=i+2;
        }
    }
    cout << ans;
}