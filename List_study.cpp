#include <iostream>
#include <list>

void listStudy()
{
    /*
        노드의 기본 형태
            struct doubly_linked_list_node
            {
                int data;
                doubly_linked_list_node* next;
                doubly_linked_list_node* prev;
            };
            이전 노드를 가리키는 포인터가 추가로 존재
            이 포인터를 이용하여 역방향으로 이동 가능
            맨 마지막 원소와 리스트 크기를 따로 저장하여 빠른 push_back() 또는 size() 함수 지원
    */

    std::list<int> list1 = {1, 2, 3, 4, 5};
    list1.push_back(6); // {1, 2, 3, 4, 5, 6}
    list1.insert(next(list1.begin()), 0); // {1, 0, 2, 3, 4, 5, 6}
    list1.insert(list1.end(), 7); // {1, 0, 2, 3, 4, 5, 6, 7}
    list1.pop_back(); // {1, 0, 2, 3, 4, 5, 6}
    std::cout << "삽입 & 삭제 후 리스트: ";
    for (auto i : list1)
        std::cout << i << " ";
    // 삽입 & 삭제 후 리스트: 1 0 2 3 4 5 6
}