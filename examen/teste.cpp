//
// Created by Tudor Apavaloaie on 06.06.2023.
//
#include "profesor.h"
#include "repository.h"
#include "service.h"
#include <assert.h>
void TestEntitate()
{
    Profesor ent1;
    Profesor ent2("Ion", "Romana", 5, 1);
    string p ="alex";
    string m = "engleza";
    int cl = 9;
    bool g = 0;
    Profesor ent3(p,m,cl,g);
    assert(not(ent1 == ent2));
    assert(ent1.getNume() == "");
    assert(ent2.getClase() == 5);
    assert(ent3.getGreva() == 0);
}

void TestRepo()
{
    Profesor ent1("Ion", "Romana", 5, 1);
    Profesor ent2("Alex", "Mate", 3, 1);
    Profesor ent3("Matei", "Info", 9, 0);
    Profesor ent4("Tudor", "Sport", 10, 1);
    Repository repo;
    repo.add(ent1);
    repo.add(ent2);
    repo.add(ent3);
    repo.add(ent4);
    assert(repo.getSize() == 4);
    Profesor aux;
    aux = repo.getProf(0);
    assert(aux == ent1);
    vector<Profesor> rez;
    rez = repo.getAll();
    assert(rez[0] == ent1);
}

void TestServ()
{
    Repository repo;
    Service serv(repo);
    vector<Profesor> rez;
    serv.add("Ion", "Romana", 5, 1);
    serv.add("Alex", "Mate", 3, 1);
    serv.add("Matei", "Info", 9, 0);
    serv.add("Tudor", "Romana", 10, 1);
    rez = serv.getAll();
    assert(rez.size() == 4);
    assert(rez[2].getGreva() == 0);
    assert(serv.nrmax("Romana") == 2);
}