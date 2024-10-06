// Player.h
#ifndef PLAYER_H // 전처리기 지시문: PLAYER_H가 정의되지 않은 경우에만 아래 코드를 포함
#define PLAYER_H // PLAYER_H를 정의하여 중복 포함을 방지 (헤더 가드)

#include <string> // std::string 클래스를 사용하기 위한 헤더 포함

class Player {
public:
    std::string name; // 플레이어의 이름을 저장하는 멤버 변수
    Player(std::string name); // 플레이어의 이름을 초기화하는 생성자
    int getRandomNumber(); // 랜덤 숫자를 반환하는 멤버 함수 (갬블링 게임에서 사용)
};

#endif // 헤더 파일의 끝을 의미하며, PLAYER_H가 중복 포함되지 않도록 보장
