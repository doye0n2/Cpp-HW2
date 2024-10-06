// main.cpp
#include "Player.h" //Player Ŭ���� ��� ���� ����
#include "GamblingGame.h" // GamblingGame Ŭ���� ��� ���� ����
#include <iostream> // ǥ�� �Է� �� ����� ���� ���̺귯��
#include <ctime> // �ð� ���� �Լ� ����� ���� ���̺귯�� (���� �õ� �ʱ�ȭ)
#include <string> // ���ڿ� ó���� ���� ���̺귯��

int main() {
    srand((unsigned int)time(0)); // ���� �õ� �ʱ�ȭ

    // ���� ���� ���� ���
    std::cout << "***** ���� ������ �����մϴ�. *****" << std::endl;

    // �÷��̾� �̸� �Է�
    std::string player1Name, player2Name;
    std::cout << "ù��° ���� �̸�>>";
    std::getline(std::cin, player1Name); // ù ��° �÷��̾� �̸� �Է¹���
    std::cout << "�ι�° ���� �̸�>>";
    std::getline(std::cin, player2Name); // �� ��° �÷��̾� �̸� �Է¹���

    // �÷��̾� ��ü ����
    Player player1(player1Name); // ù ��° �÷��̾� ��ü ���� (�̸��� �����ڿ� ����)
    Player player2(player2Name); // �� ��° �÷��̾� ��ü ����

    // ���� ��ü ���� �� ���� ����
    GamblingGame game(&player1, &player2); // �� �÷��̾� ��ü�� �����ͷ� �����Ͽ� ���� ��ü ����
    game.startGame(); // ���� ����

    return 0; //���α׷� ����
}
