#include <iostream>
#include <vector>

using namespace std;

int main() {

    int numberOfLevel;
    cin >> numberOfLevel;

    vector<int> score(numberOfLevel);

    for (int i = 0; i < numberOfLevel; i++) {
        cin >> score[i];
    }

    int count = 0;

    for (int i = numberOfLevel - 1; i > 0;i--) {
        if (score[i - 1] >= score[i]) {
            count += (score[i - 1] - score[i] + 1);
            score[i - 1] -= (score[i - 1] - score[i] + 1);
        }
    }

    cout << count;
}
/*
[문제 해석]
맨 마지막 점수를 기준으로 정하자.
그 이전 단계들의 점수는 맨 마지막 점수보다 작아야함.
맨 마지막이 높은 레벨이므로 제일 높은 점수를 얻어야함.
{예제 입력1}
3
5
5
5
이므로
3
4
5
가 되도록 설계해야함
1만큼 감소 시키는 것이 1이므로 5->3 (2번), 5->4(1번) 총 3번임
{예제 입력2}
4
5
3
7
5
이므로
2
3
4
5
가 되로록 설계해야함
5->2 (3번), 7->4 (3번) 이므로 총 6감소이므로 6이 출력되어야 함
*/