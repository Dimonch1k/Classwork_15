#include <iostream>
using namespace std;


/*

class Node{
public:
    int value;
    Node* next;

    Node()
    {
        value = 0;
        next = nullptr;
    }
    Node(int value)
    {
        this->value = value;
        this->next = nullptr;
    }
};

string isEmpty(Node* head)
{
    if (!head)
    {
        cout << "The stack is empty!\n\n";
    }
    return "";
}



void push(Node*& head, int value)
{
    Node* newNode = new Node(value);

    if (!head)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void pop(Node*& head)
{

    while (head)
    {
        if (head->next)
        {
            cout << "The element " << head->value << " was deleted!\n\n";
            head = head->next;
            return;
        }
        cout << "The element " << head->value << " was deleted!\n\n";
        head = nullptr;
        return;
    }
}

void top(Node* head)
{
    while (head->next)
    {
        head = head->next;
    }
    cout << "The final number in the stack is " << head->value << "\n\n";
}



void display(Node* head)
{
    if (!head)
    {
        cout << "The stack is empty\n\n";
        return;
    }
    cout << "All numbers: ";
    while (head)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << "\n\n";
}



int main()
{
    Node* head = nullptr;


    for (int i = 0; i < 4; i++) // The user input values in stack
    {
        int value = 0;
        cout << "Enter " << i + 1 << " number: ";
        cin >> value;
        push(head, value); // Put node to the end of the stack   
    }
    cout << "\n";
    display(head);

    if (head)
    {
        pop(head);
        display(head);

        top(head);
        display(head);
    }

}*/




/**/

#include <stack>
#include <string>

bool isBalanced(std::string str) {
    stack<char> s;

    for (char ch : str) {
        if (ch == '(' || ch == '[' || ch == '{') {
            s.push(ch);
        }
        else if (ch == ')' || ch == ']' || ch == '}') {
            if (s.empty()) {
                return false; // Немає відкриваючої дужки для поточної закриваючої
            }

            char top = s.top();
            s.pop();

            if ((ch == ')' && top != '(') ||
                (ch == ']' && top != '[') ||
                (ch == '}' && top != '{')) {
                return false; // Неправильний порядок дужок
            }
        }
    }

    return s.empty(); // Якщо стек пустий, то всі дужки були парні та правильно збалансовані
}

int main() {
    string input;
    cout << "Enter the string with brackets: ";
    cin >> input;

    if (isBalanced(input)) {
        cout << "The order of the parentheses is correct." << endl;
    }
    else {
        cout << "The order of the parentheses is incorrect." << endl;
    }

    return 0;
}
