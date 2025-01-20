#include <iostream>
using namespace std;

int main() {
    int N, X;  // N: 수열의 길이, X: 기준값
    cin >> N >> X;
    
    int num;
    // N개의 수를 입력받으면서 X보다 작은 수만 출력
    for(int i = 0; i < N; i++) {
        cin >> num;
        if(num < X) {
            cout << num << " ";
        }
    }
    
    return 0;
}