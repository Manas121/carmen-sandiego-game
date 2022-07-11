#include <cctype>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>




using namespace std;


struct Node {

int data;

Node* next;

};




int main () {

Node* head;

Node* temp = new Node();

temp -> data = 1;
temp -> next = NULL;

head = temp;

cout << head << "\n";

cout << head->next << "\n";

cout << temp->next << "\n";

/*Node* temp1;

temp1 = temp;

temp = new Node();

temp1 -> next = temp;

temp -> data = 2;
temp -> next = NULL;

temp1 = temp;

temp = new Node();

temp1 -> next = temp;

temp -> data = 3;
temp -> next = NULL;

temp1 = temp;

temp = new Node();

temp1-> next = temp;

temp -> data = 4;
temp -> next = NULL;

temp1 = head;

while (temp1-> next != NULL) {

cout << temp1 -> data << "\n";

temp1 = temp1 -> next;

}

cout << temp1 -> data << "\n";

//cout << temp1 << "\n";
//cout << head << "\n";

int *p;

int x;

int *a;

p=a;

cout << p << "\n";
cout << &a << "\n";

*/

};