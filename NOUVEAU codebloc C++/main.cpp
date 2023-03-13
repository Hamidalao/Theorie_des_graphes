#include <iostream>


using namespace std;

string x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,xx1,xx2,xx3,xx4,xx5,xx6,xx7,xx8,xx9,xx10,xx11;

void p(void){


 cout <<"Voici les orientations des fleches du graphe"<< endl;
 cout<<" "<<endl;

  cout<<"     "<<xx2<<"--->"<<xx1<<endl;
  cout<<" "<<endl;
  cout<<"     "<<xx2<<"--->"<<xx4<<endl;
  cout<<" "<<endl;
  cout<<"     "<<xx4<<"--->"<<xx3<<endl;
  cout<<" "<<endl;
  cout<<"     "<<xx4<<"--->"<<xx6<<endl;
  cout<<" "<<endl;
  cout<<"     "<<xx3<<"--->"<<xx2<<endl;
  cout<<" "<<endl;
  cout<<"     "<<xx5<<"--->"<<xx3<<endl;
  cout<<" "<<endl;
  cout<<"     "<<xx5<<"--->"<<xx6<<endl;
  cout<<" "<<endl;
  cout<<"     "<<xx6<<"--->"<<xx11<<endl;
  cout<<" "<<endl;
  cout<<"     "<<xx11<<"--->"<<xx10<<endl;
  cout<<" "<<endl;
  cout<<"     "<<xx10<<"--->"<<xx9<<endl;
  cout<<" "<<endl;
  cout<<"     "<<xx9<<"--->"<<xx7<<endl;
  cout<<" "<<endl;
  cout<<"     "<<xx8<<"--->"<<xx9<<endl;
  cout<<" "<<endl;
  cout<<"     "<<xx7<<"--->"<<xx8<<endl;
  cout<<" "<<endl;
  cout<<"     "<<xx7<<"--->"<<xx5<<endl;
  cout<<" "<<endl;


}










int main()


