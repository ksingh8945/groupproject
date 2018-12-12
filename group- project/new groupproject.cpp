#include <iostream>
#include <math.h>
using namespace std;
void acent();
void lantra();
void camry();
void pirus();
void acod();
void maza();
void cx();
void kia();
void seranto();
void civic();
void crola();
void pc();
void menu();
void bill();
void paragraph();
int main()
{
    paragraph();
}

void paragraph()
{

    
        
    int a,b,c,d;
    {
    
    menu();
           
            
            
           
             cout<<" 1. for fuel efficent cars "<<endl;
             cout<<" 2. for Realiable   cars  "<<endl;
             cout<<" 3 . for  exit "<<endl;
             
      cin>>b;
      if(b==1){
          cout<<" Press 1 for Hyundai "<<endl;
          cout<<" Press 2 for Toyota "<<endl;
          cout<<" Press 3 for Honda "<<endl;
          cin>>c;
          if(c==1)
          {
           cout<<" press 1 for Accent "<<endl;
           cout<<" press 2 for Elantra"<<endl;
           cin>>d;
           if(d==1){
               acent();
           }
           else if(d==2)
           {
               lantra();
           }
            }
          else if (c==2)
          {
            cout<<" press 1 for Camry "<<endl;
            cout<<" press 2 for Pirus "<<endl;
            cin>>d;
            if(d==1){
                camry();
            }
            else if (d==2)
            {
                pirus();
            }

          }
          else if (c==3)
          {
              cout<<" press 1 for Accord "<<endl;
              cout<<" press 2 for Civic  "<<endl;
              cin>>d;
              if(d==1)
              {
                  acod();
                
                  }
              }
              else if (d==2)
              {
                  civic();
              }

          }}

       if (b==2)
      {
         cout<<" Press 1 for Mazda "<<endl;
          cout<<" Press 2 for Kia  "<<endl;
          cout<<" Press 3 for Toyota "<<endl;
          cin>>c; 
          if(c==1)
          {
           cout<<" press 1 for Mazda Cx-3  "<<endl;
           cout<<" press 2 for Mazda Cx-5GT"<<endl;
           cin>>d;
           if (d==1)
           {
               maza();
           }
           else if (d==2)
           {
               cx();
           }
          }
          else if (c==2)
          {
              cout<<" press 1 for Kia Sedan "<<endl;
              cout<<" press 2 for Sorento "<<endl;
              cin>>d;
              if (d==1)
              {
                  kia();
              }
              else if (d==2)
              {
                  seranto();
              }


          }
          else if (c==3)
          {
              cout<<" press 1 for Corolla "<<endl;
              cout<<" press 2 for Pirus C "<<endl;
              cin>>d;
              if(d==1)
              {
                  crola();
              }
              else if (d==2)
              {
                  pc();
              }

          }}    

      }
      



        void menu ()
        {
int a;

    cout<<"*******************************"<<endl;
    cout<<"                               "<<endl;
    cout<<"   Welcome in our car showroom    "<<endl;
    cout<<"                               "<<endl;
    cout<<"*******************************"<<endl;
    cout<<"    "<<endl;
    



        }

       void bill(){
           char x[10],y[10],z[10];
           cout<<"   "<<endl;
           cout<<" Enter your first name  : ";
           cin>>x;
           cout<<" Enter your last name   : ";
           cin>>y;
           cout<<" Fill your card number   : ";
           cin>>z;
           {
               cout<<"           "<<endl;
               cout<<"First name :"<<x<<endl;
               cout<<"Last  name :"<<y<<endl;
               cout<<"_____________________"<<endl;

           } }


          