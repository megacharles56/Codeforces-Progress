#include <bits/stdc++.h>
#define mp make_pair
#define io_ ios_base::sync_with_stdio(0);cin.tie(0);
#define lli long long int

using namespace std;
int n, maxiumum=0;
int i;
bool condition=true;
vector<int> piranhas(300007);

int main(){
    int t; cin >> t;
    while(t--){
        maxiumum=0;
        cin >> n;
        for(i=0;i<n;i++) cin >> piranhas[i];
        
        for(i=0;i<n;i++){
            if(i!=n-1&&piranhas[i]!=piranhas[i+1]) condition=false;
            if(piranhas[i]>maxiumum) maxiumum=piranhas[i];
        }
        
        if(!condition){
            for(i=0;i<n;i++){
                if(piranhas[i]==maxiumum){
                    condition=false;
                    if((i>0&&piranhas[i-1]<maxiumum)||(i<n-1&&piranhas[i+1]<maxiumum)){
                        condition=true;
                    }
                    if(condition){
                        cout << i+1 << "\n";
                        break;
                    }
                }
            }
        }else cout << -1 << "\n";
    }
}