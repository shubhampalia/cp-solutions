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

int solution(int n, vector<int> seq) {
    int i, w;
    
    vector<vector<int>> K(n + 1, vector<int>(W + 1));
    
        // Build table K[][] in bottom up manner
    for(i = 0; i <= n; i++)
        {
            for(w = 0; w <= W; w++)
            {
                if (i == 0 || w == 0)
                    K[i][w] = 0;
                else if (wt[i - 1] <= w)
                    K[i][w] = max(val[i - 1] +
                                    K[i - 1][w - wt[i - 1]],
                                    K[i - 1][w]);
                else
                    K[i][w] = K[i - 1][w];
            }
        }
    return K[n][W];
}

void solve() {
    int res  = solution()
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
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