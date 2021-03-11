////
//// Created by myungki cho on 3/2/21.
////
//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<cstring>
//#include<cmath>
//
//#define MAXN 1000001
//using namespace std;
//
//int arr[101];
//int ans = 2000000001;
//int t;
//
//int main() {
//    cin >> t;
//    while (t--) {
//        ans = 2000000001;
//        int n, u, v;
//        cin >> n >> u >> v;
//        memset(arr, 0, sizeof(arr));
//        for (int i = 1; i <= n; i++) {
//            cin >> arr[i];
//        }
//        for (int i = 2; i <= n; i++) {
//            int dis = abs(arr[i] - arr[i - 1]);
//            if (dis >= 2) {
//                ans = 0;
//                break;
//            } else if (dis == 0) {
//                ans = min(ans, min(u + v, 2 * v));
//            } else if (dis == 1) {
//                ans = min(ans, min(u, v));
//            }
//        }
//        cout << ans << "\n";
//    }
//
//    return 0;
//}
