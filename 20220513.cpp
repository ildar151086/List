#include <iostream>

using namespace std;




struct ListT {
    float Value;
    ListT* next;
};

ListT* top = nullptr;

void push(float valueUser) {
    ListT* temp = new ListT;
    temp->Value = valueUser;
    temp->next = top;
    top = temp;
};

void show() {
    ListT* temp = top;
    while (temp != nullptr) {
        cout << temp->Value;
        temp = temp->next;
    }
}



int main()
{
    setlocale(LC_ALL, "RUS");
    ListT listArr;

    for (int i = 0; i < 10; i++) {
        push(i);
    };
    show();
}
