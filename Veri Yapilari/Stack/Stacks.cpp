#include "pch.h"
#include <iostream>
#include <time.h>
class MyObject {
public:
	int data;
	MyObject() = default;
	MyObject(int incomingData) : data(incomingData)
	{
	}

	friend std::ostream& operator<<(std::ostream& out, const MyObject& rhs);


	bool operator==(const MyObject& rhs)
	{
		if (this->data == rhs.data)
			return true;
		return false;
	}

};
std::ostream& operator<<(std::ostream& out, const MyObject& rhs)
{
	out << rhs.data;
	return out;
}

template <typename T>
class Stack
{
	struct node
	{
		T data;
		node* prev = {};
		node(T incomingData) :data(incomingData) {}
		node() = default;
		node(node&&) = default;
		node(const node&) = default;
		~node() = default;
	};
	node* root;
	node* SP;
	int size;
	int capacity;
public:
	Stack(int incomingSize)
	{
		this->root = nullptr;
		this->size = incomingSize;
		this->SP = this->root;
		this->capacity = this->size;
	}
	~Stack() {
		delete root;
	}
	void push(T incomingData) {
		if (this->isFull()) {
			std::cout << "StackOverFlow!\n";
		}
		else {
			node* temp = new node(incomingData);
			temp->prev = this->SP;
			this->SP = temp;
			this->capacity--;
		}
	}
	T pop() {
		if (this->isEmpty()) {
			std::cout << "StackUnderFlow!\n";
			return NULL;
		}
		else {
			node* temp = this->SP;
			this->SP = this->SP->prev;
			this->capacity++;
			return temp->data;
		}
	}
	void display() {
		this->stackPrinter(this->SP);
	}
	bool isFull() {
		if (this->capacity == 0) {
			return true;
		}
		else
			return false;
	}
	bool isEmpty() {
		if (this->capacity == this->size)
			return true;
		else
			return false;
	}
	void stackPrinter(node* temp) {
		if (temp == nullptr) {
			return;
		}
		std::cout << temp->data << "\n";
		temp = temp->prev;
		this->stackPrinter(temp);
	}
	T peek() {
		if (this->SP == nullptr)
			return NULL;
		return this->SP->data;
	}

};

int main()
{
	clock_t tStart = clock();
	Stack<MyObject> test(300000);
	for (int i = 0; i < 300001; i++)
	{
		test.push(MyObject(i + 1));
	}
	std::cout << test.peek() << "\n";
	for (int i = 0; i < 300001; i++)
	{
		test.pop();
	}
	test.display();
	std::cout << test.peek() << "\n";
	printf("Time taken: %.4fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
}
