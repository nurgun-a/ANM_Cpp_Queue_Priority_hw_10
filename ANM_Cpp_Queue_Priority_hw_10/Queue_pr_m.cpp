#include "Queue_pr.h"

void main()
{
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Queue Q1(25);
    Queue Q2(25);
    int size = 10;
    User p1(rand_n(), rand_str());
    User p2(rand_n(), rand_str());
    User p3(rand_n(), rand_str());
    User p4(rand_n(), rand_str());
    User p5(rand_n(), rand_str());
    User p6(rand_n(), rand_str());
    User p7(rand_n(), rand_str());
    User p8(rand_n(), rand_str());
    User p9(rand_n(), rand_str());
    User p10(rand_n(), rand_str());
    User* gr_p = new User[size]{ p1,p2,p3,p4,p5,p6,p7,p8,p9,p10 };
   
    for (int i = 0; i < size; i++)
    {
        gr_p[i].id_p(i);        
        if (gr_p[i].Get_name() == "Admin")gr_p[i].Set_pri(4);
        else if (gr_p[i].Get_name() == "Teacher")gr_p[i].Set_pri(3);
        else if (gr_p[i].Get_name() == "Student")gr_p[i].Set_pri(2);
        else if (gr_p[i].Get_name() == "User")gr_p[i].Set_pri(1);
        Q1.Add(gr_p[i]);
    }
    cout << " - Добавление в очередь:\t\t(нажмите пробел чтобы продолжить)" << endl;
    _getch();
    Sleep(200);
    Q1.Show1();
    for (int i = 0; i < size; i++)Q2.Add(Q1.Extract());
    cout << " - В печать:\t\t\t\t(нажмите пробел чтобы продолжить)" << endl;
    _getch();
    Sleep(200);
    Q2.Show();
    cout << "\t\t\t\t\tThe End!" << endl;
}