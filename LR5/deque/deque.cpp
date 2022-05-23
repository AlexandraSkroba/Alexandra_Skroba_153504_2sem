#include <iostream>
#include "deque.h"
#include <deque>
#include <iterator>

int main() {
	std::deque<int> a;
	for (int i = 0; i < 15; i++) {
		a.push_back(i);
	}

	auto it = std::deque<int>::iterator(a.begin());
	std::cout << *it <<"\n";

	a.resize(500, 5);
	std::cout << *it << "\n";

	/*a.push_front(4);
	std::cout << a.empty();
	for (int i = 0; i < 10000; i++) {
		a.push_back(i);
		a.push_front(i);
	}

	//a.resize(400,777);


	//a.push_front(12222222);
	//a.push_back(4325435);



	for (int i = 0; i < a.size(); i++) {
		std::cout << a.at(i) << "\n";
	}

	std::cout << "\n\n\n";

	/*auto i = deque<int>::Iterator(a.back());
	std::cout << *i << "\n";*/
	/*auto it = deque<int>::Iterator(a.front());
	std::cout << *it << "\n";
	it++;
	auto id = deque<int>::Iterator(a.front());
	if (it != id) {
		std::cout << "aye\n";
	}

	for (auto it = deque<int>::Iterator(a.front()); it != a.end(); it++) {
		std::cout << *it << "\n";
	}
	std::cout << "\n\n";
	
	it += 12;
	it -= 11;
	std::cout << *it << "\n\n";

	//std::cout << *it << "\n";

	//std::cout << a.size();
	a.clear();
	std::cout << a.size() << "\n";
	std::cout << a.max_size() << "\n\n";
	std::cout << a.empty(); */

	return 0;
}