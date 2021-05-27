#ifndef PERSONNE_H
#define PERSONNE_H

#include <string>
#include <iostream>

using namespace std;

class Personne
{
    public:
        Personne();

        void Afficher()
        {
            cout <<"Nom:"<<nom<<endl<<"Prenom:"<<prenom<<endl<<"Sex:"<<sex<<endl<<"Age:"<<age<<endl<<"Poids:"<<poids<<endl;
        }

        void Modifier(){
            cout <<"Entrer les valeurs"<<endl;

            cout <<"Nom:"<<endl;
            cin >> nom;

            cout<<"Prenom:"<<endl;
            cin >> prenom;

            cout<<"Sex:"<<endl;
            cin >> sex;

            cout<<"Age:"<<endl;
            cin >> age;

            cout<<"Poids:"<<endl;
            cin >> poids;
        }

    private:
        string nom;
        string prenom;
        string sex;
        int age;
        float poids;
};

#endif // PERSONNE_H
