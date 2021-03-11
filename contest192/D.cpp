//////
////// Created by myungki cho on 2/20/21.
//////
////
//////
////// Created by myungki cho on 2/20/21.
//////
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <stack>
//#include <queue>
//#include <cstring>
//#include <cmath>
//
//
//using namespace std;
//
//typedef long long ll;
//ll M;
//string X;
//ll min_distance = 2000000000000000000;
//vector<int> vec;
//int min_n, ans;
//
//void solve() {
//
//}
//
//ll get_current_val(ll base) {
//    ll sum = 0;
//    for (int i = 0; i < vec.size(); i++) {
//        sum += pow(base, vec.size() - 1 - i) * vec[i];
//    }
//    return sum;
//}
//
//void bs(ll s, ll e) {
//    ll mid = (s + e) / 2;
//    cout << "mid = " << mid << "\n";
//    if (mid < min_n) return;
//    ll cv = get_current_val(mid);
//    if (cv < 0) return;
//    if (M - cv >= min_distance) return;
//    if (cv > M) {
//        bs(s, mid);
//    } else {
//        if (M - cv < min_distance) {
//            ans = mid;
//            min_distance = M - cv;
//        }
//        bs(mid, e);
//    }
//}
//
//int f(ll num) {
//    int ret = 0;
//    while (num != 0) {
//        num /= 10;
//        ret++;
//    }
//    return ret;
//}
//
//int main() {
//    cin >> X >> M;
//    int msz = f(M);
//    for (int i = 0; i < X.size(); i++) {
//        vec.push_back(X[i] - '0');
//        min_n = max(min_n, X[i] - '0');
//    }
//    min_n++;
//
//    int max_n = pow(10, (msz / (X.size() - 1)) + 1);
//    bs(0, max_n);
//    if (ans - min_n >= 0) {
//        cout << ans - min_n + 1;
//    } else {
//        cout << 0;
//    }
//    return 0;
//}