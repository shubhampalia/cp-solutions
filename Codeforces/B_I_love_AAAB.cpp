#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define fo(i,n) for(int i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define ll unsigned long long
#define LD long double
#define pb push_back
#define sortall(x) sort(all(x))
#define deb(x) cout<<#x<<" = "<<x<<endl
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"


void print(vi &nums);
void print(vvi &nums);
vi cinvi(int n);

bool solve() {
    string s; cin>>s;
    int n=s.size();
    if(s[0] != 'A') return 0;
    if(s[n-1] != 'B') return 0;
    for(int i=1; i<n; i++) {
        if(s[i] == 'B' && s[i-1] == 'B') return 0;
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


void print(vi &nums){
	fo(i,nums.size())cout<<nums[i]<<" ";
	cout<<"\n";
}

void print(vvi &nums) {
	fo(i,nums.size()) {
		fo(j,nums[0].size()) {
			cout << nums[i][j] << " ";
		}
		cout << "\n";
	}
}

vi cinvi(int n){
	vi nums;
	fo(i,n){
		int x; cin>>x;
		nums.pb(x);
	}
	return nums;
}