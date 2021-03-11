////
//// Created by myungki cho on 3/2/21.
////
//
//#include <iostream>
//#include <cstring>
//#include <vector>
//#include <algorithm>
//
//#define MAXN 100001
//using namespace std;
//
//int arr[MAXN];
//int num_one;
//int n, q;
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    cin >> n >> q;
//
//    for (int i = 1; i <= n; i++) {
//        cin >> arr[i];
//        if (arr[i]) num_one++;
//    }
//
//    while (q--) {
//        int t, num;
//        cin >> t >> num;
//        if (t == 1) {
//            if (arr[num]) {
//                num_one -= 1;
//                arr[num] = 0;
//            } else {
//                num_one += 1;
//                arr[num] = 1;
//            }
//        } else {
//            if (num > num_one) {
//                cout << 0;
//            } else cout << 1;
//            cout << "\n";
//        }
//    }
//
//    return 0;
//}