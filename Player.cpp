// Player.cpp
#include "Player.h" // Player 클래스 정의를 포함한 헤더 파일
#include <cstdlib> // 랜덤 숫자를 생성하기 위한 rand() 함수를 사용하기 위해 포함

// Player 생성자
Player::Player(std::string name) : name(name) {}
// Player 클래스의 생성자 구현
// 입력받은 이름을 클래스 멤버 변수 name에 할당함
// 'name(name)'은 생성자 초기화 리스트로 매개변수로 받은 값을 멤버 변수에 직접 할당하는 효율적인 방식임


// 랜덤 숫자 생성 함수
int Player::getRandomNumber() {
    return rand() % 3; // 0부터 2까지의 랜덤 숫자를 생성하여 반환. rand()는 큰 범위의 숫자를 생성하고 % 3을 통해 그 범위를 0, 1, 2로 제한
}
