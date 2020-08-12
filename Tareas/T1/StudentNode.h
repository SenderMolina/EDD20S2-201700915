#pragma once
#include<iostream>
#include"Student.h";
using namespace std;

class StudentNode
{
public:

	StudentNode(string name, int id);
	~StudentNode();

	void setName(string name);
	string getName();

	void setId(int id);
	int getId();

	void setNext(StudentNode* next);
	StudentNode* getNext();
private:
	string name;
	int id;
	StudentNode* next;
};

