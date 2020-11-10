//
// Created by anqiren on 2020/11/10.
//
#include "pinyin.h"
#include <iostream>

int main() {
	std::string wstrIn = "你好12345我是demo123454@单独";
	std::vector<std::string> strOutV;

	Pinyin::GetPinyin(wstrIn, strOutV, true);
	for (int i = 0; i < strOutV.size(); i++) {
		std::cout << strOutV[i] << std::endl;
	}

	strOutV.clear();
	Pinyin::GetPinyin(wstrIn, strOutV);
	for (int i = 0; i < strOutV.size(); i++) {
		std::cout << strOutV[i] << std::endl;
	}
	return 0;
}

