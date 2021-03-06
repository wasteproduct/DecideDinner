// DecideDinner.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <random>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	enum Restaurant
	{
		KFC,
		Uncle,
		RamenChicken,
		DonkatsuContainer,
		Pasta,
		Tatami,
		JapaneseRamen,
		Chinese,
		PigIntestineSoup,
		//Maru
	};

	default_random_engine menu((unsigned int)time(nullptr));

	uniform_int_distribution<int>dinner(KFC, PigIntestineSoup);

	Restaurant dinnerMenu = (Restaurant)dinner(menu);

	char str[128];
	memset(str, NULL, 128);

	switch (dinnerMenu)
	{
	case Restaurant::KFC:
		strncpy_s(str, "Kentucky Fucking Chicken", 128);
		break;
	case Restaurant::Uncle:
		strncpy_s(str, "경양식", 128);
		break;
	case Restaurant::RamenChicken:
		strncpy_s(str, "닭꼬치와 라면", 128);
		break;
	case Restaurant::DonkatsuContainer:
		strncpy_s(str, "돈까스 창고", 128);
		break;
	case Restaurant::Pasta:
		strncpy_s(str, "파스타", 128);
		break;
	case Restaurant::Tatami:
		strncpy_s(str, "타타미", 128);
		break;
	case Restaurant::JapaneseRamen:
		strncpy_s(str, "일본 라면", 128);
		break;
	case Restaurant::Chinese:
		strncpy_s(str, "미성", 128);
		break;
	case Restaurant::PigIntestineSoup:
		strncpy_s(str, "돼지 창자..가 아니고 순대국", 128);
		break;
	/*case Restaurant::Maru:
		strncpy_s(str, "마루칼국수", 128);
		break;*/
	}

	cout << str << endl;

    return 0;
}

