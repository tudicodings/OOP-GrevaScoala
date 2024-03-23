//
// Created by Tudor Apavaloaie on 06.06.2023.
//
#include "profesor.h"

Profesor::Profesor() {
    nume = "";
    disciplina = "";
    clase = 0;
    greva = false;
}

Profesor::Profesor(string n, string d, int h, bool g) {
    nume = n;
    disciplina = d;
    clase = h;
    greva = g;
}

Profesor::Profesor(const Profesor &p) {
    nume = p.nume;
    disciplina = p.disciplina;
    clase = p.clase;
    greva = p.greva;
}

Profesor &Profesor::operator=(const Profesor &p) {
   if(this!=&p)
   {
       nume = p.nume;
       disciplina = p.disciplina;
       clase = p.clase;
       greva = p.greva;
   }
   return *this;
}

bool Profesor::operator==(const Profesor &p) {
    return ( (nume == p.nume) and (disciplina == p.disciplina) and (clase == p.clase) and (greva == p.greva));
}

string Profesor::getNume() {
    return nume;
}

string Profesor::getDisc() {
    return disciplina;
}

int Profesor::getClase() {
    return clase;
}

bool Profesor::getGreva() {
    return greva;
}

string Profesor::ToString() {
    return nume + " " + disciplina + " " + to_string(clase) + " " + to_string(greva) ;
}

Profesor::~Profesor() {
    nume = "";
    disciplina = "";
    clase = 0;
    greva = false;
}

