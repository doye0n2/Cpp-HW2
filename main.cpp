// main.cpp
#include "Player.h" //Player 클래스 헤더 파일 포함
#include "GamblingGame.h" // GamblingGame 클래스 헤더 파일 포함
#include <iostream> // 표준 입력 및 출력을 위한 라이브러리
#include <ctime> // 시간 관련 함수 사용을 위한 라이브러리 (랜덤 시드 초기화)
#include <string> // 문자열 처리를 위한 라이브러리

int main() {
    srand((unsigned int)time(0)); // 랜덤 시드 초기화

    // 게임 시작 문구 출력
    std::cout << "***** 갬블링 게임을 시작합니다. *****" << std::endl;

    // 플레이어 이름 입력
    std::string player1Name, player2Name;
    std::cout << "첫번째 선수 이름>>";
    std::getline(std::cin, player1Name); // 첫 번째 플레이어 이름 입력받음
    std::cout << "두번째 선수 이름>>";
    std::getline(std::cin, player2Name); // 두 번째 플레이어 이름 입력받음

    // 플레이어 객체 생성
    Player player1(player1Name); // 첫 번째 플레이어 객체 생성 (이름을 생성자에 전달)
    Player player2(player2Name); // 두 번째 플레이어 객체 생성

    // 게임 객체 생성 및 게임 시작
    GamblingGame game(&player1, &player2); // 두 플레이어 객체를 포인터로 전달하여 게임 객체 생성
    game.startGame(); // 게임 시작

    return 0; //프로그램 종료
}
