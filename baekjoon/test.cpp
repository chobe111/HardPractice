////
//// Created by myungki cho on 2/16/21.
////
//
//#include<iostream>
//
//using namespace std;
//
//char arr[51][51];
//char arr2[51][51];
//int n, m;
//
//void change(int x, int y) {
//    for (int i = x; i <= x + 2; i++) {
//        for (int j = y; j <= y + 2; j++) {
//            if (arr[i][j] == '0')
//                arr[i][j] = '1';
//            else arr[i][j] = '0';
//        }
//    }
//
//}
//
//int cnt;
//bool flag;
//
//int main() {
//    cin >> n >> m;
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= m; j++) {
//            cin >> arr[i][j];
//        }
//    }
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= m; j++) {
//            cin >> arr2[i][j];
//        }
//    }
//
//    for (int i = 1; i <= n - 2; i++) {
//        for (int j = 1; j <= m - 2; j++) {
//            if (arr[i][j] != arr2[i][j]) {
//                change(i, j);
//                cnt += 1;
//            }
//        }
//    }
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= m; j++) {
//            if (arr[i][j] != arr2[i][j]) {
//                flag = true;
//                break;
//            }
//        }
//    }
//
//    if (flag) {
//        cout << -1;
//    } else {
//        cout << cnt;
//    }
//
//    return 0;
//}