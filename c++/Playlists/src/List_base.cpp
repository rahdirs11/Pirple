#include "List_base.h"

List_base::List_base()
{
    //ctor
}

List_base::~List_base()
{
    //dtor
}

fstream List_base::openFile(string name) {
    fstream file;
    file.open(name + ".txt", ios::in);
    if (!file) {
        ofstream fileOpen(name);
        fileOpen.close();

        return fileOpen;
    }
    return file;
}
