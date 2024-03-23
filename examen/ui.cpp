//
// Created by Tudor Apavaloaie on 06.06.2023.
//
#include "ui.h"
#include <iostream>
using namespace std;

UI::UI() {
}

UI::UI(Service &s) {
    serv = s;
}

UI::~UI() {
}

void UI::printMenu() {
    meniu();
    serv.add("Ion", "Romana", 5, 1);
    serv.add("Marta", "Istorie", 7, 0);
    serv.add("Tudor", "Mate", 8, 0);
    serv.add("Carmen", "Engleza", 9, 1);
    serv.add("Daria", "Sport", 9, 1);
    serv.add("Ion", "Romana",7,1);
    bool value = true;
    while(value)
    {
        int opt;
        cout<<"Introduceti optiunea: ";
        cin>>opt;
        cout<<endl;
        switch(opt)
        {
            case 1:
                meniu();
                break;
            case 2:
                addEntitate();
                break;
            case 3:
                afisareAll();
                break;
            case 4:
                afiGreva();
                break;
            case 5:
                afimaxDisc();
                break;
            case 6:
                afimaxCla();
                break;
            case 7:
                discPred();
                break;
            default:
                cout<<"Salut!"<<endl;
                value = false;
        }
        cout<<endl;
    }
}

void UI::addEntitate() {
    string nume, disciplina;
    int clase;
    bool greva;
    cout<<"Introduceti numele: ";
    getline(cin>>ws, nume);
    cout<<endl;
    cout<<"Introduceti disciplina: ";
    getline(cin>>ws, disciplina);
    cout<<"Introduceti clasa: ";
    cin>>clase;
    cout<<"Introduceti statusul grevei: ";
    cin>>greva;
    serv.add(nume, disciplina, clase, greva);
}

void UI::afiGreva() {
    cout<<"Numarul profesorilor aflati in greva este: ";
    cout<<serv.nrgreva()<<endl;
}

void UI::afimaxDisc() {
    vector<string> rezultat;
    serv.discmax(rezultat);
    for(int i=0;i<rezultat.size();i++)
        cout<<"Disciplina->"<<rezultat[i]<<" ";
    cout<<endl;
}

void UI::afisareAll() {
    vector<Profesor> tot = serv.getAll();
    for(int i=0;i<tot.size();i++) {
        cout << "Nume->" << tot[i].getNume() << " " << "Disc->" << tot[i].getDisc() << " " << "Clase->"
        <<tot[i].getClase()<<" "<<"Greva->"<<tot[i].getGreva()<<endl;
    }
}

void UI::afimaxCla() {
    cout<<"Clasa cu cei mai multi profesori in greva este: "<<serv.clasM();
}

void UI::discPred() {
    vector<string> rezultat;
    int clasa;
    cout<<"Introduceti clasa: ";
    cin>>clasa;
    serv.orar(rezultat, clasa);
    if(rezultat.size()){
        if(rezultat.size()==1)
            cout<<"La clasa a-"<<clasa<<"a se poate preda doar disciplina:";
        else
            cout<<"La clasa a-"<<clasa<<"a se pot preda doar disciplinele:";
        for(int i=0;i<rezultat.size();i++)
            cout<<" "<<rezultat[i];
    }else
        cout<<"Nu se poate preda nicio discpilina!";
    cout<<endl;
}

void UI::meniu()
{
    cout<<endl;
    cout<<"1.Meniu\n"
          "2.Adaugare\n"
          "3.Afisare\n"
          "4.Nr greva\n"
          "5.Disc max\n"
          "6.Max clase\n"
          "7.Orar\n"
          "0.EXIT\n";
}