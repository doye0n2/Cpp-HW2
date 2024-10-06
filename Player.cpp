// Player.cpp
#include "Player.h" // Player Ŭ���� ���Ǹ� ������ ��� ����
#include <cstdlib> // ���� ���ڸ� �����ϱ� ���� rand() �Լ��� ����ϱ� ���� ����

// Player ������
Player::Player(std::string name) : name(name) {}
// Player Ŭ������ ������ ����
// �Է¹��� �̸��� Ŭ���� ��� ���� name�� �Ҵ���
// 'name(name)'�� ������ �ʱ�ȭ ����Ʈ�� �Ű������� ���� ���� ��� ������ ���� �Ҵ��ϴ� ȿ������ �����


// ���� ���� ���� �Լ�
int Player::getRandomNumber() {
    return rand() % 3; // 0���� 2������ ���� ���ڸ� �����Ͽ� ��ȯ. rand()�� ū ������ ���ڸ� �����ϰ� % 3�� ���� �� ������ 0, 1, 2�� ����
}