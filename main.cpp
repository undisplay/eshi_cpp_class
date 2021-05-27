#include <iostream>

#include <Personne.h>

using namespace std;

string choice = "1";

void _divider(){
    cout <<"***************************"<<endl;
}

int main()
{
    cout <<"Creer une personne"<<endl;
    _divider();

    Personne personne;
    _divider();

    while(choice == "1" || choice == "2"){
        cout << "voulez-vous:"<<endl<<"1-Afficher"<<endl<<"2-Modifier"<<endl<<"Autres-quitter"<<endl;
        _divider();

        cin >> choice;
        _divider();

        if (choice == "1") {
            personne.Afficher();
            _divider();
        }

        if (choice == "2") {
            personne.Modifier();
            _divider();
        }
    }

    return 0;
}
