////
//// Created by myungki cho on 3/6/21.
////
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<set>
//#include<functional>
//#include<queue>
//#include<map>
//#include<cstring>
//
//using namespace std;
//
//void solve() {
//
//
//}
//
//bool arr[1001];
//int t, n, k;
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cin >> t;
//    while (t--) {
//        cin >> n >> k;
//        int cnt = 0;
//        memset(arr,0,sizeof(arr));
//        for (int i = 1; i <= n; i++) {
//            if(i == k){
//                arr[i] = true;
//                cnt++;
//            }
//            for (int j = i+1; j <= n; j++) {
//                if (i + j == k) {
//                    arr[i] = true;
//                    cnt++;
//                }
//            }
//        }
//        cout << n - cnt << "\n";
//        for(int i = 1; i <= n; i++){
//            if(!arr[i])
//                cout << i << " ";
//        }
//        cout << "\n";
//    }
//    return 0;
//}