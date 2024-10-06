#include "GamblingGame.h"   // GamblingGame Ŭ������ ��� ���� ����
#include <iostream> // ����� ��Ʈ���� ���� ���̺귯�� ����
#include <string>   // ���ڿ� ó���� ���� ���̺귯�� ����

// GamblingGame ������
GamblingGame::GamblingGame(Player* p1, Player* p2) : player1(p1), player2(p2) {
    // player1�� player2 ��� ������ �־��� Player �����ͷ� �ʱ�ȭ
}

// ���� ���� �޼���
void GamblingGame::startGame() {
    while (true) {  // ���� ���� ����
        if (playTurn(player1)) break;   // player1�� �� ����, �¸� �� ���� ����
        if (playTurn(player2)) break;   // player2�� �� ����, �¸� �� ���� ����
    }
}

// �� �÷��̾��� ���� �����ϴ� �޼���
bool GamblingGame::playTurn(Player* player) {
    std::string enterKey;   // ������� �Է��� ������ ���ڿ� ���� ����
    std::cout << player->name << ": <Enter> Ű �Է� >>";   // ���� ���� �÷��̾� �̸��� �Է� �޽��� ���
    std::getline(std::cin, enterKey);   // ����ڷκ��� �Է��� �ް� enterKey�� ���� - ����Ű �Է� ���

    // �÷��̾��� ���� ���� ����
    int num1 = player->getRandomNumber();   // ù ��° ���� ���� ����
    int num2 = player->getRandomNumber();   // �� ��° ���� ���� ����
    int num3 = player->getRandomNumber();   // �� ��° ���� ���� ����

    std::cout << num1 << "  " << num2 << "  " << num3 << std::endl; // ������ ���� ���

    // �¸� ���� Ȯ��
    if (num1 == num2 && num2 == num3) { // �� ���ڰ� ��� ���� ���
        std::cout << player->name << "��(��) �¸��߽��ϴ�!" << std::endl;   // �¸� �޽��� ���
        return true;    // ���� ���Ḧ ��Ÿ���� true ��ȯ
    }
    else {  // �� ���ڰ� ���� ���� ���
        std::cout << "�ƽ�����!" << std::endl;  // �й� �޽��� ���
        return false;   // ���� ������ �Ѿ�� ��Ÿ���� false ��ȯ
    }
}
