#include <iostream>
using namespace std;

int main()
{
    // 제출한 28명의 학생 번호를 저장할 배열
    int submitted[28];
    
    // 28명의 제출자 번호를 입력받음
    for(int i = 0; i < 28; i++)
    {
        cin >> submitted[i];
    }

    // 1부터 30까지의 모든 출석번호를 확인
    for(int num = 1; num <= 30; num++)
    {
        // 현재 검사 중인 번호(num)의 제출 여부를 저장할 변수
        bool isSubmitted = false;
        
        // submitted 배열을 순회하면서 현재 번호가 제출되었는지 확인
        for(int i = 0; i < 28; i++)
        {
            if(submitted[i] == num)
            {
                isSubmitted = true;
                break;  // 찾았다면 더 이상 검사할 필요 없음
            }
        }
        
        // 현재 번호가 제출되지 않았다면 출력
        if(isSubmitted == false)
        {
            cout << num << endl;
        }
    }
    
    return 0;
}

