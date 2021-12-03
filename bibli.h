
#ifndef BIBLI_H_INCLUDED
#define BIBLI_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <allegro.h>
#define narchers 13
#define nforgerons 4
#define nsorciers 8
#define nlanciers 12
#define nchevaliers 8
#define nvendeurs 6
#define nbulles 8
#define nbarbaresM 4
#define nbarbaresA 5
#define nloupsM 6
#define nloupsA 3
#define nexplosions 5
#define nchampionA 8
#define nchampionM 8
#define tempo 50

/// eric et aziz
typedef struct ennemi
{
    float x, y;
    float dx, dy;
    int tx, ty;
    int type;
    int vivant;
    int hp;
    int attack;
    int anim;
    int cptimage;
} t_ennemi;

typedef struct chevalier
{
    float x, y;
    int tx, ty;
    int type;
    int hp;
    int dmg;
    int vivant;
    int anim;
    int cptimage;
} t_chevalier;



typedef struct listeChevaliers
{
    int max;
    int n;
    t_ennemi **tab;
} t_listeChevaliers;


typedef struct flaiche
{
    int fx;
    int f;
}t_flaiche;
/// eric et aziz



/// eric et aziz
t_listeChevaliers * creerListeChevaliers(int max);
t_listeChevaliers * ajouterChevalier(t_listeChevaliers * mesChevaliers, int * clicker, BITMAP * caseChevalier, int* validation, BITMAP* casecolallie, BITMAP* caseennemi);
t_chevalier * creerChevalier(int ** clicker, BITMAP * caseChevalier, int i, int **validation, BITMAP* casecolallie, BITMAP* caseennemi);
void actualiserListeChevalier(t_listeChevaliers * la, BITMAP * caseChevalier, BITMAP* casecolallie);
void enleverChevalier(t_listeChevaliers * la,int i, BITMAP * caseChevalier, BITMAP* casecolallie);
void Chevalier(BITMAP *page,BITMAP * casecolallie,t_chevalier * chevalier,BITMAP * vendeur[nvendeurs], BITMAP * forgeron[nforgerons], BITMAP * archer[narchers], BITMAP * sorcier[nsorciers], BITMAP * lancier[nlanciers], BITMAP * shevalier[nchevaliers]);
void dessinermenu(BITMAP * page, BITMAP * vendeur[nvendeurs], BITMAP * forgeron[nforgerons], BITMAP * archer[narchers], BITMAP * sorcier[nsorciers], BITMAP * lancier[nlanciers], BITMAP * shevalier[nchevaliers],BITMAP * iconePerso);
void icone(BITMAP * caseIcone, int * clicker, int *argentepeiste, int* argentdistance, int *validation, int* prixunite);
void dessinerSouris(int clicker, BITMAP * caseIcone, BITMAP * page,BITMAP * vendeur[nvendeurs], BITMAP * forgeron[nforgerons], BITMAP * archer[narchers], BITMAP * sorcier[nsorciers], BITMAP * lancier[nlanciers], BITMAP * shevalier[nchevaliers],BITMAP * mouse);
void siZoneAjout(BITMAP * page, BITMAP * caseChevalier, BITMAP* caseennemi);
void siZoneSupprimer(BITMAP * page, BITMAP * caseChevalier);
void dessinerChevalier(BITMAP *page,BITMAP * casecolallie,t_chevalier * chevalier,BITMAP * vendeur[nvendeurs], BITMAP * forgeron[nforgerons], BITMAP * archer[narchers], BITMAP * sorcier[nsorciers], BITMAP * lancier[nlanciers], BITMAP * shevalier[nchevaliers],BITMAP * explosion [nexplosions],BITMAP * fleche,int i,t_flaiche * tabf[30]);
void dessinerListeChevalier(BITMAP * page,BITMAP * cosacolallie, t_listeChevaliers *la,BITMAP * vendeur[nvendeurs], BITMAP * forgeron[nforgerons], BITMAP * archer[narchers], BITMAP * sorcier[nsorciers], BITMAP * lancier[nlanciers], BITMAP * shevalier[nchevaliers],BITMAP * explosion [nexplosions],BITMAP * flaiche,t_flaiche * tabf [30]);

void actualiserargent(int* argentepeiste, int* argentdistance, int* compteurproche, int* compteurloin, t_listeChevaliers *la);
void argentdutype(int* argentepeiste, int * argentdistance, int *compteurproche, int* compteurloin, t_chevalier * chevalier);
void recupererargent (int *clicker, int* validation, int* argentepeiste, int* argentdistance, int prixunite);

t_ennemi* creerennemi(int numero);
void actualiserennemi(t_ennemi* adversaire, BITMAP* casechevalier);
void enleverennemi(t_ennemi* la[30], int i);
void actualisertableauennemi (t_ennemi* la[30], int nombreennemi, t_listeChevaliers* allie, BITMAP* casecolallie,BITMAP * page,BITMAP * barbareM[nbarbaresM],BITMAP * barbareA[nbarbaresA], BITMAP* caseennemi,BITMAP * loupA [nloupsA],BITMAP * loupM[nloupsM],BITMAP * championA [nchampionA],BITMAP * championM [nchampionM]);
void dessinerennemi(BITMAP* bmp, t_ennemi* adversaire);
void dessinertableauennemi(BITMAP* bmp, t_ennemi* la[30], int nombrennemi);

