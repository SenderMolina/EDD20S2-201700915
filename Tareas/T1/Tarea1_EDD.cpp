#include<iostream>
#include <string>
#include"StudentNode.h";
#include"StudentList.h";
using namespace std;
StudentList* students = new StudentList();
string name;
int id;

//Ingresar el nombre y carné del estudiante y crear el nuevo estudiante
void ingresarEstudiante() {
    
    cout << "|---------- Nuevo Estudiante ----------|" << endl;
    cout << endl;
    cout << "Ingrese el nombre de Estudiante: ";
    getline(cin, name);
    cout << "Ingrese el carne de Estudiante: ";
    cin >> id;
    students->add(name,id);
    
}

void searchStudent() {
    
    cout << "|---------- Buscar Estudiante ----------|" << endl;
    cout << "\nIngrese el Carne de Estudiante: ";
    cin >> id;
    students->search(id);
}
void delStudent() {
    
    cout << "|---------- Eliminar Estudiante ----------|" << endl;
    cout << "\nIngrese el Carne de Estudiante: ";
    cin >> id;
    students->erase(id);
}

int main() {
    int opcion;
    do {
        cout << "|------------------ Gestion de Estudiantes ------------------|" << endl;
        cout << "|      1. Insertar nuevo estudiante                          |" << endl;
        cout << "|      2. Buscar estudiante                                  |" << endl;
        cout << "|      3. Eliminar Estudiante                                |" << endl;
        cout << "|      4. Mostrar Estudiantes                                |" << endl;
        cout << "|      5. Salir                                              |" << endl;
        cout << "|------------------------------------------------------------|" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;
        cout << "\n\n\n";
        cin.ignore();

        switch (opcion) {
        case 1:
            ingresarEstudiante();
            break;
        case 2:
            searchStudent();
            break;
        case 3:
            delStudent();
            break;
        case 4:
            students->ToString();
            break;
        default:
            cout << "\n\n\n Esa opción no existe\n\n\n";
            break;
        }
        
    } while (opcion != 5);

    delete students;
    system("pause");
    return 0;
}