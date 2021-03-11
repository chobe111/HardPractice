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
//#include<cmath>
//
//using namespace std;
//int t, h, m;
//string str;
//
//const int INF = 987654321;
//typedef pair<int, int> pii;
//
//vector<pii> vec;
//map<int, int> mp = {{0, 0},
//                    {1, 1},
//                    {2, 5},
//                    {5, 2},
//                    {8, 8}};
//
//void isvalid_num(int ch, int cm) {
//    int flag = true;
//    int tch = ch;
//    int tcm = cm;
//    while (ch != 0) {
//        int remain = ch % 10;
//        if (remain != 0 && remain != 1 && remain != 2 && remain != 5 && remain != 8) flag = false;
//        ch /= 10;
//    }
//
//    while (cm != 0) {
//        int remain = cm % 10;
//        if (remain != 0 && remain != 1 && remain != 2 && remain != 5 && remain != 8) flag = false;
//        cm /= 10;
//    }
//    if (flag) vec.push_back({tch, tcm});
//
//}
//
//int get_num(int c) {
//    int ret = 1;
//    for (int i = 0; i < c; i++) {
//        ret *= 10;
//    }
//    return ret;
//}
//
//int get_size(int num) {
//    int ret = 0;
//    while (num != 0) {
//        num /= 10;
//        ret++;
//    }
//    return ret;
//}
//
//void print_ans(pii ans) {
//
//    int h_size = 2;
//    int m_size = 2;
//
//    int ch_size = get_size(ans.first);
//    int cm_size = get_size(ans.second);
//
//    for (int i = 0; i < h_size - ch_size; i++) {
//        cout << "0";
//    }
//    if(ans.first != 0){
//        cout << ans.first;
//    }
//    cout << ":";
//    for (int i = 0; i < m_size - cm_size; i++) {
//        cout << "0";
//    }
//    if(ans.second!= 0){
//        cout << ans.second;
//    }
//}
//
//bool is_reverse_possible(pii num) {
//    int h_size = 2;
//    int m_size = 2;
//
//    int temp_h = h;
//    int temp_m = m;
//
//    int th = 0;
//    int tm = 0;
//
//    int ch = num.first;
//    int cm = num.second;
//
//    int cch = ch;
//    int ccm = cm;
//
//    int cnt = 0;
//    while (cm != 0) {
//        int remain = mp[cm % 10];
//        th += get_num(m_size - cnt - 1) * remain;
//        cm /= 10;
//        cnt++;
//    }
//
//    cnt = 0;
//    while (ch != 0) {
//        int remain = mp[ch % 10];
//        tm += get_num(h_size - cnt - 1) * remain;
//        ch /= 10;
//        cnt++;
//    }
//
//    return th < h && tm < m;
//}
//
//void solve() {
//    pii ans;
//    int min_num = INF;
//
//    vector<int> ch_arr;
//    vector<int> cm_arr;
//
//    int cnt = 0;
//
//    while (str[cnt] != ':') {
//        ch_arr.push_back(str[cnt] - '0');
//        cnt++;
//    }
//
//    cnt++;
//    while (cnt != str.size()) {
//        cm_arr.push_back(str[cnt] - '0');
//        cnt++;
//    }
//
//    int ch = 0;
//    int cm = 0;
//
//    for (int i = ch_arr.size() - 1; i >= 0; i--) {
//        ch += ch_arr[i] * get_num(ch_arr.size() - 1 - i);
//    }
//
//    for (int i = cm_arr.size() - 1; i >= 0; i--) {
//        cm += cm_arr[i] * get_num(cm_arr.size() - 1 - i);
//    }
//
//
//
//    for (int i = 0; i < h; i++) {
//        for (int j = 0; j < m; j++) {
//            isvalid_num(i, j);
//        }
//    }
//
//    for (int i = 0; i < vec.size(); i++) {
//        if (!is_reverse_possible(vec[i])) continue;
//        int f_num = vec[i].first * m + vec[i].second;
//        int s_num = vec[i].first * m + vec[i].second + h * m;
//        int c_num = ch * m + cm;
//        int m_num = -1;
//        if (f_num < c_num) {
//            m_num = s_num - c_num;
//        } else {
//            m_num = f_num - c_num;
//        }
//        if (m_num < min_num) {
//            min_num = m_num;
//            ans = {vec[i].first, vec[i].second};
//        }
//    }
//
//    print_ans(ans);
//}
//
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cin >> t;
//    while (t--) {
//        vec.clear();
//        cin >> h >> m;
//        cin >> str;
//        solve();
//        cout << "\n";
//    }
//
//
//    return 0;
//}