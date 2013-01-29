#ifndef _COS420_EDWARDS_LINKEDLIST_H_
#define _COS420_EDWARDS_LINKEDLIST_H_
#include <stdexcept>
#include <cassert>

template<typename T>
class LinkedList {
public:
	LinkedList() : first(NULL), count(0) { }

	virtual ~LinkedList() {
		while (numOfElements() > 0) {
			pop();
		}
		assert(numOfElements() == 0 && first == NULL);
	}

	void insert(const T& val) {
		if (numOfElements() >= 100)
			throw std::runtime_error("List is full.");

		first = new Node<T>(val, this->first);
		++count;
	}

	void pop() {
		if (first == NULL)
			throw std::runtime_error("List is empty.");

		Node<T>* oldFirst = first;
		first = first->next;
		delete oldFirst;
		--count;
	}

	T& front() const { 
		if (first == NULL)
			throw std::runtime_error("List is empty.");

		return first->val;
	}

	int numOfElements() const { return (int)count; }
	int isEmpty() const { return this->numOfElements() == 0; }

private:
	template<typename T>
	struct Node {
		Node(const T& val, Node<T>* next) : val(val), next(next) { }

		T val;
		Node<T>* next;
	};

	Node<T>* first;
	size_t count;
};


#endif // _COS420_EDWARDS_LINKEDLIST_H_
