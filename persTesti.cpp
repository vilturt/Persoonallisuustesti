#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::cout << "Tervetuloa Luotettavan Persoonallisuustestin pariin!\n\n" << std::endl;
    std::cout << "Tämän testin perusteella voit olla: \n";
    std::cout << "A) Alkoholisti \n";
    std::cout << "B) Lahjakas mallikansalainen \n";
    std::cout << "C) Muuten vaan luuseri \n\n";
    std::cout << "Eiköhän aloiteta testi...\n\n";

    // pisteet kullekkin persoonallisuustyypille, muuttujat

    int alkoholisti = 0;
    int mallikansalainen = 0;
    int luuseri = 0;

    bool eka_kysymys_jatkuu = true;

    while(eka_kysymys_jatkuu) {
        int eka_vastaus;
        std::cout << "Juotko viikoittain: \n 1) kahvia \n 2) viinaa  \n 3) saunassa yhden kaljan \n";
        std::cin >> eka_vastaus;
        if (eka_vastaus == 1) {
            mallikansalainen+=1;
            eka_kysymys_jatkuu = false;
        } else if (eka_vastaus == 2) {
            alkoholisti+=3;
            luuseri+=1;
            eka_kysymys_jatkuu = false;
        } else if (eka_vastaus == 3) {
            mallikansalainen+=1;
            alkoholisti+=1;
            eka_kysymys_jatkuu = false;
        } else {
            std::cout << "Anna kelvollinen syöte! \n";
        }
    }

    bool toka_kysymys_jatkuu = true;

    while(toka_kysymys_jatkuu) {

        int toka_vastaus;
        std::cout << "Miten kulutat mieluiten vapaa-aikaasi?\n 1) harrastan liikuntaa \n 2) istun kapakassa \n 3) katson telkkaria \n";
        std::cin >> toka_vastaus;
        if (toka_vastaus == 1) {
            mallikansalainen+=2;
            toka_kysymys_jatkuu = false;
        } else if (toka_vastaus == 2) {
            alkoholisti+=2;
            luuseri+=2;
            toka_kysymys_jatkuu = false;
        } else if (toka_vastaus == 3) {
            luuseri+=3;
            toka_kysymys_jatkuu = false;
        } else {
            std::cout << "Anna kelvollinen syöte! \n";
        }

    }

    bool kolmas_kysymys_jatkuu = true;

    while(kolmas_kysymys_jatkuu) {

        int kolmas_vastaus;
        std::cout << "Olet opiskellut tutkinnon:\n 1) korkeakoulussa \n 2) peruskoulussa \n 3) lukiossa \n";
        std::cin >> kolmas_vastaus;
        if (kolmas_vastaus == 1) {
            mallikansalainen+=3;
            kolmas_kysymys_jatkuu = false;
        } else if (kolmas_vastaus == 2) {
            luuseri+=3;
            kolmas_kysymys_jatkuu = false;
        } else if (kolmas_vastaus == 3) {
            luuseri+=1;
            mallikansalainen+=1;
            kolmas_kysymys_jatkuu = false;
        } else {
            std::cout << "Anna kelvollinen syöte! \n";
        }       
    }
    
    bool neljas_kysymys_jatkuu = true;

    while(neljas_kysymys_jatkuu) {

        int neljas_vastaus;
        std::cout << "Otat välipalaksi mieluiten:\n 1) hieman lenkkimakkaraa \n 2) omenan \n 3) palan piirakkaa \n";
        std::cin >> neljas_vastaus;
        if (neljas_vastaus == 1){
            luuseri+=3;
            neljas_kysymys_jatkuu = false;
        } else if (neljas_vastaus == 2) {
            mallikansalainen+=3;
            neljas_kysymys_jatkuu = false;
        } else if (neljas_vastaus == 3) {
            luuseri+=1;
            neljas_kysymys_jatkuu = false;
        } else {
            std::cout << "Anna kelvollinen syöte! \n";
        }
    }

    bool viides_kysymys_jatkuu = true;

    while(viides_kysymys_jatkuu) {
        
        int viides_vastaus;
        std::cout << "Olet nukkunut huonosti. Pitäisi mennä töihin. Mitä teet? \n 1) otan vähän viinaa \n 2) Menen takaisin nukkumaan \n 3) Ei väsytä lainkaan, joten otan vähän kahvia...ja eikun töihin. \n";
        std::cin >> viides_vastaus;
        if (viides_vastaus == 1) {
            luuseri+=3;
            alkoholisti+=4;
            viides_kysymys_jatkuu = false;
        } else if (viides_vastaus == 2) {
            luuseri+=2;
            viides_kysymys_jatkuu = false;
        } else if (viides_vastaus == 3) {
            mallikansalainen+=3;
            viides_kysymys_jatkuu = false;
        } else {    
            std::cout << "Anna kelvollinen syöte! \n";
        }
    
    
    }

    string testin_tulos;

    if ((((mallikansalainen > luuseri) || (mallikansalainen == luuseri)) && ((mallikansalainen > alkoholisti) || (mallikansalainen == alkoholisti)))){
        testin_tulos = "MALLIKANSALAINEN";
    } else if (((luuseri > mallikansalainen) || (luuseri==mallikansalainen)) && ((luuseri > alkoholisti)||(luuseri == alkoholisti))) {
        testin_tulos = "LUUSERI";
    } else if ((((alkoholisti > luuseri)||(alkoholisti==luuseri)) && ((alkoholisti > mallikansalainen)||alkoholisti==mallikansalainen))) {
        testin_tulos = "ALKOHOLISTI";
    }

std::cout << "Vastasit kaikkiin viiteen kysymykseen. Olet Luotettavan Persoonallisuustestin mukaan ensisijaisesti " << testin_tulos << ".\n\n";

    // testituloste

    // std::cout << "Pisteet:\n Alkoholisti: " << alkoholisti << "\n Mallikansalainen: " << mallikansalainen << "\n Muuten vaan luuseri: " << luuseri << ".\n\n";

 }