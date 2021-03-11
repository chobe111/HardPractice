////
//// Created by myungki cho on 2/20/21.
////
//
////
//// Created by myungki cho on 2/20/21.
////
//
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#include<vector>
//#include<set>
//
//using namespace std;
//
//
//typedef long long ll;
//
//int K;
//
//int s_arr[10];
//int t_arr[10];
//int ans;
//string S;
//string T;
//
//
//ll iswin(int a, int b) {
//    int s_sum = 0;
//    int t_sum = 0;
//    if (s_arr[a] + t_arr[a] + 1 > K || t_arr[b] + s_arr[b] + 1 > K) return 0;
//
//    s_arr[a] += 1;
//    t_arr[b] += 1;
//    for (int i = 1; i < 10; i++) {
//        s_sum += i * pow(10, s_arr[i]);
//    }
//
//    for (int i = 1; i < 10; i++) {
//        t_sum += i * pow(10, t_arr[i]);
//    }
//
//    s_arr[a] -= 1;
//    s_arr[b] -= 1;
//
//    if (s_sum > t_sum) {
//        if (a == b) {
//            return ((K - (s_arr[a] + t_arr[b])) * (K - (s_arr[a] + t_arr[b]) - 1)) / 2;
//        } else return (K - (s_arr[a] + t_arr[b])) * (K - (s_arr[b] + t_arr[b]));
//    }
//
//    return 0;
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cin >> K >> S >> T;
//
//    for (int i = 0; i < S.size(); i++) {
//        s_arr[S[i] - '0'] += 1;
//    }
//    for (int i = 0; i < T.size(); i++) {
//        t_arr[T[i] - '0'] += 1;
//    }
//
//    for (int i = 1; i <= 9; i++) {
//        for (int j = 1; j <= 9; j++) {
//            ans += iswin(i, j);
//        }
//    }
//    cout << float(ans) / ((K * 9 - 8) * (K * 9 - 9) / 2);
//
//}