//
// Created by Tudor Apavaloaie on 06.06.2023.
//

#pragma once
#include "service.h"
class UI
{
private:
    Service serv;
    void addEntitate();
    void afiGreva();
    void afimaxDisc();
    void afimaxCla();
    void discPred();
    void afisareAll();
    void meniu();
public:
    UI();
    UI(Service&);
    ~UI();
    void printMenu();
};
