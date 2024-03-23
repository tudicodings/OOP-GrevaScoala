//
// Created by Tudor Apavaloaie on 06.06.2023.
//

#pragma once
#include <vector>
#include <string>

using namespace std;
class Profesor
{
private:
    string nume, disciplina;
    int clase;
    bool greva; // 0- nu este in greva 1- este in greva;
public:
    Profesor();
    Profesor(string, string, int, bool);
    Profesor(const Profesor&);
    Profesor& operator=(const Profesor&);
    bool operator==(const Profesor&);
    string getNume();
    string getDisc();
    int getClase();
    bool getGreva();
    string ToString();
    ~Profesor();
};
