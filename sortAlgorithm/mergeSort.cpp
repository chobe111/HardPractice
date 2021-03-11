////
//// Created by myungki cho on 3/12/21.
////
//#include<iostream>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//
//int sorted_array[11];
//
//void merge(int arr[], int l, int m, int r) {
//    int sf = l;
//    int sb = m + 1;
//    int si = l;
//    while (si <= r) {
//        if (sf <= m && arr[sf] <= arr[sb]) {
//            if(arr[sf] <= arr[sb])
//                sorted_array[si++] = arr[sf++];
//            else{
//                if(sb > r){
//                    sorted_array[si++] = arr[sf++];
//                }
//            }
//        } else if(sb <= r){
//            sorted_array[si++] = arr[sb++];
//        }
//    }
//    for(int i = l; i <= r; i++){
//        arr[i] = sorted_array[i];
//    }
//}
//
//void merge_sort(int arr[], int l, int r) {
//    int m;
//    if (l >= r) return;
//    m = (l + r) / 2;
//    merge_sort(arr, l, m);
//    merge_sort(arr, m + 1, r);
//    merge(arr, l, m, r);
//}
//
//int main() {
//    int arr[8] = {2, 3, 1, 5};
//    merge_sort(arr, 0, 3);
//    for(int i = 0;i < 8; i++){
//        cout << sorted_array[i] << " ";
//    }
//    return 0;
//}