//
// Created by Tudor Apavaloaie on 06.06.2023.
//
#include "repository.h"

Repository::Repository() {
}

Repository::Repository(vector<Profesor> dupli) {
    for(int i=0;i<dupli.size();i++)
        profi[i] = dupli[i];
}

Repository::Repository(const Repository &rep) {
    for(int i=0;i<rep.profi.size();i++)
        profi[i] = rep.profi[i];
}

void Repository::add(const Profesor &prof) {
    profi.push_back(prof);
}

vector<Profesor> &Repository::getAll() {
    return profi;
}

int Repository::getSize() {
    return profi.size();
}

Profesor Repository::getProf(int poz) {
    return profi[poz];
}

Repository::~Repository() {
}

