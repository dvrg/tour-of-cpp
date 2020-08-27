#include <iostream>
#include <string>
using namespace std;

struct node
{
    string nama;
    int nilai;
    node *next;
};

class linked_list
{
private:
    node *head,*tail;
public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }

    void add_node(string y, int n)
    {
        node *tmp = new node;
        tmp->nama = y;
        tmp->nilai = n;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }

    void print()
    {
      node* head = this->head;
      int i = 1;
      while(head)
      {
        cout << "Nama : " << head->nama << "\n";
        cout << "Nilai : " << head->nilai << "\n";
        cout << "\n";
        head = head->next;
        i++;
      }
    }
};

int main()
{
    linked_list a;
    cout << "Data sebelum ditambah : \n";
    a.print();
    cout << "*********************\n";
    cout << "Data sesudah ditambah : \n";
    a.add_node("Budi", 90);
    a.add_node("Rahmat", 85);
    a.print();
    return 0;
}
