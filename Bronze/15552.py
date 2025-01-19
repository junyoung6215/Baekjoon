import sys

# 입출력 최적화를 위해 sys.stdin.readline 사용
input = sys.stdin.readline

# 테스트 케이스의 수 입력 받기
T = int(input())

# T개의 테스트 케이스 처리
for _ in range(T):
    # 한 줄에서 두 정수를 입력받아 분리
    A, B = map(int, input().split())
    # 결과 출력 (\n은 자동으로 추가됨)
    print(A + B)