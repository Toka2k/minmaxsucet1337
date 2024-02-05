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
    

    // POTIALTO to mas dost dobre (aj prvy if si mal dobre len by som dal medzeri aby som to zpriehladnil)
    // ja by som pokracoval takto
    // ze zakazdym mas znamienka iba do lava napr. a vymienas len samotne premenne a potom ti nenastane chaos ako v tretej podmienke, ver mi robil som daco taketo len som porovnaval takto 8 premennych
    // takisto by som odporucil davat takto medzeri aby to bolo priehladnejsie
    if(cislo1 >= cislo2 >= cislo3){
        cout<<"Najvacsie cislo je: "<< cislo1 <<endl;
        cout<<"Najmensie cislo je: "<< cislo3 <<endl;
        cout<<"Sucet tychto troch cisel je: "<< spolu << endl;
    }
    else if(cislo1 >= cislo3 >= cislo2){
        cout<<"Najvacsie cislo je: "<< cislo1 <<endl;
        cout<<"Najmensie cislo je: "<< cislo2 <<endl;
        cout<<"Sucet tychto troch cisel je: "<< spolu <<endl;
    }
    else if(cislo2 >= cislo1 >= cislo3){
        cout<<"Najvacsie cislo je: "<< cislo2 <<endl;
        cout<<"Najmensie cislo je: "<< cislo3 <<endl;
        cout<<"Sucet tychto troch cisel je: "<< spolu <<endl;
    }
    else if(cislo2 >= cislo3 >= cislo1){
        cout<<"Najvacsie cislo je: "<< cislo2 <<endl;
        cout<<"Najmensie cislo je: "<< cislo1 <<endl;
        cout<<"Sucet tychto troch cisel je: "<<spolu<<endl;
    }
    else if(cislo3 >= cislo1 >= cislo2){
        cout<<"Najvacsie cislo je: "<< cislo3 <<endl;
        cout<<"Najmensie cislo je: "<< cislo2 <<endl;
        cout<<"Sucet tychto troch cisel je: "<<spolu<<endl;
    }
    else if(cislo3 >= cislo2 >= cislo1){
        cout<<"Najvacsie cislo je: "<< cislo3 <<endl;
        cout<<"Najmensie cislo je: "<< cislo1 <<endl;
        cout<<"Sucet tychto troch cisel je: "<<spolu<<endl;

    }
    return 0;
}

//milujeme vsetci programovanie
