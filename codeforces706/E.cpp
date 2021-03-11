//#include<iostream>
//#include<algorithm>
//#include<cstring>
//
//using namespace std;
//
//int T,N,M;
//
//char arr[501][501];
//
//int main(){
//    cin >> T;
//
//    while(T--){
//        memset(arr,0,sizeof(arr));
//        cin >> N >> M;
//        for(int i = 0; i < N; i++){
//            for(int j = 0; j < M; j++){
//                cin >> arr[i][j];
//            }
//        }
//
//        for(int i = 0; i < N; i++){
//            arr[i][0] = 'X';
//            if(i % 3 == 0){
//                for(int j = 0; j < M; j++){
//                    arr[i][j] = 'X';
//                }
//            }else{
//                if(i % 3 == 2){
//                    if(arr[i][1] == 'X'){
//                        arr[i][0] = '.';
//                        arr[i-1][0] = '.';
//                        arr[i-1][1] = 'X';
//                    }
//                }
//                else{
//                    if(arr[i][1] == 'X'){
//                        arr[i+1][0] = '.';
//                        arr[i][0] = '.';
//                        arr[i+1][1] = 'X';
//                    }
//                }
//            }
//        }
//
//        if((N-1) % 3 == 2){
//            for(int j = 0; j < M; j++){
//                if(arr[N-1][j] == 'X'){
//                    arr[N-2][j] = 'X';
//                }
//            }
//        }
//
//        for(int i = 0; i < N; i++){
//            for(int j = 0; j < M; j++){
//                cout << arr[i][j];
//            }
//            cout << "\n";
//        }
//    }
//    return 0;
//}