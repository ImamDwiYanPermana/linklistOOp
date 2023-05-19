#include <iostream>
#include <string>
using namespace std;


class Node {
public:
    int noMhs;
    char nama[20];
    Node* next;
};

class list {
    Node* START;
public:
    list();
    void addnode();
    bool Search(int nim, Node** current, Node** previous);
    bool listEmpty();
    bool delnode(int element);
    void traverse();
};

list::list() {
    START = NULL;
}

void list::addnode() /* Menambahkan Sebuah Node Kedalam List */
{
    int nim;
    char nm[20];
    cout << "\n Masukan Nomor Mahasiswa: ";
    cin >> nim;
    cout << "\n Masukan Nama";
    cin >> nm;

    Node* nodeBaru = new Node;
    nodeBaru->noMhs = nim;
    strcpy_s(nodeBaru->nama, nm);

    if (START == NULL || nim <= START->noMhs)
    {
        if ((START != NULL) && (nim == START->noMhs))
        {
            cout << "\n DUplikasi noMhs diijinkann\n";
            return;
        }
    }