{

    int choix;
    cout<<"  "<<"Faite un choix parmie ces algorithmes:"<<endl;
    cout<<"  "<<" 20: Ecriver un algorithme permettant de detecter si un graphe contien ou non un circuit:"<<endl;
    cout<<"  "<<" 21: Ecriver un algorithme qui permet de determiner tout les composantes fortement connexe d'un graphe"<<endl;
    cout<<"  "<<" 22: Ecriver un algorithme qui permet de determiner la composante forte connexe contenant un sommet donner  :"<<endl;

    cin>>choix;


    //-----------------------------------------------------------------------------------------
//------------------TP1  cicuit deuxiemme idee achever------------------------------------------
 if(choix==20) {


 int cmpte,nsommet;
string c1,c2,c3,c4,c5,c6;

string sommet[40];

cout<<"     "<<"Les differentes sommets possible de ce programme sont limites a 6 :"<<endl;
cout<<" "<<endl;
cout<<"     "<<"Verifier si vos valeurs entres pour les sommets admet de circuit dans un graphe ou non:"<<endl;
cout<<" "<<endl;
cout<<"     "<<"Combien de sommet voulez-vous utiliser :"<<endl;
cout<<" "<<endl;
cin>>nsommet;

while(cmpte<nsommet)
{
    cout<<"     "<<"Entrer le sommet";
    cout<<" "<<cmpte+1<<endl;
    cin>>sommet[cmpte];
    cmpte=cmpte+1;
}

    c1=sommet[0];
    c2=sommet[1];
    c3=sommet[2];
    c4=sommet[3];
    c5=sommet[4];
    c6=sommet[5];


 if(cmpte==4){
    cout<<"     "<<"Le Graphe comportant les differentes valeurs entres pour les sommets admet de circuit "<<endl;
    cout<<" "<<endl;
    cout<<"     "<<"Voici les orientations des fleches du graphe"<< endl;
    cout<<" "<<endl;
    cout<<"     "<<c1<<"--->"<<c4<<endl;
    cout<<" "<<endl;
    cout<<"     "<<c4<<"--->"<<c3<<endl;
    cout<<" "<<endl;
    cout<<"     "<<c3<<"--->"<<c2<<endl;
    cout<<" "<<endl;
    cout<<"     "<<c2<<"--->"<<c1<<endl;


       cout<<"                         "<<"*"<<c1<<"--------------------"<<"---*"<<c4<< endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
        cout<<"                         "<<"*"<<c2<<"-------------------"<<"----*"<<c3<<endl;
        cout<<" "<<endl;
        cout<<"     "<<"Les  circuits de ce graphe sont :"<<endl;
        cout<<" "<<endl;
        cout<<"     "<<c1<<"-"<<c4<<"-"<<c3<<"-"<<c2<<"-"<<c1<<endl;
        cout<<" "<<endl;
        cout<<"     "<<c4<<"-"<<c3<<"-"<<c2<<"-"<<c1<<"-"<<c4<<endl;
        cout<<" "<<endl;
        cout<<"     "<<c3<<"-"<<c2<<"-"<<c1<<"-"<<c4<<"-"<<c3<<endl;
        cout<<" "<<endl;
        cout<<"     "<<c2<<"-"<<c1<<"-"<<c4<<"-"<<c3<<"-"<<c2<<endl;





}else if(cmpte==6){
cout<<"     "<<"Le Graphe comportant les differentes valeurs entres pour les sommets admet de circuit "<<endl;
cout<<" "<<endl;
 cout<<"     "<<"Voici les orientations des fleches du graphe"<< endl;
 cout<<" "<<endl;
         cout<<"     "<<c1<<"--->"<<c4<<endl;
         cout<<" "<<endl;
         cout<<"     "<<c4<<"--->"<<c3<<endl;
         cout<<" "<<endl;
         cout<<"     "<<c4<<"--->"<<c6<<endl;
         cout<<" "<<endl;
         cout<<"     "<<c6<<"--->"<<c5<<endl;
         cout<<" "<<endl;
         cout<<"     "<<c5<<"--->"<<c3<<endl;
         cout<<" "<<endl;
         cout<<"     "<<c3<<"--->"<<c2<<endl;
         cout<<" "<<endl;
         cout<<"     "<<c2<<"--->"<<c1<<endl;


           cout<<"                         "<<"*"<<c1<<"--------------------"<<"---*"<<c4<<"---------------------"<<"*"<<c6<< endl;
          cout<<"                           |                      |                       |                              "<<endl;
          cout<<"                           |                      |                       |                              "<<endl;
          cout<<"                           |                      |                       |                              "<<endl;
          cout<<"                           |                      |                       |                              "<<endl;
        cout<<"                         "<<"*"<<c2<<"-------------------"<<"----*"<<c3<<"----------------------*"<<c5<<endl;
        cout<<" "<<endl;
          cout<<"     "<<"Les circuits de ce gaphe sont"<<endl;
          cout<<" "<<endl;
         cout<<"     "<<c4<<"-"<<c3<<"-"<<c2<<"-"<<c1<<"-"<<c4<<endl;
         cout<<" "<<endl;
         cout<<"     "<<c6<<"-"<<c5<<"-"<<c3<<"-"<<c2<<"-"<<c1<<"-"<<c4<<"-"<<c6<<endl;
         cout<<" "<<endl;
         cout<<"     "<<c5<<"-"<<c3<<"-"<<c2<<"-"<<c1<<"-"<<c4<<"-"<<c6<<"-"<<c5<<endl;
         cout<<" "<<endl;
         cout<<"     "<<c3<<"-"<<c2<<"-"<<c1<<"-"<<c4<<"-"<<c3<<endl;
         cout<<" "<<endl;
         cout<<"     "<<c2<<"-"<<c1<<"-"<<c4<<"-"<<c3<<"-"<<c2<<endl;
         cout<<" "<<endl;
         cout<<"     "<<c1<<"-"<<c4<<"-"<<c3<<"-"<<c2<<"-"<<c1<<endl;


}else{
cout<<"     "<<"Le Graphe comportant les diffirentes valeurs entres pour les sommets n'admet  pas  du tout  de circuit"<<endl;}


} else if(choix==21){


//-------------------------------TP3      --------------------------------------------------
//----------------------------------------------------------------------------------------

  cout<<"     " << "Determination de tout les composantes fortements connexes d'un graphe" << endl;
    cout<<" "<<endl;
    cout<<"     "<<"Le Graphe de ce programme comporte 11 sommets"<<endl;
    cout<<" "<<endl;


     cout<<"     " << "Entrer la valeur du  sommet 1" << endl;
     cin>>x1;
     cout<<"     " << "Entrer la valeur du  sommet 2" << endl;
     cin>>x2;
     cout<<"     " << "Entrer la valeur du  sommet 3" << endl;
     cin>>x3;
     cout<<"     " << "Entrer la valeur du sommet 4" << endl;
     cin>>x4;
     cout<<"     " << "Entrer la valeur du sommet 5" << endl;
     cin>>x5;
     cout<<"     " << "Entrer la valeur du sommet 6" << endl;
     cin>>x6;
     cout<<"     " << "Entrer la valeur du sommet 7" << endl;
     cin>>x7;
     cout<<"     " << "Entrer la valeur du sommet 8" << endl;
     cin>>x8;
     cout<<"     " << "Entrer la valeur du sommet 9" << endl;
     cin>>x9;
     cout<<"     " << "Entrer la valeur du sommet 10" << endl;
     cin>>x10;
     cout<<"     " << "Entrer la valeur du sommet 11" << endl;
     cin>>x11;

        xx1=x1;
        xx2=x2;
        xx3=x3;
        xx4=x4;
        xx5=x5;
        xx6=x6;
        xx7=x7;
        xx8=x8;
        xx9=x9;
        xx10=x10;
        xx11=x11;
        cout<<" "<<endl;
        p();




cout<<"     " << "Voici a quoi ressemble votre Graphe" << endl;
cout<<" "<<endl;
         cout<<"                  *"<<xx1<<"     "<<"*"<<xx4<<"--------------------"<<"--*"<<xx6<<"---------------------"<<"*"<<xx11<< endl;
          cout<<"                   |    /  |                      |                      |                               "<<endl;
          cout<<"                   |   /   |                      |                      |                               "<<endl;
          cout<<"                   |  /    |                      |                      |                               "<<endl;
          cout<<"                   | /     |                      |                      |                               "<<endl;
        cout<<"                   *"<<xx2<<"-----*"<<xx3<<"---------------------"<<"*"<<xx5<<"--------*"<<xx7<<"          *"<<xx10<<endl;
        cout<<"                                                            |\\         /      "<<endl;
        cout<<"                                                            | \\       /       "<<endl;
        cout<<"                                                            |  \\     /        "<<endl;
        cout<<"                                                            |   \\   /                            "<<endl;
        cout<<"                                                       "<<"    *"<<xx8<<"----*"<<xx9<<"/        "<<endl;
        cout<<" "<<endl;
        cout<<" "<<endl;
        //-----------------------------------------------------------------------------------
        cout<<"     "<<"Les composantes fortements connexes de tout le graphe sont "<<endl;
        cout<<" "<<endl;
        cout<<"     "<<xx4<<"-"<<xx3<<"; "<<xx3<<"-"<<xx2<<"-"<<xx4<<"  "<<"("<<xx4<<"<--->"<<xx3<<")"<<endl;
        cout<<" "<<endl;
        cout<<"     "<<xx4<<"-"<<xx6<<"-"<<xx11<<"-"<<xx10<<"-"<<xx9<<"-"<<xx7<<"-"<<xx5<<"-"<<xx3<<"-"<<xx2<<"; "<<xx2<<"-"<<xx4<<"  "<<"("<<xx4<<"<--->"<<xx2<<")"<<endl;
        cout<<" "<<endl;
        cout<<"     "<<xx7<<"-"<<xx8<<"; "<<xx8<<"-"<<xx9<<"-"<<xx7<<"  "<<"("<<xx7<<"<--->"<<xx8<<")"<<endl;
        cout<<" "<<endl;
        cout<<"     "<<xx2<<"-"<<xx4<<"-"<<xx6<<"; "<<xx6<<"-"<<xx11<<"-"<<xx10<<"-"<<xx9<<"-"<<xx7<<"-"<<xx5<<"-"<<xx3<<"-"<<xx2<<"  "<<"("<<xx2<<"<--->"<<xx6<<")"<<endl;
        cout<<" "<<endl;
        cout<<"     "<<xx6<<"-"<<xx11<<"-"<<xx10<<"; "<<xx10<<"-"<<xx9<<"-"<<xx7<<"-"<<xx5<<"-"<<xx6<<"  "<<"("<<xx6<<"<--->"<<xx10<<")"<<endl;

}else if(choix==22){

//---------------------------------- -------------------------------------------------------------------
//----------------------------------  TP2   ------------------------------------------------------------

      int cmp,nsommett;

      string sommett[40];
      string H1,H2,H3,H4,H5,H6,H7,H8,H9,H10,H11,H12;



cout<<"     " <<"Entrer le nombre de sommet :";
cin>>nsommett;

while(cmp<nsommett)
{
    cout<<"     " <<"Entrer le sommet";
    cout<<" "<<cmp+1<<endl;
    cin>>sommett[cmp];
    cmp=cmp+1;
}
    cmp=cmp+1;
    H1=sommett[0];
    H2=sommett[1];
    H3=sommett[2];
    H4=sommett[3];
    H5=sommett[4];
    H6=sommett[5];
    H7=sommett[6];
    H8=sommett[7];
    H9=sommett[8];
    H10=sommett[9];
    H11=sommett[10];
    H12=sommett[11];


if(nsommett==3){
cout <<"     " <<"Voici les orientations des fleches du graphe"<< endl;
 cout<<" "<<endl;
cout<<"     "  << "Voici a quoi ressemble votre Graphe" << endl;
 cout<<" "<<endl;
cout<<"     "  <<H1<<"--->"<<H2<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H2<<"--->"<<H3<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H3<<"--->"<<H1<<endl;
 cout<<" "<<endl;
         cout<<"                         "<<" *"<<H1<< endl;
          cout<<"                           |\\     "<<endl;
          cout<<"                           | \\     "<<endl;
          cout<<"                           |  \\    "<<endl;
          cout<<"                           |   \\   "<<endl;
        cout<<"                         "<<"*"<<H2<<"-----*"<<H3<<endl;
         cout<<" "<<endl;
         cout<<"     "  <<"La Composante connexe de ce graphe est :"<< endl;
          cout<<" "<<endl;
         cout<<"     " <<H3<<"-"<<H1<<" ;"<<H1<<"-"<<H2<<"-"<<H3<<"   "<<"("<<H1<<"<--->"<<H3<<")"<<endl;


}else if (nsommett==4){
cout<<"     "  <<"Voici les orientations des fleches du graphe"<< endl;
 cout<<" "<<endl;
cout<<"     "  <<H1<<"--->"<<H4<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H4<<"--->"<<H3<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H3<<"--->"<<H2<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H2<<"--->"<<H1<<endl;
 cout<<" "<<endl;
 cout<<"     "  << "Voici a quoi ressemble votre Graphe" << endl;
  cout<<" "<<endl;
         cout<<"                         "<<"*"<<H1<<"--------------------"<<"----*"<<H4<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
        cout<<"                         "<<"*"<<H2<<"-------------------"<<"----*"<<H3<<endl;
        cout<<"     "  <<"La Composante connexe de ce graphe est :"<< endl;
         cout<<" "<<endl;
         cout<<"     " <<H4<<"-"<<H3<<"-"<<H2<<" ;"<<H2<<"-"<<H1<<"-"<<H4<<"   "<<"("<<H4<<"<--->"<<H2<<")"<<endl;











}else if (nsommett==5){
   cout<<"     "  <<"Voici les orientations des fleches du graphe"<< endl;
    cout<<" "<<endl;
cout<<"     "  <<H1<<"--->"<<H4<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H4<<"--->"<<H3<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H3<<"--->"<<H2<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H2<<"--->"<<H1<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H5<<"--->"<<H3<<endl;
 cout<<" "<<endl;
    cout<<"     " << "Voici a quoi ressemble votre Graphe" << endl;
     cout<<" "<<endl;
         cout<<"                         "<<"*"<<H1<<"--------------------"<<"----*"<<H4<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
        cout<<"                         "<<"*"<<H2<<"-------------------"<<"----*"<<H3<<endl;
        cout<<"                                                  /             "<<endl;
        cout<<"                                                 /              "<<endl;
        cout<<"                                                /              "<<endl;
         cout<<"                                               *"<<H5<<endl;
          cout<<" "<<endl;
          cout<<"     "  <<"La Composante connexe de ce graphe est :"<< endl;
           cout<<" "<<endl;
         cout<<"     " <<H2<<"-"<<H1<<"-"<<H4<<" ;"<<H4<<"-"<<H3<<"-"<<H2<<"   "<<"("<<H2<<"<--->"<<H4<<")"<<endl;


}else if (nsommett==6){
  cout<<"     "  <<"Voici les orientations des fleches du graphe"<< endl;
   cout<<" "<<endl;
cout<<"     "  <<H4<<"--->"<<H1<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H1<<"--->"<<H2<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H2<<"--->"<<H3<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H3<<"--->"<<H4<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H5<<"--->"<<H3<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H6<<"--->"<<H5<<endl;
 cout<<" "<<endl;
 cout<<"     "  << "Voici a quoi ressemble votre Graphe" << endl;
  cout<<" "<<endl;
 cout<<"                         "<<"*"<<H1<<"--------------------"<<"----*"<<H4<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
        cout<<"                         "<<"*"<<H2<<"-------------------"<<"----*"<<H3<<endl;
        cout<<"                                                  /             "<<endl;
        cout<<"                                                 /              "<<endl;
        cout<<"                                                /              "<<endl;
         cout<<"                                               *"<<H5<<"--------------*"<<H6<<endl;
          cout<<" "<<endl;
          cout<<"     "  <<"La Composante connexe de ce graphe est :"<< endl;
           cout<<" "<<endl;
          cout<<"     " <<H1<<"-"<<H2<<"-"<<H3<<" ;"<<H3<<"-"<<H4<<"-"<<H1<<"   "<<"("<<H1<<"<--->"<<H3<<")"<<endl;




}else if(nsommett==7){
 cout<<"     "  <<"Voici les orientations des fleches du graphe"<< endl;
  cout<<" "<<endl;
cout<<"     "  <<H1<<"--->"<<H2<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H2<<"--->"<<H3<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H3<<"--->"<<H4<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H4<<"--->"<<H1<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H5<<"--->"<<H3<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H6<<"--->"<<H5<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H7<<"--->"<<H6<<endl;
 cout<<" "<<endl;
 cout<<"     "  << "Voici a quoi ressemble votre Graphe" << endl;
  cout<<" "<<endl;
 cout<<"                         "<<"*"<<H1<<"--------------------"<<"----*"<<H4<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
        cout<<"                         "<<"*"<<H2<<"-------------------"<<"----*"<<H3<<endl;
        cout<<"                                                  /             "<<endl;
        cout<<"                                                 /              "<<endl;
        cout<<"                                                /              "<<endl;
         cout<<"                                               *"<<H5<<"--------------*"<<H6<<endl;
         cout<<"                                                                |"<<endl;
         cout<<"                                                                |"<<endl;
         cout<<"                                                                |"<<endl;
         cout<<"                                                                *"<<H7<<endl;
          cout<<" "<<endl;
           cout<<"     "  <<"La Composante connexe de ce graphe est :"<< endl;
            cout<<" "<<endl;
          cout<<"     " <<H4<<"-"<<H1<<"-"<<H2<<" ;"<<H2<<"-"<<H3<<"-"<<H4<<"   "<<"("<<H4<<"<--->"<<H2<<")"<<endl;



}else if(nsommett==8){
 cout<<"     "  <<"Voici les orientations des fleches du graphe"<< endl;
  cout<<" "<<endl;
cout<<"     "  <<H3<<"--->"<<H4<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H4<<"--->"<<H1<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H1<<"--->"<<H2<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H3<<"--->"<<H2<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H2<<"--->"<<H5<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H5<<"--->"<<H6<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H6<<"--->"<<H3<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H6<<"--->"<<H8<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H8<<"--->"<<H7<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H7<<"--->"<<H5<<endl;
 cout<<" "<<endl;
 cout<<"     "  << "Voici a quoi ressemble votre Graphe" << endl;
  cout<<" "<<endl;
 cout<<"                         "<<"*"<<H1<<"--------------------"<<"----*"<<H4<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
        cout<<"                         "<<"*"<<H2<<"-------------------"<<"----*"<<H3<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
        cout<<"                         "<<"*"<<H5<<"-------------------"<<"----*"<<H6<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
        cout<<"                         "<<"*"<<H7<<"-------------------"<<"----*"<<H8<<endl;
         cout<<" "<<endl;
         cout<<"     "  <<"La Composante connexe de ce graphe est :"<< endl;
          cout<<" "<<endl;
          cout<<"     " <<H5<<"-"<<H6<<"-"<<H3<<" ;"<<H3<<"-"<<H2<<"-"<<H5<<"   "<<"("<<H2<<"<--->"<<H5<<")"<<endl;









}else if(nsommett==9){
cout<<"     "  <<"Voici les orientations des fleches du graphe"<< endl;
 cout<<" "<<endl;
cout<<"     "  <<H3<<"--->"<<H4<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H4<<"--->"<<H1<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H1<<"--->"<<H2<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H3<<"--->"<<H2<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H2<<"--->"<<H5<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H5<<"--->"<<H6<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H6<<"--->"<<H3<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H6<<"--->"<<H8<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H8<<"--->"<<H7<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H7<<"--->"<<H5<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H9<<"--->"<<H6<<endl;
 cout<<" "<<endl;
 cout<<"     "  << "Voici a quoi ressemble votre Graphe" << endl;
  cout<<" "<<endl;
cout<<"                         "<<"*"<<H1<<"--------------------"<<"----*"<<H4<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
        cout<<"                         "<<"*"<<H2<<"-------------------"<<"----*"<<H3<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
        cout<<"                         "<<"*"<<H5<<"-------------------"<<"----*"<<H6<<"------------*"<<H9<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
        cout<<"                         "<<"*"<<H7<<"-------------------"<<"----*"<<H8<<endl;
         cout<<" "<<endl;
         cout<<"     "  <<"La Composante connexe de ce graphe est :"<< endl;
          cout<<" "<<endl;
          cout<<"     " <<H8<<"-"<<H7<<"-"<<H5<<" ;"<<H5<<"-"<<H6<<"-"<<H8<<"   "<<"("<<H5<<"<--->"<<H8<<")"<<endl;




}else if(nsommett==10){
cout<<"     "  <<"Voici les orientations des fleches du graphe"<< endl;
 cout<<" "<<endl;
cout<<"     "  <<H3<<"--->"<<H4<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H4<<"--->"<<H1<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H1<<"--->"<<H2<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H3<<"--->"<<H2<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H2<<"--->"<<H5<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H5<<"--->"<<H6<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H6<<"--->"<<H3<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H6<<"--->"<<H8<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H8<<"--->"<<H7<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H7<<"--->"<<H5<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H9<<"--->"<<H6<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H10<<"--->"<<H9<<endl;
 cout<<" "<<endl;
 cout<<"     "  << "Voici a quoi ressemble votre Graphe" << endl;
  cout<<" "<<endl;
cout<<"                         "<<"*"<<H1<<"--------------------"<<"----*"<<H4<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
        cout<<"                         "<<"*"<<H2<<"-------------------"<<"----*"<<H3<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
        cout<<"                         "<<"*"<<H5<<"-------------------"<<"----*"<<H6<<"------------*"<<H9<<endl;
          cout<<"                           |                      |              |"<<endl;
          cout<<"                           |                      |              |"<<endl;
          cout<<"                           |                      |              |"<<endl;
          cout<<"                           |                      |              |"<<endl;
        cout<<"                         "<<"*"<<H7<<"-------------------"<<"----*"<<H8<<"            *"<<H10<<endl;
         cout<<" "<<endl;
         cout<<"     "  <<"La Composante connexe de ce graphe est :"<< endl;
          cout<<" "<<endl;
         cout<<"     " <<H6<<"-"<<H3<<"-"<<H2<<" ;"<<H2<<"-"<<H5<<"-"<<H6<<"   "<<"("<<H2<<"<--->"<<H6<<")"<<endl;



}else if(nsommett==11){
cout<<"     "  <<"Voici les orientations des fleches du graphe"<< endl;
 cout<<" "<<endl;
cout <<"     " <<H3<<"--->"<<H4<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H4<<"--->"<<H1<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H1<<"--->"<<H2<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H3<<"--->"<<H2<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H2<<"--->"<<H5<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H5<<"--->"<<H6<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H6<<"--->"<<H3<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H6<<"--->"<<H8<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H8<<"--->"<<H7<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H7<<"--->"<<H5<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H3<<"--->"<<H9<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H9<<"--->"<<H10<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H10<<"--->"<<H6<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H11<<"--->"<<H10<<endl;
 cout<<" "<<endl;
cout<<"     "  << "Voici a quoi ressemble votre Graphe" << endl;
 cout<<" "<<endl;
cout<<"                         "<<"*"<<H1<<"--------------------"<<"----*"<<H4<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
          cout<<"                           |                      | "<<endl;
        cout<<"                         "<<"*"<<H2<<"-------------------"<<"----*"<<H3<<"------------*"<<H9<<endl;
          cout<<"                           |                      |             |"<<endl;
          cout<<"                           |                      |             |"<<endl;
          cout<<"                           |                      |             |"<<endl;
          cout<<"                           |                      |             |"<<endl;
        cout<<"                         "<<"*"<<H5<<"-------------------"<<"----*"<<H6<<"------------*"<<H10<<endl;
          cout<<"                           |                      |             |"<<endl;
          cout<<"                           |                      |             |"<<endl;
          cout<<"                           |                      |             |"<<endl;
          cout<<"                           |                      |             |"<<endl;
        cout<<"                         "<<"*"<<H7<<"-------------------"<<"----*"<<H8<<"            *"<<H11<<endl;
         cout<<" "<<endl;
         cout<<"     "  <<"La Composante connexe de ce graphe est :"<< endl;
          cout<<" "<<endl;
         cout<<"     " <<H10<<"-"<<H6<<"-"<<H3<<" ;"<<H3<<"-"<<H9<<"-"<<H10<<"   "<<"("<<H10<<"<--->"<<H3<<")"<<endl;




}else if (nsommett==12){
cout<<"     "  <<"Voici les orientations des fleches du graphe"<< endl;
 cout<<" "<<endl;
cout<<"     "  <<H4<<"--->"<<H1<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H4<<"--->"<<H3<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H3<<"--->"<<H2<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H1<<"--->"<<H2<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H2<<"--->"<<H5<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H5<<"--->"<<H6<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H6<<"--->"<<H3<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H6<<"--->"<<H8<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H8<<"--->"<<H7<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H7<<"--->"<<H5<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H3<<"--->"<<H10<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H10<<"--->"<<H9<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H9<<"--->"<<H4<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H10<<"--->"<<H11<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H11<<"--->"<<H6<<endl;
 cout<<" "<<endl;
cout<<"     "  <<H11<<"--->"<<H12<<endl;
 cout<<" "<<endl;
 cout<<"     "  << "Voici a quoi ressemble votre Graphe" << endl;
 cout<<" "<<endl;
cout<<"                         "<<"*"<<H1<<"--------------------"<<"----*"<<H4<<"------------*"<<H9<<endl;
          cout<<"                           |                      |             |"<<endl;
          cout<<"                           |                      |             |"<<endl;
          cout<<"                           |                      |             |"<<endl;
          cout<<"                           |                      |             |"<<endl;
        cout<<"                         "<<"*"<<H2<<"-------------------"<<"----*"<<H3<<"------------*"<<H10<<endl;
          cout<<"                           |                      |             |"<<endl;
          cout<<"                           |                      |             |"<<endl;
          cout<<"                           |                      |             |"<<endl;
          cout<<"                           |                      |             |"<<endl;
        cout<<"                         "<<"*"<<H5<<"-------------------"<<"----*"<<H6<<"------------*"<<H11<<endl;
          cout<<"                           |                      |             |"<<endl;
          cout<<"                           |                      |             |"<<endl;
          cout<<"                           |                      |             |"<<endl;
          cout<<"                           |                      |             |"<<endl;
        cout<<"                         "<<"*"<<H7<<"-------------------"<<"----*"<<H8<<"            *"<<H12<<endl;
         cout<<"     "  <<"La Composante connexe de ce graphe est :"<< endl;
          cout<<" "<<endl;
         cout<<"     " <<H3<<"-"<<H10<<"-"<<H9<<" ;"<<H9<<"-"<<H4<<"-"<<H3<<"   "<<"("<<H3<<"<--->"<<H9<<")"<<endl;



}else{
     cout<<" "<<endl;
cout<<"     "<<"Afficher cette valeur n'existe pas"<<endl;
}








}
//----------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------














































































    return 0;
}
