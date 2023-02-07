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
#define deb(x) cout<<#x<<" = "<<x<<"\n"
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"


void print(vi &nums);
void print(vvi &nums);
vi cinvi(int n);

void findPermutations(vi &a, int n) {
    fo(i,n)
    {
        for(int x=n-i;x<n;x++) {
            cout<<a[x]<<" ";
        }
            
        for(int j=0;j<n-i;j++) {
            cout<<a[j]<<" ";
        }
            
        cout<<"\n";
    }
    return;
}
void solve() {
    int n; cin >> n;

    if(n <= 3) {
        cout<<3<<" "<<2<<" "<<1<<"\n";
        cout<<3<<" "<<1<<" "<<2<<"\n";
        cout<<1<<" "<<3<<" "<<2<<"\n";
        return;
    }

    vi a;
    for(int i=n;i>=1;i--) a.pb(i);

    findPermutations(a, n);
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