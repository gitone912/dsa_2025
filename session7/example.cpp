#include <iostream>
using namespace std;

class Node {
public:
    int data;      // stores the value
    Node* next;    // pointer to the next node

    Node(int value) {
        data = value;
        next = nullptr; // initially, it doesn't point anywhere
    }
};

int main() {
    // Create two nodes
    Node first(10);
    Node second(20);
    Node third(30);

    // Link first node to second
    first.next = &second;
    second.next = &third;


    // Print values
    cout << "First node data: " << first.data << endl;
    cout << "Second node data (via first.next): " << first.next->data << endl;

    cout<< "Third value "<<second.next->data<<endl;

    return 0;
}
