#pragma once
#include"StudentNode.h"
class StudentList
{
public:
	StudentList();
	~StudentList();
	void setHead(StudentNode* head);
	StudentNode* getHead();

	void setTail(StudentNode* tail);
	StudentNode* getTail();

	void setSize(int size);
	int getSize();

	void add(string name, int id);
	void search(int id);
	void erase(int);
	void ToString();
private:
	StudentNode* head, * tail;
	int size;
};

