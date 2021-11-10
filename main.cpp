#include <iostream>
#include "LinkedList.cpp"

using namespace std;

int main() {

    LinkedList<string>* linkFirst = new LinkedList<string>();
    LinkedList<string>* linkLast = new LinkedList<string>();

    //D-C-B-A

    linkFirst->addNodeFirst("Bahduhaosd");
    //linkFirst->addNodeFirst('C');
    //linkFirst->addNodeFirst('D');

    //A-B-C-D
    linkLast->addNodeLast("");
    linkLast->addNodeLast('B');
    linkLast->addNodeLast('C');
    linkLast->addNodeLast('D');

    char opc = 0;
    cout <<"1. Agregar al inicio \n"<<"2. Agregar al final \n"<<"3. Buscar nodo \n"<<"4. Buscar libro \n"<<"5.Insetar antes nodo\n"<<"6.Insertar despues nodo";
    cout<<opc;
    switch (opc != 7) {

        case 1:
            const std::string libro = "";
            cout<<"Digite libro a agregar";
            cout<<libro;

            linkFirst->addNodeFirst(libro);
            break;
        case 2:

    }
    for( string val : linkFirst->getLinkedList() ){
        cout<<val<<"-";
    }

    cout<<endl;

    for( char val : linkLast->getLinkedList() ){
        cout<<val<<"-";
    }

    cout<<endl;

    delete(linkFirst);

    delete( linkLast );


    return EXIT_SUCCESS;
}
