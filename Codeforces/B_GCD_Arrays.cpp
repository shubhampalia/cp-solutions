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
    int l,r,k; cin>>l>>r>>k;
    if(l==r) {
        if(l==1) return 0;
        else return 1;
    }
    int num=((r+1)/2) - (l/2);
    if(k>=num) return 1;
    else return 0;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int res = solve();
        if(res) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
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