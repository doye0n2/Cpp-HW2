//GamblingGame.h
#ifndef GAMBLINGGAME_H  // 헤더 파일 중복 포함 방지
#define GAMBLINGGAME_H

#include "Player.h" // Player.h 헤더 파일을 포함하여 Player 클래스 정의를 사용

class GamblingGame { // GamblingGame 클래스 정의
public: // 아래의 멤버는 public 접근 지정자, 외부에서 접근 가능
    Player* player1; // 첫 번째 플레이어를 가리키는 포인터
    Player* player2; // 두 번째 플레이어를 가리키는 포인터

    GamblingGame(Player* p1, Player* p2); // 생성자 선언 - 두 플레이어를 초기화하는 메서드
    void startGame(); // 게임을 시작하고 진행하는 메서드 선언 - 반환 값 없음
    bool playTurn(Player* player); // 주어진 플레이어가 턴을 진행하는 메서드 선언 - 승리 여부를 bool로 반환
};

#endif // GAMBLINGGAME_H // 헤더 파일 끝
