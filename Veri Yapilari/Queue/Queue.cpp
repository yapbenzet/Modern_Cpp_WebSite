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
class Queue
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
	node* front;
	node* rear;
	int size;
	int capacity;
public:
	Queue(int incomingSize)
	{
		this->size = incomingSize;
		this->front = this->rear = nullptr;
		this->capacity = this->size;
	}
	~Queue() {
		delete front;
	}
	void enqueue(T incomingData) {
		if (this->isFull()) {
			std::cout << "Queue is Full!\n";
		}
		else if (this->isEmpty()) {
			this->front = new node(incomingData);
			this->rear = this->front;
			this->capacity--;
		}
		else {
			node* temp = new node(incomingData);
			this->rear->prev = temp;
			this->rear = temp;
			this->capacity--;
		}
	}
	T dequeue() {
		if (this->isEmpty()) {
			std::cout << "Queue is Empty!\n";
			return NULL;
		}
		else {
			node* temp = this->front;
			this->front = this->front->prev;
			this->capacity++;
			return temp->data;
		}
	}
	void display() {
		this->queuePrinter(this->front);
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
	void queuePrinter(node* temp) {
		if (temp == nullptr) {
			return;
		}
		std::cout << temp->data << "\n";
		temp = temp->prev;
		this->queuePrinter(temp);
	}
	T peek() {
		if (this->front == nullptr)
			return NULL;
		return this->front->data;
	}

};


int main()
{
	clock_t tStart = clock();
	Queue<MyObject> test(1000000);
	for (int i = 0; i < 1000001; i++)
	{
		test.enqueue(MyObject(i + 1));
	}
	std::cout << test.peek() << "\n";
	
	for (int i = 0; i < 1000001; i++)
	{
		test.dequeue();
	}
	test.display();
	printf("Time taken: %.4fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
}
