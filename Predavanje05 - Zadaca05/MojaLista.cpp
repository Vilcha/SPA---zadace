#include "MojaLista.h"

MojaLista::MojaLista()
{
	head = nullptr;
}

void MojaLista::push_back(int number)
{
	Node* n = new Node;
	n->data = number;
	n->next = head;
	head = n;
}
