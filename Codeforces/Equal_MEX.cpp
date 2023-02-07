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

bool check(int n){
    
    unordered_map<int, int> cnt;
    fo(i,2*n) {
        int x; cin>>x;
        cnt[x]++;
    }
    int mex=0;
    for(mex=0; mex<n; mex++) {
        if(cnt[mex] == 0) return 1;
        if(cnt[mex] == 1) return 0;
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t; cin>>t;
	while(t--){
        int n; cin>>n;
		if(check(n)) yes;
        else no;
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