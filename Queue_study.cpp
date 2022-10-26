#include <queue>

void queueStudy()
{
    /*
        FIFO
        O(1)
    */

    std::queue<int> q;
    q.push(1); // 맨 뒤에 1을 추가 {1}
    q.push(2); // 맨 뒤에 2를 추가 {1, 2}
    q.push(3); // 맨 뒤에 3을 추가 {1, 2, 3}
    q.pop(); // 맨 앞 원소를 제거 {2, 3}
    q.push(4); // 맨 뒤에 4를 추가 {2, 3, 4}

    /*
        단순히 양 끝단에 있는 원소에 접근하고 싶을 때에는 front() 또는 back() 함수 사용
    */
}