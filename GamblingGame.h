#ifndef GAMBLINGGAME_H  // ��� ���� �ߺ� ���� ����
#define GAMBLINGGAME_H

#include "Player.h" // Player.h ��� ������ �����Ͽ� Player Ŭ���� ���Ǹ� ���

class GamblingGame { // GamblingGame Ŭ���� ����
public: // �Ʒ��� ����� public ���� ������, �ܺο��� ���� ����
    Player* player1; // ù ��° �÷��̾ ����Ű�� ������
    Player* player2; // �� ��° �÷��̾ ����Ű�� ������

    GamblingGame(Player* p1, Player* p2); // ������ ���� - �� �÷��̾ �ʱ�ȭ�ϴ� �޼���
    void startGame(); // ������ �����ϰ� �����ϴ� �޼��� ���� - ��ȯ �� ����
    bool playTurn(Player* player); // �־��� �÷��̾ ���� �����ϴ� �޼��� ���� - �¸� ���θ� bool�� ��ȯ
};

#endif // GAMBLINGGAME_H // ��� ���� ��
