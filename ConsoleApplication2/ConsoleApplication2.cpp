

#include <iostream>
#include <boost/align.hpp>
#include <random>
#include <vector>
#include <cmath>
#include <algorithm>

double getRandomFloatingPointBetween_progressive(int min, int max) {
	std::random_device rd; // uniformly-distributed integer random number generator
	std::mt19937 gen(rd()); //инициализируем Вихрь Мерсенна случайным стартовым числом
	std::uniform_real_distribution<> dis(min, max);//uniform distribution between min and max
	return dis(gen);
};

std::vector<float> vectorForRandom;

bool comp(float a, float b) {
	return abs(a) < abs(b);
}

void test_cases6() {
	for (int count = 0; count < 10; ++count)
	{
		vectorForRandom.push_back(getRandomFloatingPointBetween_progressive(-2, 2));
	};

}

int main()
{
	test_cases6();
	sort(vectorForRandom.begin(), vectorForRandom.end(),comp);
	for (int i = 0; i < 10; i++)
	{
		std::cout << vectorForRandom[i] << "\n";
	};
	std::cout << "\n";

}
