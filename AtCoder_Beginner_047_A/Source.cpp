/*
問題文
競プロ幼稚園に通う 2 人の子供がキャンディーの取り合いをしています。
3 個のキャンディーパックがあり、それぞれのパックにはキャンディーが a, b, c 個入っています。
えび先生はこの 3 個のパックを、キャンディーの個数が等しくなるように 2 人に分けようとしています。そのような分け方が可能かどうかを判定してください。
ただし、キャンディーをパックから取り出すことはできず、それぞれのパックをそのままどちらかの子供にあげる必要があります。
*/

#include<iostream>
#include<vector>
#include<algorithm>

int main() {
	int temp;
	std::vector<int> pack;

	for (int i = 0; i < 3; i++) {
		std::cin >> temp;

		pack.push_back(temp);
	}

	std::sort(pack.begin(), pack.end()); //問よりsetは使えない(重なる場合がある)

	if (pack[0] + pack[1] == pack[2]) {  //sortしたのち小さい二つと大きい一つが一致すれば良い
		std::cout << "Yes" << std::endl;
	}
	else {
		std::cout << "No" << std::endl;
	}

	return 0;
}