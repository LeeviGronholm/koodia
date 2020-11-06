// kommenttia yhdellä rivillä

/*

kommentteja, 1. rivi

kommentteja, 2. rivi

*/

#include <iostream>

using namespace std;

void kontrollinSiirtoEsimerkki(){
 cout<<"Kävin Täällä"<<endl;
}
void kontrollinSiirtoParametrilla(string etunimi){
 cout<<etunimi;
}
int main()

{ 
cout << ""<<endl;  

cout << "Hello World :)"
<< endl;

cout<<"-----------------------------------------"<<endl;

cout << "Ikä:";
int ika = 43;

cout << ika

<< endl;

cout<<"-----------------------------------------"<<endl;

cout << "Ympyrän säteen laskenta:"<<endl;
double pii = 3.141592;
cout << pii

<<endl
<< endl;

double pallon_sade, pallon_ala, pallon_tilavuus;
int luku;

cout << "Anna säde " 

<< endl;

   cin >> pallon_sade;

pallon_ala=4*pii*(pallon_sade*pallon_sade);

pallon_tilavuus=(pallon_ala*pallon_sade)/3;


cout<<pallon_tilavuus<<endl;

int alueen_leveys = 15;
int alueen_pituus = 35;
int laatta_leveys = 5;
int laatta_pituus = 8;

cout <<"Laatta menee kokonaisena piha-alueelle "<<(alueen_leveys/laatta_leveys)*(alueen_pituus/laatta_pituus)<<" kertaa"

<<endl;

cout << "Leveyssuuunnassa tilaa jää "<<alueen_leveys%laatta_leveys<<"m"<<endl;

cout << "Pituussuunnassa tilaa jää "<<alueen_pituus%laatta_pituus<<"m"<<endl;

cout << "Yli jäävän alueen koko on siis 15*" << alueen_pituus%laatta_pituus << ": " << 15 * (alueen_pituus%laatta_pituus) << "m2"<<endl<<endl;

cout << "Valmis "

<<endl;

cout<<"-----------------------------------------"<<endl;

string autoja[]={"Hyundai", "Mersu", "Toyota", ""};

 cout << autoja[1] 
 
 << endl;
 
 autoja[3]="Saab";

cout << autoja[3]<<endl;

cout<<"-----------------------------------------"<<endl;

//Miten lisätään elementti arrayn loppuun.,
if(ika==43){
 cout<<"Olet 43 vuotias"  
<<endl;}
if(ika<43){
 cout << "Olen nuorempi kuin 43"
<<endl;}
if(ika>43){
 cout << "Olet vanhempi kuin 43" 
<<endl;}
if(ika!=43){
 cout << "Et ole 43" 
<<endl;}
if(ika==43){
 cout << "Olet 43" << endl; 
cout<<"-----------------------------------------"<<endl; }
else{
  cout<< "Olet yli 43" 
<<endl;
}

   int i=1;
   while (i<5) 
   {
     cout<< "While loopin kierros nro: " << i << endl;
     i=i+1;
   }
   cout<<endl;
   for(int i=1; i<5; i++){
   cout<< "For loopin kierros nro: " << i << endl;  
   }
   cout<<endl;
   kontrollinSiirtoEsimerkki();
  
   kontrollinSiirtoParametrilla("Leevi");
 

}
