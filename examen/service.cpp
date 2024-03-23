//
// Created by Tudor Apavaloaie on 06.06.2023.
//
#include "service.h"

Service::Service() {
}

Service::Service(Repository &r) {
    repo = r;
}

Service::Service(Service &s) {
    repo = s.repo;
}

Service::~Service() {
}

int Service::nrgreva() {
    int nr = 0;
    vector<Profesor> tot = repo.getAll();
    for(int i=0;i<tot.size();i++)
        if(tot[i].getGreva() == 1)
            nr++;
    return nr;
}

vector<Profesor> &Service::getAll() {
    return repo.getAll();
}

void Service::add(string n, string d, int h, bool g) {
    Profesor p(n,d,h,g);
    repo.add(p);
}
int Service::nrmax(string dsc) {
    int nr=0;
    vector<Profesor> tot = repo.getAll();
    for(int i=0;i<tot.size();i++)
        if(tot[i].getDisc() == dsc and tot[i].getGreva() == 1)
            nr++;
    return nr;
}
int Service::nrmaxC(int c) {
    int nr=0;
    vector<Profesor> tot = repo.getAll();
    for(int i=0;i<tot.size();i++)
        if(tot[i].getClase() == c and tot[i].getGreva() == 1)
            nr++;
    return nr;
}
void Service::discmax(vector<string> &rez) {
    vector<Profesor> tot = repo.getAll();
    int max = -1;
    for(int i=0;i<tot.size();i++)
        if(max < nrmax(tot[i].getDisc()))
            max = nrmax(tot[i].getDisc());
    for(int i=0;i<tot.size();i++)
        if(max == nrmax(tot[i].getDisc()))
            rez.push_back(tot[i].getDisc());
}

int Service::clasM() {
    int k =0;
    int max = -1;
    vector<Profesor> tot = repo.getAll();
    for(int i=0;i<tot.size();i++)
        if(max < nrmaxC(tot[i].getClase()))
            max = nrmaxC(tot[i].getClase());
    for(int i=0;i<tot.size();i++)
        if(max == nrmaxC(tot[i].getClase()))
            k = tot[i].getClase();
    return k;
}

void Service::orar(vector<std::string> &rez, int cls) {
    vector<Profesor> tot = repo.getAll();
    for(int i=0;i<tot.size();i++)
        if(tot[i].getClase() == cls and tot[i].getGreva() == 0)
            rez.push_back(tot[i].getDisc());
}