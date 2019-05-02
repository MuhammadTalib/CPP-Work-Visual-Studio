#pragma once
class Node
{
public:
	Node()
	{
		this->Next = NULL;
	}
	Node(Node &N)
	{
		this->Next = N.Next;
	}
	virtual void set(void*,void*)=0;
	virtual void display() = 0;
	
	Node *Next;
};