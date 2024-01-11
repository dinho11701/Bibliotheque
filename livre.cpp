//
// Created by Étudiant on 2024-01-10.
//

#include "livre.h"

bool Livre::bonFormatAuteur() {

    //exemple: Harry Potter
    //exemle: Oswald
    //1ere lettre de chaque mot en maj

    istringstream iss(auteur);
    string word;
    bool valide = true;

    while(iss >> word && valide){

        if( !(isupper(word[0])) ){
            valide = false;
        }

    }
    return valide;

}

bool Livre::bonFormatTitre() {


    //exemple: Harry et la coupe des sorciers


    return true;
}
