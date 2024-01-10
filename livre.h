//
// Created by Étudiant on 2024-01-10.
//

#include <iostream>
#include <sstream>
using namespace std;


class Livre{

    private:
        string titre;//1ere lettre en MAJ
        string auteur;//1ere lettre de chaque mot en maj
        string dateParution;//format YY-MM-DD
        int nbPages;

    public:
        //respecte les formats des parametres et nbPages > 0
        bool estLivreValide();

        bool bonFormatTitre();
        bool bonFormatAuteur();
        bool bonFormatDate();
        bool bonNbPages();




};