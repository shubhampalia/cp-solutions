#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long
#define vi vector<int>
#define vvi vector<vi>
#define vll vector<ll>
#define fo(i,n) for(int i=0; i<n; i++)
#define all(x) x.begin(), x.end()

#define pb push_back
#define sortall(x) sort(all(x))
#define deb(x) cout<<#x<<" = "<<x<<endl

int N;
vi A, vis;
map<int, vi> adj;
int res = 0;
int C = 0;

void dfs(int u, int good) {
    good += A[u-1];
    if(good > C) return;

    if(adj[u].size() == 1 && !vis[u] && good <= C) {
        res++;
        return;
    }
    vis[u] = 1;
    for(int v: adj[u]) {
        if(!vis[v]) {
            dfs(v, good);
        }
    }
}
int main(){
	cin>>N;
    A.assign(N, 0);
    vis.assign(N+1, 0);
    for(int i=0; i<N; i++) cin>>A[i];
    for(int i=0; i<N-1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    for(auto it: adj) {
        cout << it.first << " - > ";
        for(int x: it.second) cout << x << " , ";
        cout << "\n";
    }
    cin >> C;
    dfs(1, 0);
    cout << res;
}


