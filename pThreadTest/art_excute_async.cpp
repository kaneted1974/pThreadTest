#include <iostream>
#include <thread>
#include "art_excute_async.h"

using namespace std;

int end_flag_;

int func1(int x) {
	return x * 1;
}

int func2(int x) {
	return x * 2;
}

void art_excute()
{
	int (*p_func)(int);  // func pointer

	cout << func1(20);
	cout << func2(20);

	p_func = func1;
	cout << p_func(40);
	p_func = func2;
	cout << p_func(40);

	while (end_flag_) {
	};
	cout << "\nThread finishing!\n";
}

void art_excute_async()
{
	end_flag_ = 1;

	cout << "\nart_excute_async\n";

	thread threadArt(art_excute);

	cout << "\nThread kicked!\n";

	for (int i = 0; i < 1000; i++) {
		cout << ".";
	}
	//terminate();
	end_flag_ = 0;
	for (int i = 0; i < 1000; i++) {
		cout << "+";
	}

	threadArt.join();
	cout << "\nThread finished!\n";
	return;
}

