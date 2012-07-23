/* 
   Code gerant la fourche du robot
   Auteurs : Jeremy et Aurélien
   Derniere modif : 22/07/2012
*/

#include <arduino.h> // Pour la fonction micros()

#include "AFMotor.h" // bibliotheque pour le moteur pas à pas
#include "fourche.h"

static int x = 1;
static double hauteurFourche = H_MIN;
AF_Stepper moteur(STEP, 2);
unsigned long tpsPrec = 0;


// monte la fourche
void monterFourche ()
{
  if ((micros() - tpsPrec) > TEMPS_PAS)
  {
        if (hauteurFourche < H_MAX)
        {   
            //actualisation de la hauteur
            hauteurFourche ++;
            x = 1;
            // verifier le calcul
        }
        else
        {
           x = 2;
        }
  }
}

//baisse la fourche
void baisserFourche ()
{
     if (hauteurFourche > H_MIN)
    {
        //actualisation de la hauteur
        hauteurFourche --;
        x = 0;
        // verifier le calcul
    }
    
    /*else
    {
       x = 1; 
    }*/
}

// a ajouter a l'update
void update()
{
  if ((micros() - tpsPrec) > TEMPS_PAS)
  {
    tpsPrec = micros();
    if (x == 1)
    {
       moteur.onestep(FORWARD, SINGLE); // fait tourner le moteur de [val-valPrecedente] pas 
    }
    
    else if (x == 0)
    {
       moteur.onestep(BACKWARD, SINGLE); // fait tourner le moteur de [val-valPrecedente] pas 
    }
  }
}

// a ajouter a l'initialisation
void initialisation()
{
    moteur.setSpeed(SPEED);
}

