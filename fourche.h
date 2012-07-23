/* 
   Prototypes des fonctions gérant la fourche
   Auteurs : Jeremy et Aurélien
   Derniere modif : 22/07/2012
*/

#ifndef FOURCHE

  #define FOURCHE
  
    #define FOURCHE_PIN_1 5 /*NB*/
    #define FOURCHE_PIN_2 6 /*NB*/
    
    #define STEP 200 /*NB*/   // Nombre de pas dans le moteur
    
    #define H_MAX 200 /*NB*/
    #define H_MIN 0 /*NB*/
    #define SPEED 10
    
    #define TEMPS_PAS 10000
  
    void monterFourche ();
    void baisserFourche ();
    void update();
    void initialisation();
 
#endif
