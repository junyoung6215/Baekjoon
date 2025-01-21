# 제출한 28명의 학생 번호를 저장할 리스트 생성
submitted = []

# 28명의 제출자 번호 입력받기
for _ in range(28):
    number = int(input())
    submitted.append(number)

# 1부터 30까지의 모든 출석번호를 확인
for num in range(1, 31):
    # 현재 검사 중인 번호(num)의 제출 여부를 저장할 변수
    is_submitted = False
    
    # submitted 리스트를 순회하면서 현재 번호가 제출되었는지 확인
    for submitted_num in submitted:
        if submitted_num == num:
            is_submitted = True
            break  # 찾았다면 더 이상 검사할 필요 없음
            
    # 현재 번호가 제출되지 않았다면 출력
    if not is_submitted:
        print(num)
