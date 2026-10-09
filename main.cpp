
#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;

int main()
{ const double GBP_Bendras   = 0.8729,
GBP_Pirkti    = 0.8600,
GBP_Parduoti  = 0.9220,

USD_Bendras   = 1.1793,
USD_Pirkti    = 1.1460,
USD_Parduoti  = 1.2340,

INR_Bendras   = 104.6918,
INR_Pirkti    = 101.3862,
INR_Parduoti  = 107.8546;

int veiksmas, valiuta, suma;
    
    cout<<"***********************************************"<<endl;
    cout<<"                    Meniu                     "<<endl;
    cout<<"***********************************************"<<endl;
   
    cout<<"              Palyginti spauskite 1             "<<endl;
    cout<<"              Parduoti spauskite 2             "<<endl;
    cout<<"               Pirkti spauskite 3              "<<endl;
    cout<<"               iseiti spauskite 4              "<<endl;
    cout<<"***********************************************"<<endl;
    cin>>veiksmas;
    //palyginti ====================================
    if(veiksmas==1)
    {
    cout<<"          Valiutu palyginimas       "<<endl;
    cout<<"                   Bendras                     "<<endl;
    cout<<"| GBP = "<<fixed<<setprecision(4)<<GBP_Bendras<<" | USD = "<<USD_Bendras<<" | INR = "<<INR_Bendras<<" |"<<endl;
    cout<<"***********************************************"<<endl;
    cout<<"                   Pirkti                      "<<endl;
    cout<<"| GBP = "<<fixed<<setprecision(4)<<GBP_Pirkti<<" | USD = "<<USD_Pirkti<<" | INR = "<<INR_Pirkti<<" |"<<endl;
    cout<<"***********************************************"<<endl;
    cout<<"                  Parduoti                     "<<endl;
    cout<<"| GBP = "<<fixed<<setprecision(4)<<GBP_Parduoti<<" | USD = "<<USD_Parduoti<<" | INR = "<<INR_Parduoti<<" |"<<endl;
    cout<<"***********************************************"<<endl;
    
    }
    //parduoti =======================================
    else if (veiksmas==2)
    {
        cout<<"                    Pardavimas "<<endl;
        cout<<"               Pasirinkite valiuta"<<endl;
        cout<<"                 GBP spauskite 1"<<endl;
        cout<<"                 USD spauskite 2"<<endl;
        cout<<"                 INR spauskite 3"<<endl;
        cout<<"***********************************************"<<endl;
        cin>>valiuta;
        
        if (valiuta==1)
        {
            cout<<"                 Pasirinkote GBP"<<endl;
            cout<<"               Iveskite norima suma"<<endl;
            cin>>suma;
            cout<<"***********************************************"<<endl;
            
            cout<<"            Jus gausite: "<<fixed<<setprecision(2)<<suma/GBP_Parduoti<<" €"<<endl;
            cout<<"***********************************************"<<endl;
        }
        else if (valiuta==2)
        {
            cout<<"                 Pasirinkote USD"<<endl;
            cout<<"               Iveskite norima suma"<<endl;
            cin>>suma; 
            cout<<"***********************************************"<<endl;
            
            cout<<"            Jus gausite: "<<fixed<<setprecision(2)<<suma/USD_Parduoti<<" €"<<endl;
            cout<<"***********************************************"<<endl;
        }
        else if (valiuta==3)
        {
            cout<<"                 Pasirinkote INR"<<endl;
            cout<<"               Iveskite norima suma"<<endl;
            cin>>suma;
            cout<<"***********************************************"<<endl;
            
            cout<<"            Jus gausite: "<<fixed<<setprecision(2)<<suma/INR_Parduoti<<" €"<<endl;
            cout<<"***********************************************"<<endl;
        }
        else 
        {
        cout<<"                     Klaida         "<<endl;
        cout<<"               Tokio veiksmo nera"<<endl;
        }
        
    }
    //pirkti =================================================
    else if (veiksmas==3)
    {
        cout<<"                    Pirkimas       "<<endl;
        cout<<"               Pasirinkite valiuta"<<endl;
        cout<<"                 GBP spauskite 1"<<endl;
        cout<<"                 USD spauskite 2"<<endl;
        cout<<"                 INR spauskite 3"<<endl;
        cout<<"***********************************************"<<endl;
        cin>>valiuta;
        
        if (valiuta==1)
        {
            cout<<"                 Pasirinkote GBP"<<endl;
            cout<<"               Iveskite norima suma"<<endl;
            cin>>suma;
            cout<<"***********************************************"<<endl;
            
            cout<<"            Jus gausite: "<<fixed<<setprecision(2)<<suma*GBP_Pirkti<<" £"<<endl;
            cout<<"***********************************************"<<endl;
        }
        else if (valiuta==2)
        {
            cout<<"                 Pasirinkote USD"<<endl;
            cout<<"               Iveskite norima suma"<<endl;
            cin>>suma; 
            cout<<"***********************************************"<<endl;
            
            cout<<"            Jus gausite: "<<fixed<<setprecision(2)<<suma*USD_Pirkti<<" $"<<endl;
            cout<<"***********************************************"<<endl;
        }
        else if (valiuta==3)
        {
            cout<<"                 Pasirinkote INR"<<endl;
            cout<<"               Iveskite norima suma"<<endl;
            cin>>suma;
            cout<<"***********************************************"<<endl;
            
            cout<<"            Jus gausite: "<<fixed<<setprecision(2)<<suma*INR_Pirkti<<" ₹"<<endl;
            cout<<"***********************************************"<<endl;
        }
        else 
        {
        cout<<"                     Klaida         "<<endl;
        cout<<"               Tokio veiksmo nera"<<endl;
        }
    }
    //========================================================
    else if (veiksmas==4)
  cout<<"             isejote is programos         "<<endl;
    else
      {
       cout<<"                     Klaida         "<<endl;
       cout<<"               Tokio veiksmo nera"<<endl;
      }
    
    
    
    return 0;
}