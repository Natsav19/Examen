#pragma once
#include <iostream>
enum Difficulte
{
	Facile,
	Moyen,
	Diffcile
};
class Quete
{
private:
	std::string nom;
	Difficulte nivDifficulte;
	int nivMin;
	int recompenseOr;
	int expRecu;
public:

	//Constructeur
	Quete(Difficulte);
	~Quete();

	//Fonction
	Difficulte getDifficulte();
	int getNivMin();
	int getRecompense();
	int getEXP();


	//To_String
	virtual std::string to_string();
};

