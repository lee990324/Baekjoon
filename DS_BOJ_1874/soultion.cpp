#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	freopen("input.txt", "r", stdin); // input 복붙하려고 사용. 백준에 제출시 주석처리해야함

	int n = 0; // array 길이 변수
	int arr_num = 1; // 스택에 들어가게될 카운터 변수
	"코드작성해주세요"; // 스택 선언
	string result; // 결과를 담아줄 string 배열 선언
	cin >> n; // array 길이 입력 받음

	/*
		스택에서 뽑은 수를 다시 스택에 넣을 수 없음
		따라서 스택의 top보다 작은 수가 target이 된다면 원하는 수열을 만들 수 없음
		문제에서 case는 총 2개로 나뉨
		case1 => 카운터 변수가 target보다 작은 경우
		case2 => 카운터 변수가 target보다 큰 경우
	*/

	for (int i = 1; i <= n; ++i) {
		int target = 0; // 만들어야 할 수열의 원소
		cin >> target; // 원소 입력 받기
		
		//  Case1: 카운터 변수가 target보다 작다면 같아질 때까지 스택에 push해줌
		if ("코드작성해주세요") {
			while ("코드작성해주세요") {
				result.push_back('+'); // 추후 결과로 push를 몇번 했는지 출력해야 하기 때문에 '+' 문자열을 result 배열에 넣어줌
				"코드작성해주세요";
				"코드작성해주세요"; // 문제 조건에서 "1부터 n까지의 수를 스택에 넣었다가" 라는 조건이 있으므로 1씩 증가시켜줌
			}
			result.push_back('-'); // 다 넣었다면 target과 현재 스택의 top이 일치하는 상황임 따라서 pop해주어 "스택 수열"을 만듬(코드상에서 실제로 만들지는 않는다)
			"코드작성해주세요";
		}

		//Case2
		else {
			// 만약 현재 스택의 top과 target이 같다면 case1과 같은 원리로 pop해준다
			if ("코드작성해주세요") {
				result.push_back('-');
				"코드작성해주세요";
			}
			// Case2에서 현재 스택의 top과 target이 같지 않다면 "절대로" "Never" 스택수열을 만들 수 없음
			else {
				cout << "NO";
				return 0;
			}
		}
	}

	"코드작성해주세요";
	
	return 0;
}