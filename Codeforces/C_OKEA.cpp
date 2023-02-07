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
    int n , k ; cin >> n >> k;
	int tot = n*k;
	int oddsNeeded = ((n+1)/2)*k;
	int totOdds = ((n*k) + 1)/2;
	if( oddsNeeded != totOdds ) {
		no;
		return;
	}
	yes;
	int currEven = 2, currOdd = 1;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= k; j++) {
			if(i%2 != 0) {
				cout << currOdd << " ";
				currOdd += 2;
			}

			else {
				cout << currEven << " " ;
				currEven += 2;
			}

		}

		cout << "\n";
	}
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