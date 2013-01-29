#include "LinkedList.h"
#include <cassert>

int main(int argc, const char** argv) {
	LinkedList<int> myList;
	for (int i = 0; i < 100; ++i) {
		myList.insert(i);
		assert(myList.front() == i);
	}

	try {
		myList.insert(101); // Exception is thrown.
		assert(false); // We shouldn't get here.
	}
	catch (const std::exception&) {
		assert(myList.numOfElements() == 100);
	}
	return 0;
}
