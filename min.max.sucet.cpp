// Vytvorte program, ktorý vypíše maximum, minimum a súčet zadaných čísel (3 čísla)
#import <iostream>

using namespace std;

int main()
{
    double cislo1,cislo2,cislo3,spolu;
    cout<<"Zadajte tri cisla: "<<endl;
    cin>>cislo1;
    cin>>cislo2;
    cin>>cislo3;
    spolu = cislo1+cislo2+cislo3;
    if(cislo1>=cislo2>=cislo3){ //toto je a>b>c, neries iba pomocka pre mna
        cout<<"Najvacsie cislo je: "<< cislo1<<endl;
        cout<<"Najmensie cislo je: "<<cislo3<<endl;
        cout<<"Sucet tychto troch cisel je: "<<spolu;

    }
    else if(cislo1<=cislo2<=cislo3){ //toto je a<b<c, neries iba pomocka pre mna
        cout<<"Najvacsie cislo je: "<< cislo3<<endl;
        cout<<"Najmensie cislo je: "<<cislo1<<endl;
        cout<<"Sucet tychto troch cisel je: "<<spolu<<endl;

    }
    else if((cislo1>=cislo2<=cislo3)&&(cislo1>=cislo3)){ //toto je a>b<c, a>c neries iba pomocka pre mna
        cout<<"Najvacsie cislo je: "<< cislo1<<endl;
        cout<<"Najmensie cislo je: "<<cislo2<<endl;
        cout<<"Sucet tychto troch cisel je: "<<spolu<<endl;

    }
    else if((cislo1>=cislo2<=cislo3)&&(cislo1<=cislo3)){ //toto je a>b<c, a<c neries iba pomocka pre mna
        cout<<"Najvacsie cislo je: "<< cislo3<<endl;
        cout<<"Najmensie cislo je: "<<cislo2<<endl;
        cout<<"Sucet tychto troch cisel je: "<<spolu<<endl;

    }
    else if((cislo1<=cislo2>=cislo3)&&(cislo1<=cislo3)){ //toto je a<b>c, a<c neries iba pomocka pre mna
        cout<<"Najvacsie cislo je: "<< cislo2<<endl;
        cout<<"Najmensie cislo je: "<<cislo1<<endl;
        cout<<"Sucet tychto troch cisel je: "<<spolu<<endl;

    }
    else if((cislo1<=cislo2>=cislo3)&&(cislo1>=cislo3)){ //toto je a<b>c, a>c neries iba pomocka pre mna
        cout<<"Najvacsie cislo je: "<< cislo2<<endl;
        cout<<"Najmensie cislo je: "<<cislo3<<endl;
        cout<<"Sucet tychto troch cisel je: "<<spolu<<endl;

    }
    return 0;
}
















































//neznasam programovanie
