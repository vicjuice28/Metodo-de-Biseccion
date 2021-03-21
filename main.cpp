#include <iostream>
#include <math.h>
using namespace std;

//Variables globales
double Xi= 1, Xs= 2 , Fxi, Fxs, Fxm;
double tolerancia = 0.01;
double Xm = ((Xi+Xs)/2);



void tabla(){

    //Imprime cabecera de tabla
cout<<"Xi\tXs\tXm\tF(Xi)\tF(Xs)\tF(Xm)\tError"<<endl;
for (int i = 0; i <=12; i++)
{

    Fxi = ((pow(Xi,3))+(pow(Xi,2)*2)+((Xi*10))-20);
    Fxs = ((pow(Xs,3))+(pow(Xs,2)*2)+((Xs*10))-20);
    Fxm = ((pow(Xm,3))+(pow(Xm,2)*2)+((Xm*10))-20);

cout<<Xi<<"\t"<<Xs<<"\t"<<Xm<<"\t"<<Fxi<<"\t"<<Fxs<<"\t"<<Fxm<<"\t"<<"0"<<endl;
    if (Fxi*Fxm<0)
        {
            Xs = Xm;
        }
        else{
                 if(Fxi*Fxm>0)
                {
                    Xi = Xm;
                }

        }
    



   
  
  



}











}

int main (){

// Funcion = (x^3)+(2x^2)+10x-20 =0
//Error < 0.01

/**Condicionales
 Si f(Xi)*f(xm) < 0 entonces Xs = Xm
 Si f(Xi)*f(Xm) > 0 entonces  Xi = Xm
 Si f(Xi)*f(Xm) = 0 entonces termina
 **/
  


tabla();







    return 0;
}