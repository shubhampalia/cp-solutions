#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i=0;i<n;i++)
#define repi(i,x,n) for (int i=x;i<n;i++)
#define br cout<<endl
#define vi vector<int>


int fun(int prev, int ptr){
    for (int i=0;i<21;i++){
        if ((ptr&(1<<i))>0)
            prev^=(1<<i);
    }
    return prev;
}
void solve(){
    int n;
    cin>>n;
    vector<int> res;
    
    map<int,int> s;
    s[0]=1;
    int ptr = 1;
    int prev = 0;
    for (int i=0;i<n;i++){
        // cout<<ptr<<endl;
        while (s[fun(prev,ptr)]==1){
            ptr++;
        }
        prev = fun(prev,ptr);
        s[prev]=1;
        res.push_back(ptr);
        ptr++;
    }
    
    // for (auto x:res) cout<<x<<" ";
    cout<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}