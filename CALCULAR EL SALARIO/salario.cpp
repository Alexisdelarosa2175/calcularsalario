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
     
     cout<<"escribe tu salario total este mes";
     cin>>a;
     cout<<"escribe tus dias trabajados";
     cin>>b;
     cout<<multiplicacion= a*b;
     cout<<"tu salario total es";
     cout<<multiplicacion <<endl;
     cout<<"cuantas horas extras trabajaste este mes";
     cin>>c;
     cout<<dias_extras= a*c;
     cout<<"salario de horas extras este mes";
     cout<<dias_extras<<endl;
     cout<<" si tienes prestamos de cuanto es";
     cin>>d;
     cout<<resta=(dias_extras+multiplicacion)-d;
     cout<<"el total de tu sueldo es";     
     cout<<resta <<endl;
     cout<<"gracias por utilizar nuestro sistema";
     system("pause");
     
     return 0;
     
     }
    
