#include <vector>

void vectorStudy()
{
	// 크기가 0인 벡터 선언
	std::vector<int> vec;

	// 지정한 초기값으로 이루어진 크기가 5인 벡터 선언
	std::vector<int> vec = { 1, 2, 3, 4, 5 };

	// 크기가 10인 벡터 선언
	std::vector<int> vec(10);

	// 크기가 10이고, 모든 원소가 5로 초기화 된 벡터 선언
	std::vector<int> vec(10, 5);

	/*
		벡터의 맨 마지막에 새로운 원소 추가

		push_back(val):
			if size < capacity
				마지막 원소 다음에 val 저장
				벡터 크기를 1만큼 증가

			if vector is already full
				2 * size 크기의 메모리 새로 할당
				새로 할당한 메모리로 기존 원소 전부 복사/이동
				데이터 포인터를 새로 할당한 메모리 주소로 지정
				마지막 원소 다음에 val 저장하고 벡터 크기 1만큼 증가

		뒤쪽에 남아 있는 공간이 있다면 O(1)
		공간이 충분하지 않다면 O(n)
	*/

	std::vector<int> vec;
	vec.push_back(1); // 맨 뒤에 1 추가
	vec.push_back(2); // 맨 뒤에 2 추가
	vec.insert(vec.begin(), 0);	// 맨 앞에 0 추가
	vec.insert(find(vec.begin(), vec.end(), 1), 4); // 1 앞에 4 추가

	/*
		원소의 삽입 위치를 인자로 받아 새로운 원소 추가

		insert()

		O(n)
	*/

	/*
		push_back(), insert()
			추가할 원소를 먼저 임시로 생성한 후, 벡터 버퍼 내부 위치로 복사/이동 수행

			새로운 원소가 추가될 위치에서 해당 원소를 생성하는 방식으로 최적화
			-> emplace_back(), emplace()
				새 원소 위치에서 곧바로 객체가 생성되기 때문에 이들 함수 인자에 생성된 객체를 전달하는 것이 아니라 생성자에 필요한 매개변수를 전달
	*/

	/*
		원소 제거

		pop_back()
			벡터에서 맨 마지막 원소 제거
			O(1)
		
		erase()
			1. 반복자 하나를 인자로 받아 해당 위치 원소 제거
			2. 범위의 시작과 끝을 나타내는 반복자를 받아 시작부터 끝 바로 앞 원소까지 제거
			O(n)
	*/

	std::vector<int> vec = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	vec.pop_back(); // 맨 마지막 원소 제거
	vec.erase(vec.begin()); // 맨 처음 원소 제거
	vec.erase(vec.begin() + 1, vec.begin() + 4); // vec[1] 원소부터 vec[4] 앞 원소까지 제거

	/*
		clear()
			모든 원소를 제거

		reserve(capacity)
			벡터에서 사용할 용량 지정
			메개변수로 지정한 값이 현재 용량보다 크면 메모리를 매개변수 크기만큼 재할당
			매개변수 값이 현재 용량보다 같거나 작으면 아무런 동작 하지 않음
			이 함수는 벡터의 크기를 변경하지는 않음

		shrink_to_fit()
			여분의 메모리 공간을 해제하는 용도로 사용
			이 함수를 호출하면 벡터의 용량이 벡터 크기와 같게 설정
			벡터 크기가 더 이상 변경되지 않을 때 사용하면 유용
	*/
}