t_listeChevaliers * pelleChevalier(BITMAP * caseChevalier,t_listeChevaliers * la,int * clicker , int* validation);
t_chevalier * mortChevalier();


void collisiontaballie (BITMAP* caseennemi, t_listeChevaliers* la);
void collisionallie(t_chevalier* allie,BITMAP* caseennemi);

void actualisationennemi(t_ennemi* adversaire, BITMAP* casecolallie,BITMAP * page,BITMAP * barbareM[nbarbaresM],BITMAP * barbareA[nbarbaresA], BITMAP* caseennemi,BITMAP * loupA [nloupsA],BITMAP * loupM[nloupsM],BITMAP * championA [nchampionA],BITMAP * championM [nchampionM]);

void degatdistanceennemi(t_ennemi* adversaire, BITMAP* casecolallie, int distancecase, BITMAP* caseennemi);

t_ennemi* creationenneminivdeux (int numero);

void affichagetabhp (t_listeChevaliers* la, BITMAP* bmp);
void affichagehpallie(t_chevalier* allie, BITMAP* bmp);

void affichagehpennemi(t_ennemi* adversaire[30], int nombreennemi, BITMAP* bmp);
t_ennemi* creationenneminivtrois (int numero);
void affichagehpboss(t_ennemi* boss, BITMAP* bmp);
/// eric et aziz



/// bitmaps du menu







/// bitmaps unitées




/// bitmaps généraux



/// lignes
void vline(BITMAP *bmp, int x, int y1, int y2, int color);
void hline(BITMAP *bmp, int x1, int y, int x2, int color);
void line(BITMAP *bmp, int x1, int y1, int x2, int y2, int color);


/// le sous programmes du menu
int selectionMenu ();
int selectionNiveau ();

///  les animations et initialisations d animations


void animVendeur (t_chevalier * unit, BITMAP * page, BITMAP * vendeur[nvendeurs]);

void animArcher (t_chevalier * unit,BITMAP * page, BITMAP * archer[narchers],BITMAP * casecolallie,BITMAP * fleche,int i,t_flaiche * flaiche [30]);

void animForgeron (t_chevalier * unit,BITMAP * page, BITMAP * forgeron[nforgerons]);

void animShevalier (t_chevalier * unit,BITMAP * page, BITMAP * shevalier[nchevaliers],BITMAP * casecolallie);

void animLancier (t_chevalier * unit,BITMAP * page, BITMAP * lancier[nlanciers],BITMAP * casecolallie);

void animSorcier (t_chevalier * unit,BITMAP * page, BITMAP * sorcier[nsorciers],BITMAP * casecolallie,BITMAP * explosion [nexplosions]);

void animBarbareM (t_ennemi * unit, BITMAP * page, BITMAP * barbareM[nbarbaresM]);

void animBarbareA (t_ennemi * unit, BITMAP * page, BITMAP * barbareA[nbarbaresA]);

void animLoupM (t_ennemi * unit, BITMAP * page, BITMAP * loupM[nloupsM]);

void animLoupA (t_ennemi * unit, BITMAP * page, BITMAP * loupA[nloupsA]);

void animChampionM (t_ennemi * unit, BITMAP * page, BITMAP * championM[nchampionM]);

void animChampionA (t_ennemi * unit, BITMAP * page, BITMAP * championA[nchampionA]);


///  les sous programes du niveau 1
int premNiveau (BITMAP * vendeur[nvendeurs], BITMAP * forgeron[nforgerons], BITMAP * archer[narchers], BITMAP * sorcier[nsorciers], BITMAP * lancier[nlanciers], BITMAP * shevalier[nchevaliers],BITMAP * barbareM[nbarbaresM],BITMAP * barbareA [nbarbaresA], int nivunoudeux,BITMAP * loupA [nloupsA],BITMAP * loupM [nloupsM],BITMAP * explosion [nexplosions], int choixdif,int point);

/// les sous programes du niveau 1
void deuxNiveau();

int niveautrois (BITMAP * vendeur[nvendeurs], BITMAP * forgeron[nforgerons], BITMAP * archer[narchers], BITMAP * sorcier[nsorciers], BITMAP * lancier[nlanciers], BITMAP * shevalier[nchevaliers],BITMAP * barbareM[nbarbaresM],BITMAP * barbareA [nbarbaresA], int nivunoudeux,BITMAP * loupA [nloupsA],BITMAP * loupM [nloupsM],BITMAP * explosion [nexplosions], int choixdif, int point);

t_ennemi* creationboss();
void degatdistanceboss(t_ennemi* adversaire, BITMAP* casecolallie, int distancecase, int ennemiy);
void actualiserboss(t_ennemi* adversaire, BITMAP* casecolallie,BITMAP * page,BITMAP * barbareM[nbarbaresM],BITMAP * barbareA[nbarbaresA], BITMAP* caseennemi,BITMAP * loupA [nloupsA],BITMAP * loupM[nloupsM], int ennemiy, int* arret);
void dessinerboss(BITMAP* bmp, t_ennemi* adversaire);





/// les sous programes du niveau 1
void troisNiveau ();
int selectionDif(int * dif);


#endif // BIBLI_H_INCLUDED
