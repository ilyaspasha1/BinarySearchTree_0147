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
    void inorder(Node *ptr)
    {
        if (isEmpty())
        {
              cout<<"tree is empty"<<endl;
              return;
        }
        if (ptr == nullptr)
            return;


        inorder(ptr->leftchild);
        cout<<ptr->info<<endl;
        inorder(ptr->righchild);
        
        
    }
    void preorder(Node *ptr)
    {
        if (isEmpty())
        {
              cout<<"tree is empty"<<endl;
              return;
        }
        if (ptr == nullptr)
            return;

        cout<<ptr->info<<endl;
        preorder(ptr->leftchild);
        preorder(ptr->righchild);
        
        
    }
    void postorder(Node *ptr)
    {
        if (isEmpty())
        {
              cout<<"tree is empty"<<endl;
              return;
        }
        if (ptr == nullptr)
            return;

        postorder(ptr->leftchild);
        postorder(ptr->righchild);
        cout<<ptr->info<<endl;
        
    }
    bool isEmpty()
    {
        //check if the tree is empty
        return ROOT == nullptr;
    }
};
int main()
{
BinaryTree x;
    while (true)
    {
        cout << "\nMenu" << endl;
        cout << "1. Implement insert operation" << endl;
        cout << "2. Perform inorder traversal" << endl;
        cout << "3. Perform preorder traversal" << endl;
        cout << "4. Perform postorder traversal" << endl;
        cout << "5. Exit" << endl;
        cout << "\nEnter your choice (1-5) : ";

        char ch;
        cin >> ch;
        cout << endl;

        switch (ch)
        {
        case '1':
        {
            x.insert();
            break;
        }
        case '2':
        {
            x.inorder(x.ROOT);
            break;
        }
        case '3':
        {

            x.preorder(x.ROOT);
            break;
        }
        case '4':
        {

            x.postorder(x.ROOT);
            break;
        }
        case '5':
            return 0;
        default:
        {
            cout << "Invalid option" << endl;
            break;
        }
        }
    }
}