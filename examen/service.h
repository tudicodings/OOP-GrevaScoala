//
// Created by Tudor Apavaloaie on 06.06.2023.
//

#pragma once
#include "repository.h"
class Service {
private:
    Repository repo;
public:
    Service();
    Service(Repository&);
    Service(Service&);
    ~Service();
    void add(string, string,int, bool);
    int nrgreva();
    void discmax(vector<string>&);
    int clasM();
    int nrmax(string);
    int nrmaxC(int);
    void orar(vector<string>&, int cls);
    vector<Profesor>& getAll();
};
