////
//// Created by myungki cho on 3/7/21.
////
/***
 * 선택 정렬 (Selection Sort) 버블 소트와 유사한 알고리즘으로
 * 원소를 넣을 위치는 정해져있고 어떤 원소를 넣을지 선택하는 알고리즘
 *
 * 시간복잡도 O(N^2)
 *
 * 버블 소트에 비해 swap 연산이 적게 이뤄지므로 많은 교환이 일어나는 자료형에서 굉장히 효율적임
 */
//
//#include<iostream>
//#include<algorithm>
//#include<vector>
//

//using namespace std;
//int arr[101];
//
//void swap(int i, int j) {
//    int temp = arr[i];
//    arr[i] = arr[j];
//    arr[j] = temp;
//}
//
//int main() {
//
//    int N;
//    cin >> N;
//
//    for(int i = 0; i < N; i++){
//        cin >> arr[i];
//    }
//
//    for (int i = 0; i < N; i++) {
//        int min_index = -1;
//        int min_val = 987654321;
//        for (int j = i; j < N; j++) {
//            if (arr[j] < min_val) {
//                min_val = arr[j];
//                min_index = j;
//            }
//        }
//        swap(i, min_index);
//    }
//
//    for(int i = 0; i < N; i++){
//        cout << arr[i] << " ";
//    }
//
//    cout << "\n";
//
//
//    return 0;
//}