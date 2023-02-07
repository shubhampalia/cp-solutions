#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int xi,y;
    cin>>xi;
    while(xi--){
        cin>>y;
        vector<long long int> x(y);
        for(int yi=0;yi<y;yi++){
            cin>>x[yi];
        }
        if(x[y-2]>x[y-1]) cout<<-1<<endl;
        else{
            if(x[y-1]>=0){
                cout<<y-2<<endl;
                for(int yi=1;yi<y-1;yi++){
                    cout<<yi<<" "<<y-1<<" "<<y<<endl;
                }
            }
            else{
                if(is_sorted(x.begin(),x.end())){
                    cout<<0<<endl;
                }
                else cout<<-1<<endl;
            }
        }
    }
    
  return 0;
}