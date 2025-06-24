#include <iostream>
using namespace std;


class Node
{
public:
    int info;
    Node * leftchild;
    Node *righchild;

    //constracture for the node class
    Node(){
        leftchild = nullptr;
        righchild= nullptr;

    }
