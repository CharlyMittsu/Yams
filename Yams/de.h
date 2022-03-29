#ifndef de_h
#define de_h

class De {

    protected:
        int _nbrDeFaces;
        int _valeur;

    public:

        De();

        void lancer(); 
        //lance le dé et modifie la valeur avec un nombre aléatoire entre 1 et le nombre de faces

        int getValeur();
        //renvoie la valeur du dé

        
        De(int nbFaces);
        //Constructeur, attent que l'on précise le nombre de faces


};


#endif