#include <bits/stdc++.h>
#define mp make_pair
#define lli long long int

using namespace std;

vector<int> visited(107, 0);
vector<lli> ans;
vector<lli> numbers(107);
int n;

void dfs(lli x, int it){
    ans.push_back(x);
    visited[it]=1;
    for(int i=0;i<n;i++){
        if(visited[i]==0&&i!=it){
            if(numbers[i]==(lli)2*x||(x%3==0&&numbers[i]==x/(lli)3)){
                dfs(numbers[i], i);
            }
        }
    }
    visited[it]=0;
}
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> numbers[i];
    }

    for(int i=0;i<n;i++){
        dfs(numbers[i], i);
        if(ans.size()==n){
            break;
        }else ans.clear();
    }
    for(int i=0;i<n;i++){
        cout << (lli)ans[i] << " ";
    }
}