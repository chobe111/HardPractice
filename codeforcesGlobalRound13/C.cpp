//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<cstring>
//#include<cmath>
//
//using namespace std;
//
//typedef long long ll;
//int t;
//int arr[5001];
//int ans;
//
//
//int main() {
//    cin >> t;
//    while (t--) {
//        int n;
//        ans = 0;
//        memset(arr, 0, sizeof(arr));
//        cin >> n;
//
//        for (int i = 1; i <= n; i++) {
//            cin >> arr[i];
//        }
//
//        for (int i = 1; i <= n; i++) {
//            int s = i;
//            if(i == n){
//                ans += arr[n] - 1;
//                continue;
//            }
//            while (arr[s] != 1) {
//                int x = s;
//                ans++;
//                if (s + arr[s] > n) {
//                    ans += arr[s] - (n - s);
//                    arr[s] = n - s;
//                    arr[n] -= 1;
//                    continue;
//                }
//                while (x <= n) {
//                    arr[x] = max(1, arr[x] - 1);
//                    x += arr[s];
//                }
//            }
//        }
//        cout << ans << "\n";
//    }
//
//
//    return 0;
//}