#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define fo(i,n) for(int i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define ll unsigned long long
#define pb push_back
#define sortall(x) sort(all(x))
#define deb(x) cout<<#x<<" = "<<x<<endl


void print(vi nums);
vi cinvi(int n);

void solve(){
    int n,m,x,y,r,c; cin>>n>>m>>x>>y>>r>>c;
    int res=0, dx=1, dy=1;
    while(x!=r && y!=c && x>0 && y>0) {
        
        if(x>=n) dx=-1;
        if(y>=m) dy=-1;
        if(x<=1) dx=1;
        if(y<=1) dy=1;
        x+=dx;
        y+=dy;
        res++;
    }
    cout<<res<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t; cin>>t;
	while(t--){
		solve();
	}
}


void print(vi nums){
	fo(i,nums.size())cout<<nums[i]<<" ";
	cout<<endl;
}

vi cinvi(int n){
	vi nums;
	fo(i,n){
		int x; cin>>x;
		nums.pb(x);
	}
	return nums;
}