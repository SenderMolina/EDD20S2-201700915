#include "StudentNode.h"
#include<iostream>
#include<string>
using namespace std;

StudentNode::StudentNode(string name, int id) {
	this->name = name;
	this->id = id;
	this->next = NULL;
}
StudentNode::~StudentNode() {
	
}

void StudentNode::setName(string name) {
	this->name = name;
}
string StudentNode::getName() {	
	return name;
}

void StudentNode::setId(int id) {
	this->id = id;
}
int StudentNode::getId() {
	return id;
}

void StudentNode::setNext(StudentNode* next) {
	this->next = next;
}
StudentNode* StudentNode::getNext() {
	return this->next;
}