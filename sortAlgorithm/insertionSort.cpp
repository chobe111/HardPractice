//
// Created by myungki cho on 3/7/21.
//
/**
 * 두 번째 원소부터 시작해 그 앞의 원소들과 비교하여 삽입할 위치를 지정한 후
 * 원소를 뒤로 옮기고 지정된 자리에 자료를 삽입하여 정렬하는 알고리즘
 *
 * 최선의 경우 O(N)이라는 엄청나게 빠른 효율성을 가지고 있어, 다른 정렬 알고리즘의 일부로 사용 될 만큼 좋은 정렬 알고리즘임
 * 최악과 평균의 경우 O(N ^ 2) 의 시간이 걸림.
 *
 *
 * 장점: 알고리즘이 매우 단순함
 * 이미 정렬되어 있는 원소에서의 시간이 얼마 안걸림
 * 안정 정렬(stable sort) 임
 * Selection sort 나 Bubble sort에 비해 상대적으로 빠름
 */


//#include<iostream>
//
//using namespace std;
//
//int arr[101];
//
//int main() {
//    int N;
//    cin >> N;
//
//    for (int i = 0; i < N; i++) {
//        cin >> arr[i];
//    }
//
//    for (int i = 1; i < N; i++) {
//        int temp = arr[i];
//        int prev = i - 1;
//        while (prev >= 0 && arr[prev] > temp) {
//            arr[prev + 1] = arr[prev];
//            prev--;
//        }
//        arr[prev + 1] = temp;
//    }
//
//    for (int i = 0; i < N; i++) {
//        cout << arr[i] << " ";
//    }
//
//    return 0;
//}