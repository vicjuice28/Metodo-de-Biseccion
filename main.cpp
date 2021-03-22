#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

//Variables globales
double Xi= 1, Xs= 2 , Xm, Fxi, Fxs, Fxm, XmA=1;
double tolerancia = 0.01;
double Error;
int i=0;



void tabla(){

// Funcion = (x^3)+(2x^2)+10x-20 =0
//Error < 0.01

/**Condicionales
 Si f(Xi)*f(xm) < 0 entonces Xs = Xm
 Si f(Xi)*f(Xm) > 0 entonces  Xi = Xm
 Si f(Xi)*f(Xm) = 0 entonces termina
 **/




    //Imprime cabecera de tabla
cout<<setw(7)<<"i"<<setw(7)<<"Xi"<<setw(7)<<"Xs"<<setw(7)<<"Xm"<<setw(7)<<"Fxi"<<setw(7)<<"Fxs"<<setw(7)<<"Fxm"<<setw(7)<<"Error"<<endl;
do
{
    
    Xm = ((Xi+Xs)/2);
    Error =abs(((Xm-XmA) /Xm)*100);
    Fxi = ((pow(Xi,3))+(pow(Xi,2)*2)+((Xi*10))-20);
    Fxs = ((pow(Xs,3))+(pow(Xs,2)*2)+((Xs*10))-20);
    Fxm = ((pow(Xm,3))+(pow(Xm,2)*2)+((Xm*10))-20);
    
    XmA = Xm;


    if ((Fxi*Fxm)<0)
        {
            Xs = Xm;
        }
    
     if((Fxi*Fxm)>0)
        {
            Xi = Xm;
        }
        i++;
        cout<<setw(7)<<setprecision(3)<<i<<"\t"<<setw(7)<<setprecision(3)<<Xi<<"\t"<<setw(7)<<setprecision(3)<<Xs<<"\t"<<setw(7)<<setprecision(3)<<Xm<<"\t"<<setw(7)<<setprecision(3)<<Fxi<<"\t"<<setw(7)<<setprecision(3)<<Fxs<<"\t"<<setw(7)<<setprecision(3)<<Fxm<<"\t"<<setw(7)<<setprecision(3)<<Error<<endl;
    
} while (Error >= tolerancia);












}

int main (){


  


tabla();







    return 0;
}