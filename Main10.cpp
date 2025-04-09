// //C++ program to insert node at the beginning of double linked list.
#include <iostream>
using namespace std;
// structure for NODE
struct NODE
{
    NODE *prev;
    int data;
    NODE *next;
};
class linked_list
{
private:
    NODE *start, *end, *temp, *curr;

public:
    linked_list()
    {
        start = end = NULL;
    }
    // Function to insert at the beginning in double linked list
    void insert_beginning(int d)
    {
        temp = new NODE; // allocate memory to new node
        temp->data = d;
        temp->next = NULL;
        if (start == NULL)
        {
            start = end = temp;
            end->next = NULL;
            end->prev = NULL;
        }
        else
        {
            temp->prev = NULL;
            temp->next = start;
            start->prev = temp;
            start = temp;
        }
    }
    // Function to traversal/print double linked list (START to END)
    void traversal_S_to_E()
    {
        if (start == NULL)
        {
            cout << "Underflow" << endl;
        }
        else
        {
            curr = start;
            while (curr != NULL)
            {
                cout << curr->data << endl;
                curr = curr->next;
            }
        }
    }
    // Function to traversal/print double linked list (END to START)
    void traversal_E_to_S()
    {
        if (end == NULL)
        {
            cout << "Underflow" << endl;
        }
        else
        {
            curr = end;
            while (curr != NULL)
            {
                cout << curr->data << endl;
                curr = curr->prev;
            }
        }
    }
};
// MAIN FUNCTION
int main()
{
    system("cls");
    linked_list list;
    int d;
    char ans;
    do
    {
        cout << "\nEnter value to be inserted ";
        cin >> d;
        list.insert_beginning(d);
        cout << "\n\nCont...(y / n)";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    cout << "\n Value of list from start to end \n";
    list.traversal_S_to_E();
    cout << "\n Value of list from end to start \n";
    list.traversal_E_to_S();
}