#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>
#include <windows.h>
#include <chrono>
#include <thread>
using namespace std;

int main()
{
    char test[] =
        "vous venez de vous r�veiller dans une for�t. vous ne vous rappeler de rien. vous ne voyez rien apart deux chemins de terre qui commencent mysterieusement ou vou vou trouver"
        "\n";
}
int test() {
    cout << "vous observer les deux chemins" << endl;
    cout << "celuis de gauche va vers ce qui ressemble a une tour fait en bois" << endl;
    cout << "les arbres autours du chemin de droite semble � moiti� br�l�"
        << endl;
    cout << "gauche ou droite ?" << endl;
    string path;
    cin >> path;
    if (path == "gauche") {
        cout << "en arrivant jusqu'� la tour vous voyez un vielle homme assis sur une chaise" << endl;
        cout << "vous pouvez lui parler ou continuer jusqu'a l'entr�e de la tour" << endl;
        cout << "parler ou continuer ?" << endl;
        string path1;
        cin >> path1;
        if (path1 == "parler") {
            cout << "vous demander au vielle homme ce qu'il fait dans une for�t comme celle-ci" << endl;
            cout << "vielle homme : ah bonjour jeune homme, je ne t'avais pas vu" << endl;
            cout << "vielle homme : cela fait un bon moment que je n'ai vu un nouveau visage par ici" << endl;
            cout << "vielle homme : je ne fait rien en particulier, je suis simplement entreint de profiter des dernier rayons de l'�t�" << endl;
            cout << "vous �tes sceptique de ce vielle homme, mais vous avez aussi besoins d'information" << endl;
            cout << "qu'aller vous faire ? : partir ou rester ?" << endl;
            string path2;
            cin >> path2;
            if (path == "partir") {
                cout << "vous partez en courant le plus rapidement possible, vous �tes retrouver mort plusieurs semaines plus tard par le vielle homme" << endl;
                cout << "-----------GAME OVER-----------" << endl;
                string path2;
                cin >> path2;
                if (path == "rester") {
                    cout << "vous rester avec les vieille homme longtemps, si longtemps que vous vous endormez a c�t� de lui. Vous �tes mort le lendemain matin d'une cause inconnu" << endl;
                    cout << "-----------GAME OVER-----------" << endl;
                    string path1;
                    cin >> path1;
                    if (path1 == "continuer") {
                        cout << "vous continuer pour entrer dans la tour sans d�ranger le vielle homme" << endl;
                        cout << "malheureusement il vous vois et vous interpelle" << endl;
                        cout << "vielle homme : ah je vois, encore un jeune ingrat qui ne respecte pas les seniors" << endl;
                        cout << "le vielle homme se l�ve de sa chaise et sort un pistolet qu'il cachait s�rement" << endl;
                        cout << "vous �tes assez pr�s pour entrer dans la tour mais vous n'arrivez pas car vous �tes t�taniser" << endl;
                        cout << "le vielle homme vous tire dessus et vous mourrez sur le coup" << endl;
                        string path;
                        cin >> path;
                        if (path == "droite") {
                            cout << "une fois arriver � la fin du chemin vous vous trouver dans une grande clairi�re " << endl;
                            cout << "dans cette clairi�re vous voyez un vielle homme assis sur une chaise" << endl;
                            cout << "le vielle homme vous regarde avec des yeux �ffray�" << endl;
                            cout << "vielle homme : non ! non ! ne me faites pas mal s'il vous pla�t j'en ai plus qu'asser !" << endl;
                            cout << "vous regarder cet homme tout en �tant tr�s confus de la situation actuel, vous tentez de calmez le vielle homme mais il se mets a courir aussi t�t" << endl;
                            cout << "suivre ou abandonner ?" << endl;
                            string path2;
                            cin >> path2;
                            if (path2 == "suivre") {
                                cout << "vous commencer a courir apr�s le vielle homme mais vous trebucher sur une branche ou vous mourrez de le shute qui en suit" << endl;
                                cout << "-----------GAME OVER-----------";
                                string path2;
                                cin >> path2;
                                if (path2 == "abandonner") {
                                    cout << "vous laisser le vielle homme s'enfuir et vous vous concentrer sur les alentours" << endl;
                                    cout << "quand vous vous retourner vous senter une leg�re vibration venant de votre poche, on dirait un t�l�phone, vous y repondez seulement pour entendre quelque mots : el psy kongroo" << endl;

                                }

                                else {
                                    cout << "r�ponse invalid" << endl;
                                    cin >> path;
                                    auto i = 0;
                                    return 0;

                                }

                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
