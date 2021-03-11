//
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//int t,n,k;
//string str;
//
//int arr[101];
//int main(){
//    cin >> t;
//
//    while(t--){
//        int cnt =0;
//        cin >> n >> k >> str;
//
//        if(k == 0){
//            cout << "YES" << "\n";
//            continue;
//        }
//
//        if(str.size() <= k * 2){
//            cout << "NO" << "\n";
//            continue;
//        }
//        int s = 0;
//        int e = str.size()-1;
//        while(s<=e){
//            if(str[s++] == str[e--]){
//                cnt++;
//                continue;
//            }
//            break;
//        }
//        if(cnt >= k){
//            cout << "YES" << "\n";
//        }else{
//            cout << "NO" << "\n";
//        }
//    }
//    return 0;
//}