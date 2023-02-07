#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define fo(i,n) for(int i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define ll unsigned long long
#define pb push_back
#define sortall(x) sort(all(x))
// #define deb(x) cout<<#x<<" = "<<x<<endl

void solve() {
    int n; cin>>n;
    int a[n], b[n];
    fo(i,n) cin>>a[i];
    fo(i,n) cin>>b[i];
    fo(i,n) {
        if(b[i] > a[i]) {
            int t = b[i];
            b[i] = a[i];
            a[i] = t;
        }
    }
    int maxa=INT_MIN, maxb=INT_MIN;
    fo(i,n) {
        maxa = max(maxa,a[i]);
        maxb = max(maxb,b[i]);
    }
    cout<<maxa*maxb<<"\n";
    return;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
    return 0;
}

