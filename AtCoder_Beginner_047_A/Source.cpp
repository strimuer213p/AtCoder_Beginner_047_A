/*
��蕶
���v���c�t���ɒʂ� 2 �l�̎q�����L�����f�B�[�̎�荇�������Ă��܂��B
3 �̃L�����f�B�[�p�b�N������A���ꂼ��̃p�b�N�ɂ̓L�����f�B�[�� a, b, c �����Ă��܂��B
���ѐ搶�͂��� 3 �̃p�b�N���A�L�����f�B�[�̌����������Ȃ�悤�� 2 �l�ɕ����悤�Ƃ��Ă��܂��B���̂悤�ȕ��������\���ǂ����𔻒肵�Ă��������B
�������A�L�����f�B�[���p�b�N������o�����Ƃ͂ł����A���ꂼ��̃p�b�N�����̂܂܂ǂ��炩�̎q���ɂ�����K�v������܂��B
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

	std::sort(pack.begin(), pack.end()); //����set�͎g���Ȃ�(�d�Ȃ�ꍇ������)

	if (pack[0] + pack[1] == pack[2]) {  //sort�����̂���������Ƒ傫�������v����Ηǂ�
		std::cout << "Yes" << std::endl;
	}
	else {
		std::cout << "No" << std::endl;
	}

	return 0;
}