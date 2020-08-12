#include "StudentList.h"
#include "StudentNode.h"
#include<iostream>
#include<string>
using namespace std;

StudentList::StudentList() {
	this->head = NULL;
	this->tail = NULL;
	this->size = 0;
}
StudentList::~StudentList() {
	StudentNode* aux;
	StudentNode* temp;
	aux = this->head;
	while (aux != NULL)
	{
		temp = aux->getNext();
		delete aux;
		aux = temp;
	}
}
void StudentList::setHead(StudentNode* head) {
	this->head = head;
}
StudentNode* StudentList::getHead() {
	return this->head;
}

void StudentList::setTail(StudentNode* tail) {
	this->tail = tail;
}
StudentNode* StudentList::getTail() {
	return this->tail;
}

void StudentList::setSize(int size) {
	this->size = size;
}
int StudentList::getSize() {
	return this->size;
}

void StudentList::add(string name, int id){
	StudentNode* student = new StudentNode(name, id);
	if (head == NULL)
	{
		head = tail = student;
	}
	else {
		tail->setNext(student);
		tail = student;
		student->setNext(NULL);
	}
	size++;
	cout << "\n\n\n\n";
	cout << "\t\t\t ! Estudiante Agregado Exitosamente !";
	cout << "\n\n\n\n";

}

void StudentList::search(int id){
	StudentNode* temp = this->head;
	bool encontrado = false;
	while (temp != NULL) {
		if (temp->getId() == id)
		{
			cout << "\n\n\n";
			cout << "El estudiante es:" << endl;
			cout << "\n";
			cout <<"\t\t" <<temp->getId() << "\t" << temp->getName()<<endl;
			cout << "\n\n\n";
			encontrado = true;
			break;
		}
		temp = temp->getNext();
	}
	if (!encontrado)
	{
		cout << "\n\n\n" << "\tEl estudiante que busca no existe." << "\n\n\n";
	}
}

void StudentList::erase(int id) {
	StudentNode* temp = this->head;
	StudentNode* aux = NULL;
	bool encontrado = false;
	while (temp != NULL)
	{
		if (temp->getId() == id)
		{
			encontrado = true;
			if (temp == head)
			{
				head = temp->getNext();
				temp->setNext(NULL);
				break;
			}
			else if (temp == tail) {
				tail = aux;
				aux->setNext(NULL);
			}
			else {
				aux->setNext(temp->getNext());
				temp->setNext(NULL);
			}
			
		}
		aux = temp;
		temp = temp->getNext();
	}
	if(encontrado){
		cout << "\n\n\n\n";
		cout << "\t\t\t ! Estudiante Eliminado Exitosamente !";
		cout << "\n\n\n\n";
		size--;
	}
	else {
		cout << "\n\n\n\n";
		cout << "\t\t\t ! Estudiante Deseado No Existe!";
		cout << "\n\n\n\n";
	}
	
	
}

void StudentList::ToString() {
	StudentNode* temp;
	temp = this->head;

	if (head == NULL)
	{
		cout << "\n\n\n\n";
		cout << "No hay estudiantes agregados.";
		cout << "\n\n\n\n";
	}
	else {
		cout << "|---------------- Estudiantes Registrados----------------|";
		cout << "\n\n\n\n";
		while (temp != NULL)
		{
			cout << temp->getId() << "\t" <<temp->getName()<<endl;
			temp = temp->getNext();
		}
		cout << "\n\n\n\n";
	}
	delete temp;
}
