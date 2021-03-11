//
// Created by myungki cho on 3/7/21.
//

#include<iostream>
/**
 * Quick sort 분할 정복 방법을 통해 주어진 배열을 정렬함
 *
 * 배열 가운데서 원소를하나고름 이 원소를 피벗이라함
 * 피벗의 왼쪽에는 피벗보다 작은원소를 피벗의 오른쪽에는 피벗보다 큰 원소들을 배치 하도록 배열을 구성함
 * 왼쪽과 오른쪽 배열에 동일한 알고리즘을 적용함
 *
 * 최악의 시간복잡도(배열이 이미 정렬 되어 있을 경우) n ^ 2
 * 최선 시간복잡도(배열의 크기가 2^n 꼴인 경우) n * log(n)
 *
 * 평균 시간 복잡도 n * log (n)
 *
 * Merge 소트와 다르게 불안정 정렬 피벗의 위치가 바뀌기 때문에.
 */
//using namespace std;
//int arr[10] = {4, 1, 2, 3, 9, 7, 8, 6, 10, 5};
//
//void swap(int i, int j) {
//    int temp = arr[j];
//    arr[j] = arr[i];
//    arr[i] = temp;
//}
//
//void quicksort(int l, int r) {
//    if (l >= r) return;
//
//    int p = l;
//    int i = l + 1;
//    int j = r;
//
//    while (i <= j) {
//        while (i <= r && arr[i] <= arr[p]) {
//            i++;
//        }
//        while (j > l && arr[j] >= arr[p]) {
//            j--;
//        }
//        if (i > j) {
//            swap(p, j);
//        } else {
//            swap(i, j);
//        }
//    }
//
//    quicksort(l, j - 1);
//    quicksort(j + 1, r);
//}
//
//int main() {
//    quicksort(0, 9);
//
//    for(int i = 0; i < 10; i++){
//        cout << arr[i] << " ";
//    }
//
//    return 0;
//}