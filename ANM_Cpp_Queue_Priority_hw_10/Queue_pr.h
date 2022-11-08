#include <iostream>
#include <iomanip>
#include <string.h>
#include <Windows.h>
#include <conio.h>

using namespace std;
class User;
class Queue
{
    User* Wait;    
    int MaxQueueLength;
    int QueueLength;
public:
    Queue(int m);
    ~Queue();
    void Add(User _u);
    User Extract();
    void Clear();
    bool IsEmpty();
    bool IsFull();
    int GetCount();
    void Show();
    void Show1();
    friend User;

};

class User
{
    int id;
    int str;
    int Pri;
    string Name;
public:
    User();
    User(string _n, int _str);
    void id_p(int _n);
    friend Queue;
    friend ostream& operator <<(ostream& os, User& _u);
    string Get_name();
    void Set_pri(int n);
};

string rand_n();
int rand_str();
void con_s(int ss);
