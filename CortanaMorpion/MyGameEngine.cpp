#include "MyGameEngine.h"


void MyGameEngine::idle()
{
	//VERIFIE S'IL Y A UN VAINQUEUR
	(*morpion_).endGame();
	//SINON L ORDI JOUE
	if ((*morpion_).getCurrentPlayer() == Constants::ORDI && !(*morpion_).getEndGame())
	{
		ias_[0]->calculIA(ias_[0]->getProf());
	}
	else if ((*morpion_).getCurrentPlayer() == Constants::ORDI_TWO && !(*morpion_).getEndGame()){
		ias_[1]->calculIA(ias_[1]->getProf());
	}
}