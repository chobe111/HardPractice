//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//typedef long long ll;
//void solve(){
//
//}
//int t,n,x,y;
//double ans;
//vector<int> miner;
//vector<int> diamond;
//bool cmp(int a,int b){
//    return abs(a) <= abs(b);
//}
//int main(){
//
//
//    cin >> t;
//    while(t--){
//        cin >> n;
//        ans =0;
//        miner.clear();
//        diamond.clear();
//        for(int i = 0; i < 2*n; i++){
//            int x,y;
//            cin >> x >> y;
//            if(x == 0){
//                miner.push_back(y);
//            }else{
//                diamond.push_back(x);
//            }
//        }
//        sort(miner.begin(), miner.end(), cmp);
//        sort(diamond.begin(), diamond.end(), cmp);
//
//        for(int i = 0; i < miner.size(); i++){
//            ll m = miner[i];
//            ll d = diamond[i];
//            ans += sqrt(m * m + d * d);
//
//        }
////		cout.setprecision(10);
//        cout << fixed << setprecision(15) << ans << "\n";
//    }
//    return 0;
//}