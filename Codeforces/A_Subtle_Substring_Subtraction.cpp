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

void solve() {
    string s; cin>>s;
    int n=s.size();
    if(n==1) {
        cout<<"Bob"<<" "<<s[0]-96<<"\n";
        return;
    }
    int cnt=0;
    for(char c: s) {
        cnt += c-96;
    }
    int bob = 0;
    if(n%2!=0) {
        int t1 = s[0]-96;

        int t2 = s[n-1]-96;

        // cout<<"teeesss =" <<t1<<" "<<t2<<" ";
        bob = min(t1,t2);
    }
    cout<<"Alice"<<" "<<cnt-2*bob<<"\n";
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t; cin>>t;
	while(t--){
		solve();
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