//PROGRAMME FEU DE CIRCULATION FRANCAIS

#define RW 25 /* on definit les éléments ainsi que le pin sur lequelle ils sont connecté */
#define OW 26 
#define VW 27 
  
#define RN 28 
#define ON 14 
#define VN 15 
  
#define RE 29
#define OE 11
#define VE 12
  
#define RS 30 
#define OS 32 
#define VS 9  

 Autres variables pour aller plus loin
 #define LED1 45// DUE Digital Pin 45* 
#define LED2 47// DUE Digital Pin 47*
#define LED3 49// DUE Digital Pin 49*
#define LED4 51// DUE Digital Pin 51*
#define LED5 44// DUE Digital Pin 44*
#define LED6 46// DUE Digital Pin 46*
#define LED7 48// DUE Digital Pin 48*
#define LED8 50// DUE Digital Pin 50*
#define APE 31// DUE Digital Pin 31*
#define PPE 41// DUE Digital Pin 41*
#define APS 21// DUE Digital Pin 21*
#define PPS 20// DUE Digital Pin 20*
 #define IL1 17// DUE Digital Pin 19*
#define IL2 16// DUE Digital Pin 18*
#define IL3 19// DUE Digital Pin 17*
#define IL4 18// DUE Digital Pin 16*
 #define BP1 7// DUE Digital Pin7*
#define BP2 6// DUE Digital Pin6*
#define BP3 5// DUE Digital Pin5*
#define BP4 8// DUE Digital Pin8*
#define DPN 2// DUE Digital Pin2*
#define DPE 3// DUE Digital Pin3*
#define DISPA 33// DUE Digital Pin 33*
#define DISPB 34// DUE Digital Pin 34*
#define DISPC 35// DUE Digital Pin 35*
#define DISPD 36// DUE Digital Pin 36*
#define DISPE 37// DUE Digital Pin 37*
#define DISPF 38// DUE Digital Pin 38*
#define DISPG 39// DUE Digital Pin 39*
#define DISPP 40// DUE Digital Pin 40 chiffre sans lettre devant sortie numérique*
#define LDR A0// DUE Digital Pin A0 A devant un chiffre sortie analogique*
#define POT A1// DUE Digital Pin A1*
#define APW A10// DUE Digital PinA11*
#define PPW A11// DUE Digital PinA10*
#define APN A9// DUE Digital Pin A9*
#define PPN A8// DUE Digital Pin A8*


/*la fonction setup s'exécute quand on presse le bouton reset ou lorsqu'on allume la carte */

void setup() {
  
  pinMode(RW, OUTPUT); /* on defini ses éléments comme des sorties */
  pinMode(RE, OUTPUT);
  pinMode(VN, OUTPUT);
  pinMode(VS, OUTPUT);
}

void loop() {
  digitalWrite(VW, LOW);   /* on dit a la led verte ouest d'être éteinte (état low) */
  digitalWrite(OW, LOW);   
  digitalWrite(RW, HIGH);   /* on dit a la led rouge ouest d'être allumé (état high) */
  digitalWrite(RE, HIGH);   
  digitalWrite(OE, LOW);   
  digitalWrite(VE, LOW);   
  digitalWrite(RN, LOW);   
  digitalWrite(ON, LOW);   
  digitalWrite(VN, HIGH);   
  digitalWrite(VS, HIGH);   
  digitalWrite(OS, LOW);   
  digitalWrite(RS, LOW);   
  delay(8000);                 /* on dit au programme de faire une pause de 8000 ms */
  digitalWrite(VW, HIGH);   
  digitalWrite(OW, LOW);   
  digitalWrite(RW, LOW);   
  digitalWrite(RE, LOW);   
  digitalWrite(OE, LOW);  
  digitalWrite(VE, HIGH);  
  digitalWrite(RN, LOW);   
  digitalWrite(ON, HIGH);   
  digitalWrite(VN, LOW);   
  digitalWrite(VS, LOW);   
  digitalWrite(OS, HIGH);  
  digitalWrite(RS, LOW);  
  delay(8000);             
  digitalWrite(RN, HIGH);   
  digitalWrite(ON, LOW);   
  digitalWrite(VN, LOW);   
  digitalWrite(VS, LOW);   
  digitalWrite(OS, LOW);  
  digitalWrite(RS, HIGH);  
  delay(8000);             
  digitalWrite(VW, LOW);   
  digitalWrite(OW, HIGH);   
  digitalWrite(RW, LOW);   
  digitalWrite(RE, LOW);   
  digitalWrite(OE, HIGH);  
  digitalWrite(VE, LOW);  
  delay(2000);             
  
}
//Fin du programme
