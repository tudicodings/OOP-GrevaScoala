//
// Created by Tudor Apavaloaie on 06.06.2023.
//

#pragma once
#include "profesor.h"
#include <vector>


class Repository
{
private:
    vector<Profesor> profi;
public:
    Repository();
    Repository(vector<Profesor>);
    Repository(const Repository&);
    void add(const Profesor&);
    vector<Profesor>& getAll();
    int getSize();
    Profesor getProf(int);
    ~Repository();
};
