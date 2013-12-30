#include<cstdio>
#include <iostream>
#include "scanner.h"
#include<cstdlib>

using namespace std;

int main(int argc, char *argv[]){
    
    abrir("prueba.txt");
    tipolex t;
 
 do{ 
     t= scanner();   
      
       //ARITMETICOS
     
     if( t == _sum) printf("operador suma \n");
     else if( t == _rest) printf("operador resta \n");
     else if( t == _mult) printf("operador multiplicacion \n");
     else if( t == _div) printf("operador division \n");  
     //PUNTUACION
     else if( t == _punto) printf("operador punto \n");
     else if( t == _puntCom) printf("operador punto y coma \n");
     else if( t == _coma) printf("operador coma \n");
     // PARENTESIS Y CORCHETES
     else if( t == _parIzq) printf("parentesis izquierdo \n");
     else if( t == _parDer) printf("parentesis derecho \n");
     else if( t == _corIzq) printf("corchete izquierdo \n");
     else if( t == _corDer) printf("corchete derecho \n");
     
     // OP. RELACIONALES   _mayQ,_menQ,_mayIg,_menIg, _desig
     else if( t == _mayQ) printf("operador mayor que \n");
     else if( t == _mayIg) printf("operador mayor o igual que \n");
     else if( t == _menQ) printf("operador menor que \n");
     else if( t == _menIg) printf("operador menor o igual que \n");
     else if( t == _desig) printf("operador desigualdad \n");
     else if( t == _igualdad) printf("operador igualdad \n");
     else if( t == _opAsig) printf("operador de asignacion  \n"); 
     //op LOGICOS
     else if( t == _opConj) printf("operador conjuncion \n");
     else if( t == _opDisy) printf("operador disyuncion \n");
     else if( t == _opNeg) printf("operador negacion \n");
     //RESERVADAS
     else if( t == _if) printf("palabra reservada if \n");
     else if( t == _else) printf("palabra reservada else \n");
     else if( t == _then) printf("palabra reservada then \n");
     else if( t == _while) printf("palabra reservada while \n");
     else if( t == _do) printf("palabra reservada do \n");
     else if( t == _begin) printf("palabra reservada begin \n");
     else if( t == _end) printf("palabra reservada end \n");
     
     else if(t == _eof) printf("fin de archivo\n");
     else if( t == _com) printf("comentario \n");     
     
     else if( t == _error){
           printf("encontro un error en la linea ");
            lineaDeError();  
            cout<<endl; 
           }
     else if( t == _id){
           printf("identificador: [ ");
           palabras();
           cout<<"]";
           cout<<endl;
     }
     //NUMEROS
     else if( t == _nHexa){
           printf("numero hexadecimal: [ ");
            palabras();
           cout<<"]";
           cout<<endl;
     }
     else if(t == _nNat){
           printf("numero natural: [ ");
            palabras();
           cout<<"]";
           cout<<endl;
     }
     else if(t == _nOct){
           printf("numero octal: [ ");
            palabras();
           cout<<"]";
           cout<<endl;
     }
     if( t == _nFlot){
          printf("numero flotante: [ ");
           palabras();
           cout<<"]";
           cout<<endl;
     }
  
   } while (t != _eof);
  
  cout<<"lineas analizadas ";
  lineaDeError();
  cout<<endl;
  cerrar();
  system("PAUSE");
  return EXIT_SUCCESS;
}

