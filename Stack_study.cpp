#include <stack>

void stackStudy()
{
    /*
        LIFO
        컨테이너의 한쪽 끝에서만 데이터를 삽입하거나 삭제 가능
        한쪽 끝이 아닌 위치에 있는 데이터는 접근하거나 변경 불가
    */

    // 구현 방법 1
    std::deque<int> stk1;
    stk1.push_back(1); // 스택에 1 추가 {1}
    stk1.push_back(2); // 스택에 2 추가 {1, 2}
    stk1.pop_back(); // 맨 뒤 원소 제거 {1}
    stk1.push_front(0); // 원래 스택에서는 지원하지 않는 동작 {0, 1}

    // 구현 방법 2
    std::stack<int> stk2;
    stk2.push(1); // 스택에 1 추가 {1}
    stk2.push(2); // 스택에 2 추가 {1, 2}
    stk2.pop(); // 맨 뒤 원소 제거 {1}
    stk2.push_front(); // 컴파일 에러

    /*
        std::deque, std::vector 같은 다른 컨테이너를 사용하여 어댑터 구성
        보통 std::deque를 기본 컨테이너로 사용
        empty(), size(), top(), pop(), emplace() 등의 함수 제공
        덱을 사용하면 원소 저장 공간을 재할당할 때 벡터처럼 전체 원소를 이동할 필요가 없기 때문
        몇몇 경우에는 특정 컨테이너가 더 좋은 효율
        std::stack 객체 생성 시 템플릿 매개변수로 사용할 컨테이너 지정 가능
    */    

    std::stack<int, std::vector<int>> stk;
    std::stack<int, std::list<int>> stk;

    /*
        스택의 모든 연산은 O(1)
        기본 컨테이너로 함수 호출을 전달하는 과정은 컴파일러의 최적화에 의해 모두 인라인 형식으로 호출
        오버헤드 없음
    */
}