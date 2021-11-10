#include <iostream>
#include "LinkedList.cpp"

using namespace std;

int main() {

    LinkedList<string>* linkFirst = new LinkedList<string>();
    LinkedList<string>* linkLast = new LinkedList<string>();



    char opc = 0;
        cout <<"1. Agregar al inicio \n"<<"2. Agregar al final \n"<<"3. Buscar nodo \n"<<"4. Buscar libro \n"<<"5.Insetar antes nodo\n"<<"6.Insertar despues nodo";
        cin>>opc;
        switch (opc != 7)
        {

            case 1: {
                std::string libro = "";
                cout << "Digite libro a agregar";
                cin >> libro;

                linkFirst->addNodeFirst(libro);
                for (string val: linkFirst->getLinkedList()) {
                    cout << val << "-";
                }
                cout << endl;
            }
                break;

            case 2: {
                std::string libro1 = "";
                cout << "Digite libro a agregar";
                cin >> libro1;

                linkLast->addNodeLast(libro1);

                for (string val: linkLast->getLinkedList()) {
                    cout << val << "-";
                }

                cout << endl;
            }
                break;
            case 3:
            {

            }
            break;
        }






    delete(linkFirst);

    delete( linkLast );


    return EXIT_SUCCESS;
}
