#pragma once
class MojaLista
{
public:
	MojaLista();
	void push_back(int number);
private:
	struct Node {
		int data;
		Node* next;
	};
	Node* head;
};

