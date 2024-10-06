// Player.h
#ifndef PLAYER_H // ��ó���� ���ù�: PLAYER_H�� ���ǵ��� ���� ��쿡�� �Ʒ� �ڵ带 ����
#define PLAYER_H // PLAYER_H�� �����Ͽ� �ߺ� ������ ���� (��� ����)

#include <string> // std::string Ŭ������ ����ϱ� ���� ��� ����

class Player {
public:
    std::string name; // �÷��̾��� �̸��� �����ϴ� ��� ����
    Player(std::string name); // �÷��̾��� �̸��� �ʱ�ȭ�ϴ� ������
    int getRandomNumber(); // ���� ���ڸ� ��ȯ�ϴ� ��� �Լ� (���� ���ӿ��� ���)
};

#endif // ��� ������ ���� �ǹ��ϸ�, PLAYER_H�� �ߺ� ���Ե��� �ʵ��� ����
