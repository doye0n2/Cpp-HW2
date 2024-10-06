#include "GamblingGame.h"   // GamblingGame 클래스의 헤더 파일 포함
#include <iostream> // 입출력 스트림을 위한 라이브러리 포함
#include <string>   // 문자열 처리를 위한 라이브러리 포함

// GamblingGame 생성자
GamblingGame::GamblingGame(Player* p1, Player* p2) : player1(p1), player2(p2) {
    // player1과 player2 멤버 변수를 주어진 Player 포인터로 초기화
}

// 게임 시작 메서드
void GamblingGame::startGame() {
    while (true) {  // 무한 루프 시작
        if (playTurn(player1)) break;   // player1의 턴 진행, 승리 시 루프 종료
        if (playTurn(player2)) break;   // player2의 턴 진행, 승리 시 루프 종료
    }
}

// 각 플레이어의 턴을 진행하는 메서드
bool GamblingGame::playTurn(Player* player) {
    std::string enterKey;   // 사용자의 입력을 저장할 문자열 변수 선언
    std::cout << player->name << ": <Enter> 키 입력 >>";   // 현재 턴의 플레이어 이름과 입력 메시지 출력
    std::getline(std::cin, enterKey);   // 사용자로부터 입력을 받고 enterKey에 저장 - 엔터키 입력 대기

    // 플레이어의 랜덤 숫자 생성
    int num1 = player->getRandomNumber();   // 첫 번째 랜덤 숫자 생성
    int num2 = player->getRandomNumber();   // 두 번째 랜덤 숫자 생성
    int num3 = player->getRandomNumber();   // 세 번째 랜덤 숫자 생성

    std::cout << num1 << "  " << num2 << "  " << num3 << std::endl; // 생성된 숫자 출력

    // 승리 조건 확인
    if (num1 == num2 && num2 == num3) { // 세 숫자가 모두 같은 경우
        std::cout << player->name << "이(가) 승리했습니다!" << std::endl;   // 승리 메시지 출력
        return true;    // 게임 종료를 나타내는 true 반환
    }
    else {  // 세 숫자가 같지 않은 경우
        std::cout << "아쉽군요!" << std::endl;  // 패배 메시지 출력
        return false;   // 다음 턴으로 넘어감을 나타내는 false 반환
    }
}
