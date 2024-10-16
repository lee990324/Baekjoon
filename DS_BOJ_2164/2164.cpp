#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	//freopen("input.txt", "r", stdin); // input �����Ϸ��� ���. ���ؿ� ����� �ּ�ó���ؾ���

	int N = 0; // N���� ī��
	queue<int> Q; // ť ����

	cin >> N; // �Է� �ޱ�

	for (int i = 1; i <= N; ++i) Q.push(i); // ī�带 ������� ť�� �ֱ�

	/*
		�ش� ���������� 2���� ��Ģ���� ī�带 ������ ����
		ù��° ��Ģ�� �ܼ��� => ���� ���� ī�带 ����
		�ι�° ��Ģ�� �׳� ������ �ȉ� => ��� ���ξ��ٰ� �ٽ� ���� ������ �־������
	*/

	// ť�� ����� 1�� �Ǵ� ���� ����
	while (Q.size() != 1) {
		// Rule-1: ���� ���� ī�� ����
		Q.pop();
		// Rule-2: �� ���� �������� ī�带 ���� �Ʒ��� �ִ� ī�� ������ �ű�(�׳� ������ �ȵŤ�~)
		int top_val = Q.front(); // ���� ���� ī��� ������ �ȵǱ� ������ top_val�� ��Ƶд�
		Q.pop(); // ���� ���� ī��� ���� ������ �Ǳ� ������ ����
		Q.push(top_val); // ���� ���� ī�� �ٽ� �־���
	}

	cout << Q.front();
	return 0;
}