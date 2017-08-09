#include <iostream.h>
#include <stdlib.h>;

#include <conio.h>


int main()
{
     int a,b,c,d,multiplicacion,dias_extras,resta;
     a=0;
     b=0;
     c=0;
     d=0;
     
     cout<<"escribe tu salario total";
     cin>>a;
     cout<<"escribe tus dias trabajados";
     cin>>b;
     cout<<multiplicacion= a*b;
     cout<<"tu salario total es";
     cout<<multiplicacion <<endl;
     cout<<"cuantos dias extras trabajaste este mes";
     cin>>c;
     cout<<dias_extras= a*c;
     cout<<"salario de dias extras este mes";
     cout<<dias_extras<<endl;
     cout<<"cuanto es tu prestamo";
     cin>>d;
     cout<<resta=(dias_extras+multiplicacion)-d;
     cout<<"el total de tu sueldo es";     
     cout<<resta <<endl;
     cout<<"gracias por utilizar nuestro sistema";
     system("pause");
     
     return 0;
     
     }
    
