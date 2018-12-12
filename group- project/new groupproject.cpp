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






 void acent()
          {
            int acentprice=17000;
            int aa,bb;  
              cout<<" City Mileage =  9.0Kmpl "<<endl;
              cout<<" Fuel type    =  Petrol "<<endl;
              cout<<" Engine(cc)   =  1495   "<<endl;
              cout<<" Seating      =    5    "<<endl;
              cout<<"____________________________"<<endl;
              cout<<" price       =   $ 17,000 "<<endl;


                cout<<" enter 1 to buy this  car "<<endl;
                cout<<" enter 2 to return to menu"<<endl;
                cin>>aa;
                if (aa==1)
                {
                    cout<<" Press 1 to fill the bill "<<endl;
                    cout<<" press 2 to exit "<<endl;
                    cin>>bb;
                    if(bb==1)
                    {
                        cout<<" your payment is $ 17000 +tax"<<endl;
                        {
                        bill();
                        }
                        cout<<" you filled your payment  $"<<acentprice<<endl;
                        cout<<" ************************"<<endl;
                        cout<<" Thanks for visiting "<<endl;
                    }
                    else if ( bb==2)
                    {
                        cout<<endl;
                    }
                }

            else if (aa==2)
            {
                paragraph();
            }



          }
          void lantra ()
          {
               int lantraprice=19000;
            int aa,bb;  

              cout<<" City Mileage =  28Mpg "<<endl;
              cout<<" Fuel type    =  Regular gas "<<endl;
              cout<<" Engine(cc)   =  1500   "<<endl;
              cout<<" Seating      =    5    "<<endl;
              cout<<"____________________________"<<endl;
              cout<<" price       =   $ 19,000 "<<endl;



              cout<<"              "<<endl;
               cout<<" enter 1 to buy this  car "<<endl;
                cout<<" enter 2 to return to menu"<<endl;
                cin>>aa;
                if (aa==1)
                {
                    cout<<" Press 1 to fill the bill "<<endl;
                    cout<<" press 2 to exit "<<endl;
                    cin>>bb;
                    if(bb==1)
                    {
                        cout<<" your payment is $ 19000 +tax"<<endl;
                        {
                        bill();
                        }
                        cout<<" you filled your payment  $"<<lantraprice<<endl;
                        cout<<" ************************"<<endl;
                        cout<<" Thanks for visiting "<<endl;
                    }
                    else if ( bb==2)
                    {
                        cout<<endl;
                    }
                }

            else if (aa==2)
            {
                paragraph();
            }
           

          }



          void camry()
          {
           int camryprice=25000;
            int aa,bb;  
              
              cout<<" City Mileage =  39Mpg "<<endl;
              cout<<" Fuel type    =  Regular gas "<<endl;
              cout<<" Engine(cc)   =  203hp @ 6600Rpm  "<<endl;
              cout<<" Seating      =    5    "<<endl;
              cout<<"____________________________"<<endl;
              cout<<" price       =   $ 25,000 "<<endl;


               cout<<"              "<<endl;
               cout<<" enter 1 to buy this  car "<<endl;
                cout<<" enter 2 to return to menu"<<endl;
                cin>>aa;
                if (aa==1)
                {
                    cout<<" Press 1 to fill the bill "<<endl;
                    cout<<" press 2 to exit "<<endl;
                    cin>>bb;
                    if(bb==1)
                    {
                        cout<<" your payment is $ 25000 +tax"<<endl;
                        {
                        bill();
                        }
                        cout<<" you filled your payment  $"<<camryprice<<endl;
                        cout<<" ************************"<<endl;
                        cout<<" Thanks for visiting "<<endl;
                    }
                    else if ( bb==2)
                    {
                        cout<<endl;
                    }
                }

            else if (aa==2)
            {
                 paragraph();
            }
           
          }


          void pirus()
          {
               int pirusprice=24000;
            int aa,bb;  
               cout<<" City Mileage =  54Mpg "<<endl;
              cout<<" Fuel type    =  Regular gas "<<endl;
              cout<<" Engine(cc)   =  121hp @ 5200Rpm  "<<endl;
              cout<<" Seating      =    5    "<<endl;
              cout<<"____________________________"<<endl;
              cout<<" price       =   $ 24,000 "<<endl;


               cout<<"              "<<endl;
               cout<<" enter 1 to buy this  car "<<endl;
                cout<<" enter 2 to return to menu"<<endl;
                cin>>aa;
                if (aa==1)
                {
                    cout<<" Press 1 to fill the bill "<<endl;
                    cout<<" press 2 to exit "<<endl;
                    cin>>bb;
                    if(bb==1)
                    {
                        cout<<" your payment is $ 24000 +tax"<<endl;
                        {
                        bill();
                        }
                        cout<<" you filled your payment  $"<<pirusprice<<endl;
                        cout<<" ************************"<<endl;
                        cout<<" Thanks for visiting "<<endl;
                    }
                    else if ( bb==2)
                    {
                        cout<<endl;
                    }
                }

            else if (aa==2)
            {
                paragraph();
            }


          }


 void acod()
          {
               int acodprice=25780;
            int aa,bb;  
               cout<<" City Mileage =  29Mpg "<<endl;
              cout<<" Fuel type    =  Regular gas "<<endl;
              cout<<" Engine(cc)   =  192hp @ 5500Rpm  "<<endl;
              cout<<" Seating      =    5    "<<endl;
              cout<<"____________________________"<<endl;
              cout<<" price       =   $ 25,780 "<<endl;

               cout<<"              "<<endl;
               cout<<" enter 1 to buy this  car "<<endl;
                cout<<" enter 2 to return to menu"<<endl;
                cin>>aa;
                if (aa==1)
                {
                    cout<<" Press 1 to fill the bill "<<endl;
                    cout<<" press 2 to exit "<<endl;
                    cin>>bb;
                    if(bb==1)
                    {
                        cout<<" your payment is $ 25780 +tax"<<endl;
                        {
                        bill();
                        }
                        cout<<" you filled your payment  $"<<acodprice<<endl;
                        cout<<" ************************"<<endl;
                        cout<<" Thanks for visiting "<<endl;
                    }
                    else if ( bb==2)
                    {
                        cout<<endl;
                    }
                }

            else if (aa==2)
            {
                paragraph();
            }


          }
          void civic(){
               int civicprice=19740;
            int aa,bb;  

               cout<<" City Mileage =  31Mpg "<<endl;
              cout<<" Fuel type    =  Regular gas "<<endl;
              cout<<" Engine(cc)   =  158hp @ 6500Rpm  "<<endl;
              cout<<" Seating      =    5    "<<endl;
              cout<<"____________________________"<<endl;
              cout<<" price       =   $ 19,740 "<<endl;


               cout<<"              "<<endl;
               cout<<" enter 1 to buy this  car "<<endl;
                cout<<" enter 2 to return to menu"<<endl;
                cin>>aa;
                if (aa==1)
                {
                    cout<<" Press 1 to fill the bill "<<endl;
                    cout<<" press 2 to exit "<<endl;
                    cin>>bb;
                    if(bb==1)
                    {
                        cout<<" your payment is $ 19740 +tax"<<endl;
                        {
                        bill();
                        }
                        cout<<" you filled your payment  $"<<civicprice<<endl;
                        cout<<" ************************"<<endl;
                        cout<<" Thanks for visiting "<<endl;
                    }
                    else if ( bb==2)
                    {
                        cout<<endl;
                    }
                }

            else if (aa==2)
            {
                paragraph();
            }
          }
          void maza()
          {
               int mazaprice=12740;
            int aa,bb;  
              
               cout<<" City Mileage =  25Mpg "<<endl;
              cout<<" Fuel type    =  Regular gas "<<endl;
              cout<<" Engine(cc)   =  118hp @ 2500Rpm  "<<endl;
              cout<<" Seating      =    5    "<<endl;
              cout<<"____________________________"<<endl;
              cout<<" price       =   $ 12,740 "<<endl;


               cout<<"              "<<endl;
               cout<<" enter 1 to buy this  car "<<endl;
                cout<<" enter 2 to return to menu"<<endl;
                cin>>aa;
                if (aa==1)
                {
                    cout<<" Press 1 to fill the bill "<<endl;
                    cout<<" press 2 to exit "<<endl;
                    cin>>bb;
                    if(bb==1)
                    {
                        cout<<" your payment is $ 12740 +tax"<<endl;
                        {
                        bill();
                        }
                        cout<<" you filled your payment  $"<<mazaprice<<endl;
                        cout<<" ************************"<<endl;
                        cout<<" Thanks for visiting "<<endl;
                    }
                    else if ( bb==2)
                    {
                        cout<<endl;
                    }
                }

            else if (aa==2)
            {
                paragraph();
            }
          }

          void cx()
          {
               int cxprice=15740;
            int aa,bb;  
               cout<<" City Mileage =  27Mpg "<<endl;
              cout<<" Fuel type    =  Regular gas "<<endl;
              cout<<" Engine(cc)   =  122hp @ 2600Rpm  "<<endl;
              cout<<" Seating      =    6    "<<endl;
              cout<<"____________________________"<<endl;
              cout<<" price       =   $ 15,740 "<<endl;

               cout<<"              "<<endl;
               cout<<" enter 1 to buy this  car "<<endl;
                cout<<" enter 2 to return to menu"<<endl;
                cin>>aa;
                if (aa==1)
                {
                    cout<<" Press 1 to fill the bill "<<endl;
                    cout<<" press 2 to exit "<<endl;
                    cin>>bb;
                    if(bb==1)
                    {
                        cout<<" your payment is $ 15740 +tax"<<endl;
                        {
                        bill();
                        }
                        cout<<" you filled your payment  $"<<cxprice<<endl;
                        cout<<" ************************"<<endl;
                        cout<<" Thanks for visiting "<<endl;
                    }
                    else if ( bb==2)
                    {
                        cout<<endl;
                    }
                }

            else if (aa==2)
            {
                paragraph();
            }
          }
        void kia()
        {
             int kiaprice=12740;
            int aa,bb;  

             cout<<" City Mileage =  25Mpg "<<endl;
              cout<<" Fuel type    =  Regular gas "<<endl;
              cout<<" Engine(cc)   =  118hp @ 2500Rpm  "<<endl;
              cout<<" Seating      =    5    "<<endl;
              cout<<"____________________________"<<endl;
              cout<<" price       =   $ 12,740 "<<endl;


               cout<<"              "<<endl;
               cout<<" enter 1 to buy this  car "<<endl;
                cout<<" enter 2 to return to menu"<<endl;
                cin>>aa;
                if (aa==1)
                {
                    cout<<" Press 1 to fill the bill "<<endl;
                    cout<<" press 2 to exit "<<endl;
                    cin>>bb;
                    if(bb==1)
                    {
                        cout<<" your payment is $ 12740 +tax"<<endl;
                        {
                        bill();
                        }
                        cout<<" you filled your payment  $"<<kiaprice<<endl;
                        cout<<" ************************"<<endl;
                        cout<<" Thanks for visiting "<<endl;
                    }
                    else if ( bb==2)
                    {
                        cout<<endl;
                    }
                }

            else if (aa==2)
            {
                paragraph();
            }
        } 



          
