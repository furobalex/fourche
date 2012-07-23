/* 
   A REGLER
   Code d'exemple pour le moteur pas a pas gerant la fourche
   Auteurs : Jeremy et Aurélien
   Derniere modif : 22/07/2012
*/

#include "AFMotor.h" // bibliotheque pour le moteur pas à pas
#include "fourche.h"

void setup ()
{
  Serial.begin(9600);
  initialisation();
}

void loop()
{  
    // NE PAS METTRE LES DEUX FONCTIONS L'UNE A LA SUITE DE L'AUTRE
    monterFourche();
    //baisserFourche();
    update();
}
