//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<set>
//#include<cstring>
//using namespace std;
//
//int t,n,k;
//int arr[100001];
//set<int> s;
//
//int get_mex(){
//    int ret = 0;
//    while(true){
//        if(s.find(ret) == s.end()){
//            break;
//        }
//        ret++;
//    }
//    return ret;
//}
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    cin >> t;
//    while(t--){
//        s.clear();
//        memset(arr, 0, sizeof(arr));
//        int mval = -1;
//        cin >> n >> k;
//
//        for(int i = 1; i <= n; i++){
//            cin >> arr[i];
//            s.insert(arr[i]);
//            mval = max(mval, arr[i]);
//        }
//
//        int mex = get_mex();
//
//        if(mex > mval){
//            cout << s.size() + k << "\n";
//            continue;
//        }
//
//        while(k--){
//            int a = mval;
//            int b = mex;
//
//            int c = (mval + mex) / 2 + (mval + mex) % 2;
//            if(s.find(c) == s.end()){
//                s.insert(c);
//                mval = max(mval, c);
//                mex = get_mex();
//            }
//            else{
//                break;
//            }
//        }
//        cout << s.size() << "\n";
//    }
//    return 0;
//}