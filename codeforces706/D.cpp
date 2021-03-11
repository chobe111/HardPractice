//#include<iostream>
//#include<algorithm>
//#define MAXN 100001
//
//using namespace std;
//
//int arr[MAXN],N,max_depth,i_max,d_max;
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cin >> N;
//
//    for(int i = 1; i <= N; i++){
//        cin >> arr[i];
//    }
//    int icnt = 0;
//    int dcnt = 0;
//
//    bool isd = false;
//
//    for(int i =2; i <= N; i++){
//        if(arr[i] > arr[i-1]){
//            if(isd){
//                if (icnt == dcnt) max_depth = max(max_depth, icnt);
//                isd = 0;
//                icnt = 1;
//                dcnt = 0;
//            }
//            else{
//                icnt++;
//            }
//        }else{
//            isd = 1;
//            dcnt++;
//        }
//    }
//    if (icnt == dcnt) max_depth = max(max_depth, icnt);
//    icnt = 0;
//    dcnt = 0;
//    int cnt = 0;
//    for(int i =2; i <= N; i++){
//        if(arr[i] > arr[i-1]){
//            if(isd){
//                if(icnt >= max_depth) cnt++;
//                if(dcnt >= max_depth) cnt++;
//                isd = 0;
//                icnt = 1;
//                dcnt = 0;
//            }
//            else{
//                icnt++;
//            }
//        }else{
//            isd = 1;
//            dcnt++;
//        }
//    }
//
//    if(icnt >= max_depth) cnt++;
//    if(dcnt >= max_depth) cnt++;
//
//    if(cnt != 2 || max_depth % 2 || max_depth == 0){
//        cout << 0;
//    }else{
//        cout << 1;
//    }
//
//
//    return 0;
//}