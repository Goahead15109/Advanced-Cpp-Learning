#include <iostream>
#include <string>
using namespace std;

class Account
{ 
     string userName;
public:
     Account(){};
     Account(string name):userName(name){}
     void  PrintUserName(){cout << userName << endl;}
};

class CreditAccount : public Account
{
public:
     CreditAccount( string name, int credit):Account(name),credit(credit){}
     void PrintInfo(){PrintUserName();cout << credit << endl;}
private:
     int credit;
};

//��ʵ��Account���캯��Account(char *name)
//��ʵ��Account��PrintUserName()����
//��ʵ��CreditAccount��Ĺ��캯��CreditAccount(char* name, long number)
//��ʵ��CreditAccount���PrintInfo()����

int main()
{
     CreditAccount a("I Love CPP", 10000);
     a.PrintInfo();
     return 0;
}
