#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	freopen("input.txt", "r", stdin); // input �����Ϸ��� ���. ���ؿ� ����� �ּ�ó���ؾ���

	int n = 0; // array ���� ����
	int arr_num = 1; // ���ÿ� ���Ե� ī���� ����
	"�ڵ��ۼ����ּ���"; // ���� ����
	string result; // ����� ����� string �迭 ����
	cin >> n; // array ���� �Է� ����

	/*
		���ÿ��� ���� ���� �ٽ� ���ÿ� ���� �� ����
		���� ������ top���� ���� ���� target�� �ȴٸ� ���ϴ� ������ ���� �� ����
		�������� case�� �� 2���� ����
		case1 => ī���� ������ target���� ���� ���
		case2 => ī���� ������ target���� ū ���
	*/

	for (int i = 1; i <= n; ++i) {
		int target = 0; // ������ �� ������ ����
		cin >> target; // ���� �Է� �ޱ�
		
		//  Case1: ī���� ������ target���� �۴ٸ� ������ ������ ���ÿ� push����
		if ("�ڵ��ۼ����ּ���") {
			while ("�ڵ��ۼ����ּ���") {
				result.push_back('+'); // ���� ����� push�� ��� �ߴ��� ����ؾ� �ϱ� ������ '+' ���ڿ��� result �迭�� �־���
				"�ڵ��ۼ����ּ���";
				"�ڵ��ۼ����ּ���"; // ���� ���ǿ��� "1���� n������ ���� ���ÿ� �־��ٰ�" ��� ������ �����Ƿ� 1�� ����������
			}
			result.push_back('-'); // �� �־��ٸ� target�� ���� ������ top�� ��ġ�ϴ� ��Ȳ�� ���� pop���־� "���� ����"�� ����(�ڵ�󿡼� ������ �������� �ʴ´�)
			"�ڵ��ۼ����ּ���";
		}

		//Case2
		else {
			// ���� ���� ������ top�� target�� ���ٸ� case1�� ���� ������ pop���ش�
			if ("�ڵ��ۼ����ּ���") {
				result.push_back('-');
				"�ڵ��ۼ����ּ���";
			}
			// Case2���� ���� ������ top�� target�� ���� �ʴٸ� "�����" "Never" ���ü����� ���� �� ����
			else {
				cout << "NO";
				return 0;
			}
		}
	}

	"�ڵ��ۼ����ּ���";
	
	return 0;
}