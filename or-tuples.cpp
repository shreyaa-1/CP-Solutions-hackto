#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
        
    int x, y, z;
        cin >> x >> y >> z;
        long long ans = 1;
        for(int i = 0; i < 20; i++) {
            int cnt = ((x&(1<<i)) > 0);
            cnt += ((y&(1<<i)) > 0);
            cnt += ((z&(1<<i)) > 0);
            if(cnt == 1) ans = 0;
            else if(cnt == 3) ans *= 4;
        }
        cout << ans << "\n";
}

signed main() {
    
ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
  int t; cin>>t;
   while(t--)
       
solve();

       


}
