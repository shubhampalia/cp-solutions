#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define fo(i,n) for(int i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define ll unsigned long long
#define pb push_back
#define sortall(x) sort(all(x))
#define deb(x) cout<<#x<<" = "<<x<<endl
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"


void print(vi nums);
vi cinvi(int n);

void solve(){
    int n; cin>>n;
    int cnt[5] = {0};
    
    fo(i,n) {
        int x; cin>>x;
        cnt[x]++;
    }

    int res = cnt[4];

    if(cnt[3] < cnt[1]) {
        cnt[1] -= cnt[3];
        res += cnt[3];
        cnt[3] = 0;
    }
    
    else {
        res += cnt[3];
        cnt[1] = 0;
        cnt[3] = 0;
    }
    // cout<<"here"<<res<<cnt[3]<<"cnt1 = "<<cnt[1];
    res += cnt[2]/2;
    // cout<<res;
    if(cnt[2] % 2 != 0) cnt[2] = 1;
    else cnt[2] = 0;
    // cout<<"cnt2 = "<<cnt[2]<<" "<<res;
    // cout<<"here"<<cnt[1];
    // cout<<res;
    if(cnt[1] >= 2 && cnt[2] == 1) {
        res++;
        cnt[1] -=2;
    }
    else if (cnt[1] < 2 && cnt[2] == 1) {
        res++;
        cnt[2] = 0;
        cnt[1] = 0;
    }
    
    else {
        res += ceil(cnt[1]/4.0);
        cnt[1] = 0;
    }

    if(cnt[1] != 0) {
        res += ceil(cnt[1]/4.0);
    }

    cout<<res<<"\n";
    
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// int t; cin>>t;
	// while(t--){
	// 	solve();
	// }
    solve();
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