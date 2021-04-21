#ifndef LIST_BASE_H
#define LIST_BASE_H

#include <vector>
#include <string>
#include <fstream>

using namespace std;
class List_base
{
    public:
        List_base();
        virtual ~List_base();
        virtual bool add(string name)=0;
        virtual bool deleteItem(string name)=0;
        virtual void display(string name);
    protected:
        virtual vector<string> sort(string name)=0;
        virtual bool check(string name);
        fstream openFile(string name);
    private:
};

#endif // LIST_BASE_H
