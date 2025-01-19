#include <iostream>
using namespace std;

int main() {
    // 입출력 최적화
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;  // 테스트 케이스의 수
    cin >> T;
    
    int A, B;  // 각 테스트 케이스의 두 정수
    
    // T개의 테스트 케이스 처리
    while (T--) {
        cin >> A >> B;
        cout << A + B << '\n';  // endl 대신 '\n' 사용
    }
    
    return 0;
}