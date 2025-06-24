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
    
};
class BinaryTree
{
public :
    Node *ROOT;
    BinaryTree()
    {
        ROOT= nullptr;
    }
    void insert ()
    {
        int x;
        cout<<"masulan nili :";
        cin>>x;

        //step 1
        Node *newNode =new Node();
        //step2
        newNode->info =x;
       