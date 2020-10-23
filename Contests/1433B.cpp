#include <bits/stdc++.h>
#define mp make_pair
#define io_ ios_base::sync_with_stdio(0);cin.tie(0);
#define lli long long int

using namespace std;
int n, first, last;
vector<int> bookshelf(50);

int main(){
    int t; cin >> t;
    int i;
    while(t--){
        cin >> n;
        for(i=0;i<n;i++) cin >> bookshelf[i];
        for(i=0;i<n;i++){
            if(bookshelf[i]==1) {
                first=i;
                break;
            }
        }
        for(i=first;i<n;i++){
            if(bookshelf[i]==1) last=i;
        }
        int ans=0;
        for(i=first;i<last;i++){
            if(bookshelf[i]==0) ans++;
        }
        cout << ans << "\n";
    }
}