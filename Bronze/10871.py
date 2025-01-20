#N(수열의 길이),X(기준값) 입력받기
N, X=map(int, input().split())

#수열 A 입력받기
A=list(map(int, input().split()))

#X보다 작은 수 찾아서 출력하기 
for num in A:
    if num<X:
        print(num, end=' ')
        
