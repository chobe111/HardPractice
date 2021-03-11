//
// Created by myungki cho on 3/7/21.
//

//#include<iostream>
//#include<queue>
//#include<stack>
//#include<vector>
//
//using namespace std;
//
//int arr[101];
//

/**
 * 버블 소트 구현
 *
 * 원리: 서로 인접한 두 원소를 비교 한 이후 조건에 맞지 않는다면 두 원소의 위치를 바꿈
 *
 * 시간 복잡도: n * (n - 1) / 2 = O(N^2)
 * 공간 복잡도: 주어진 배열안에서 swap을 통해 알고리즘이 진행되기 때문에 공간복잡도는 O(N) 임
 */
//int main() {
//
//    int N;
//    cin >> N;
//    for (int i = 0; i < N; i++) {
//        cin >> arr[i];
//    }
//
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N-i-1; j++) {
//            if (arr[j] > arr[j + 1]) {
//                int temp = arr[j + 1];
//                arr[j + 1] = arr[j];
//                arr[j] = temp;
//            }
//        }
//        for (int i = 0; i < N; i++) {
//            cout << arr[i] << " ";
//        }
//        cout << "\n";
//    }
//
//
//    return 0;
//}
//
//
//
