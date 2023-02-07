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
void print ( int a[], int n);
vi cinvi(int n);

void solve() {
    int n; cin >> n;
    int a[n];
    fo(i,n) cin >> a[i];
    
    
    if(n <=2 ) {
        cout << 0 <<"\n";
        print(a,n);
        return;
    }
    int res = 0;
    for(int i =1; i < n-1; i++) {
        if(a[i] > a[i-1] && a[i+1] < a[i]) {
            int x = a[i];
            int y = (i + 2 < n ) ? a[i+2] : INT_MIN;
            int ins = max(x,y);
            a[i+1] = ins;
            res++;
        }
    }

    cout << res << "\n";
    print(a,n);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t; cin>>t;
	while(t--){
		solve();
	}
}

void print ( int a[], int n) {
    fo(i,n) cout << a[i] << " ";
    cout << "\n";
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