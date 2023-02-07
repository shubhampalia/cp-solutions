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

int solve(){
    int n,m,r,c; cin>>n>>m>>r>>c;
    char a[n][m];
    int f=0;
    fo(i,n) fo(j,m) {cin>>a[i][j]; if(a[i][j] == 'B') {f=1;}}
    
    if(f==0) return -1;
    
    if(a[r-1][c-1]=='B') return 0;

    fo(i,n) if(a[i][c-1] == 'B') return 1;
    fo(j,m) if(a[r-1][j] == 'B') return 1;
    
    return 2;
    // fo(i,n) {
    //     fo(j,m) cout<<a[i][j];
    //     cout<<"\n";
    // }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t; cin>>t;
	while(t--){
		cout<<solve()<<"\n";
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