////
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
//#define msl(arr) memset(arr,0x3f,sizeof(arr))
//#define mss(arr) memset(arr,0x7f,sizeof(arr))
//#define msz(arr) memset(arr,0,sizeof(arr))
//#define INF 987654321
//#define sz(x) (int)(x).size()
//#define MAX 101
//using namespace std;
//
//typedef pair<int, int> pii;
//typedef long long ll;
//
//int T, N, ans, M;
//char arr[MAX][MAX];
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cin >> T;
//    while (T--) {
//        msz(arr);
//        ans = 0;
//        cin >> N >> M;
////
//        for (int i = 0; i <= N; i++) {
//            for (int j = 0; j <= M; j++) {
//                arr[i][j] = '.';
//            }
//        }
//
//        for (int i = 1; i <= N; i++) {
//            for (int j = 1; j <= M; j++) {
//                char c;
//                cin >> c;
//                arr[i][j] = c;
//            }
//        }
//
//        for (int i = 1; i <= M; i++) {
//            if (arr[N][i] == 'D') ans++;
//        }
//
//        for (int i = 1; i <= N; i++) {
//            if (arr[i][M] == 'R') ans++;
//        }
//
//        cout << ans;
//        cout << endl;
//    }
//    return 0;
//}
