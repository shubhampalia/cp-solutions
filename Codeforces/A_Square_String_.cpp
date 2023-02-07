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

int solve(){
    string s; cin>>s;
    int n=s.size();
    if(n%2!=0) return 0;
    int k=n/2;
    for(int i=0; i<k; i++) {
        if(s[i] != s[i+k]) return 0;
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t; cin>>t;
	while(t--){
		if(solve()) yes;
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