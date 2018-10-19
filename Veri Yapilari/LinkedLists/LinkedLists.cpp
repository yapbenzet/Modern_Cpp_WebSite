#include "pch.h"
#include <iostream>
#include <exception>

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
class DoublyLinkedList
{
	template<class T> bool comp(T a, T b) {
		if (a.data == b.data)
		{
			return true;
		}
		return false;
	}
	struct node
	{
		T data;
		node* next = {};
		node* prev = {};
		node(T incomingData) :data(incomingData) {}
		node() = default;
		node(node&&) = default;
		node(const node&) = default;
		~node() {
			delete next;
			delete prev;
		}
	};
	node* root;
	node* pointer;
public:
	DoublyLinkedList() : root{}, pointer{}
	{
	}
	~DoublyLinkedList(){
		delete root;
	}
	void insert(T incomingData) {
		if (root == nullptr) {
			root = new node(incomingData);
			pointer = new node;
			pointer = root;
			
		}
		else{
			pointer->next = new node(incomingData);
			pointer->next->prev = pointer;
			pointer = pointer->next;
		}
	}
	void insert(T incomingData, node* prevNode) {
		if (prevNode == nullptr or prevNode->next == nullptr) {
			std::cout << ("Process not supported\n");
			return;
		}
		else 
		{
			node* nextNode = prevNode->next;
			node* currentNode = new node(incomingData);
			prevNode->next = currentNode;
			currentNode->prev = prevNode;
			currentNode->next = nextNode;
			nextNode->prev = currentNode;
			pointer = pointer->next;
		}
		
	}
	node* last() {
		return pointer;
	}
	void listprint() {
		node* temp = this->root;
		while (temp != nullptr) {
			std::cout << temp->data << "\n";
			temp = temp->next;
		}
	}
	node* find(T incomingData) {
		node* temp = this->root;
		while (temp != nullptr) {
			if (comp(temp->data, incomingData)) {
				return temp;
			}
			temp = temp->next;
		}
		return nullptr;
	}
	bool isNull(node* incomingNode) {
		if (incomingNode == nullptr) {
			true;
		}
		return false;
	}
	node* first() {
		return this->root;
	}
	bool isFirst(node* incomingNode) {
		if (incomingNode == this->root) {
			return true;
		}
		return false;
	}
	bool isLast(node* incomingNode) {
		if (incomingNode == this->last()) {
			return true;
		}
		return false;
	}
	void remove(T incomingData) {
		node* dataToBeDeleted = this->root;
		std::cout << "Your Data = " << incomingData << "\n";
		while (!(dataToBeDeleted->data == incomingData)) {
			dataToBeDeleted = dataToBeDeleted->next;
		}
		std::cout << "Data To Be Deleted = " << dataToBeDeleted->data << "\n";
		if (this->isFirst(dataToBeDeleted)) {
			this->root = dataToBeDeleted->next;
			this->root->prev = nullptr;
			dataToBeDeleted->next = nullptr;
			pointer = pointer->prev;
		}
		else if (this->isLast(dataToBeDeleted)) {
			node* temp = this->last()->prev;
			this->last()->prev = nullptr;
			temp->next = nullptr;
			pointer = pointer->prev;
		}
		else
		{
			node* previousNode = dataToBeDeleted->prev;
			node* nextNode = dataToBeDeleted->next;
			previousNode->next = nextNode;
			nextNode->prev = previousNode;
			dataToBeDeleted->next = dataToBeDeleted->prev = nullptr;
			pointer = pointer->prev;
		}
	}
	
};


template<class T>
class SinglyLinkedList 
{
	template<class T> bool comp(T a, T b) {
		if (a.data == b.data)
		{
			return true;
		}
		return false;
	}
	struct node 
	{
		T data;
		node* next = {};
		node() = default;
		node(T data) : data(data) {}
		node(const node&) = default;
		node(node&&) = default;
		~node()
		{
			delete next;
		}
	};
	node *root;
	node *pointer;

public:
	SinglyLinkedList() : root{}
	{
	}

	~SinglyLinkedList()
	{
		delete root;
	}

	void insert(T data)
	{
		if (root == nullptr)
		{
			root = new node(data);
			pointer = root;
		}
		else 
		{
			pointer->next = new node(data);
			pointer = pointer->next;
		}

	}

	void insert(T data, node* prev) 
	{
		if (prev == nullptr)
		{
			throw std::out_of_range("Previous node not found!");
		}
		node* temp = prev->next;
		prev->next = new node(data);
		prev->next->next = temp;
	}

	void listprint() {
		node* temp = this->root;
		while (temp != nullptr)
		{
			std::cout << temp->data << "\n";
			temp = temp->next;
		}
	}
	node* last() {
		return pointer;
	}
	node* find(T incomingData) {
		node* temp = this->root;
		while (temp != nullptr) {
			if (comp(temp->data, incomingData)) {
				return temp;
			}
			temp = temp->next;
		}
		return nullptr;
	}
	bool isNull(node* incomingNode) {
		if (incomingNode == nullptr) {
			true;
		}
		return false;
	}
	node* first() {
		return this->root;
	}
	bool isFirst(node* incomingNode) {
		if (incomingNode == this->root) {
			return true;
		}
		return false;
	}
	bool isLast(node* incomingNode) {
		if (incomingNode == this->last()) {
			return true;
		}
		return false;
	}
	void remove(T incomingData) {
		node* dataToBeDeleted = this->root;
		std::cout <<"Your Data = " << incomingData << "\n";
		node* preValue = nullptr;
		while (!(dataToBeDeleted->data == incomingData)) {
			preValue = dataToBeDeleted;
			dataToBeDeleted = dataToBeDeleted->next;
		}
		std::cout << "Data To Be Deleted = " << dataToBeDeleted->data << "\n";
		if (this->isFirst(dataToBeDeleted)) {
			this->root = dataToBeDeleted->next;
			dataToBeDeleted->next = nullptr;
		}
		else if (this->isLast(dataToBeDeleted)) {
			preValue->next = nullptr;
			dataToBeDeleted = nullptr;
		}
		else
		{
			preValue->next = dataToBeDeleted->next;
			dataToBeDeleted = nullptr;
		}
	}

};

int main()
{
	SinglyLinkedList<MyObject> deneme;
	DoublyLinkedList<MyObject> test;
}

