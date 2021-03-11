//// Created by myungki cho on 2/7/21.
////
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<set>
//#include<functional>
//#include<queue>
//#include<map>
//#include<cstring>
//
//#define FOR0(x, n) for(int x = 0; x < n; ++x)
//#define FOR1(x, n) for(int x = 1; i <= n; ++x)
//#define vt vector
//#define endl "\n"
//#define all(c) (c).begin(), (c).end()
//#define sz(x) (int)(x).size()
//#define msl(arr) memset(arr,0x3f,sizeof(arr))
//#define mss(arr) memset(arr,0x7f,sizeof(arr))
//#define msz(arr) memset(arr,0,sizeof(arr))
//#define MAXN 100001
//using namespace std;
//
//
//typedef pair<int, int> pii;
//typedef long long ll;
//
//ll a[MAXN];
//ll b[MAXN];
//bool chk[MAXN];
//ll T, N, A, B, max_a;
//vt<int> vec1;
//vt<int> vec0;
//int ans = 0;
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cin >> N;
//
//    FOR1(i, N) {
//        cin >> a[i];
//    }
//    int before = 0;
//    FOR1(i, N) {
//        if(a[i] != a[i-1]){
//            ans++;
//            continue;
//        }
//        if(before == a[i]) continue;
//        before = a[i];
//        ans++;
//    }
//    cout << ans;
//    return 0;
//}