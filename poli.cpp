#include <string.h>
#include <iostream>
using namespace std;
 int main(int argc, char * argv[])
 {
   //cout<<"Ejecutable"<<argv[0]<<endl;
   for (int i = 0; i < argc; i++)
   {
     //cout<<"argumento["<<i<<"]:"<<argv[i]<<endl;
     //cout<< argv[i]<<endl;

       if(strcmp(argv[i],"-i")==0) //si es 0 xq son iguales
       {
         cout<<"Integrar"<<endl;
         cout<<argv[2];

       }
       if(strcmp(argv[i],"-g")==0) //si es 0 xq son iguales
       {
         cout<<"PNG"<<endl;
         cout<<argv[2];

       }
       if(strcmp(argv[i],"-v")==0) //si es 0 xq son iguales
       {
         cout<<"Datos integrantes"<<endl;
         cout<<argv[2];

       }
     

       
   }
cout<<"hola"<<endl;
   return 0;
 } 
