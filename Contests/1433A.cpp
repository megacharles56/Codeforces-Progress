#include <bits/stdc++.h>
#define mp make_pair
#define io_ ios_base::sync_with_stdio(0);cin.tie(0);
#define lli long long int

using namespace std;

int main(){
    int t; cin >> t;
    string x;
    getline(cin, x);
    while(t--){
        getline(cin, x);
        int ans=10*(x[0] - '0' - 1);
        for(int i=x.size();i>0;i--) ans+=i;
        cout << ans << "\n";
    }
}