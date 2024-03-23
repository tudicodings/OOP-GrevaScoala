#include <iostream>
#include "ui.h"
#include "teste.h"

using namespace std;

int main()
{
    TestEntitate();
    TestRepo();
    TestServ();
    Repository repo;
    Service serv(repo);
    UI ui(serv);
    ui.printMenu();
    return 0;
}