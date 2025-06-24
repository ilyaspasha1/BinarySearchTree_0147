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
        //step 3
        newNode-> leftchild= nullptr;
        newNode->righchild =nullptr;
        //step 4
        Node *parent = nullptr;
        Node *currentNode =nullptr;
        search(x,parent,currentNode);

        //step5
        if (parent = nullptr)
        {
            //5a mark the new node as roota
            ROOT = newNode;

            //5b : exit 
            return;
        }
        //step 7 if the value in the data fieldm of new node is greater than that of the parent
        else if (x > parent->info)
        {
            //7a make the righ child of parent  point to the newe node 
            parent->righchild =newNode;
            //7b 
            return;
        }
   

    };

    void search(int element ,Node *&parent, Node *&currentNode)
    {
        //this function sesrch  the currentnode ogf the specifiead node as well as the current node of its parent 
        currentNode = ROOT;
        parent =nullptr;
        while ((currentNode != nullptr )&&(currentNode->info != element))
        {
            parent = currentNode;
            if (element < currentNode->info)
            {
                currentNode= currentNode->leftchild;
            }
            else
                currentNode =currentNode->righchild;
            
        }
        
    }
    