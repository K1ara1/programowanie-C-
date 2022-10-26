#include <iostream>

using namespace std;
void calculator();

float add(float a, float b);
float subtract(float a, float b);
void potegowanie();
void srednia();

int main()
{
    while(true)
    calculator();

    return 0;
}
void calculator()
{
    int opcja= 0;
    float n1, n2;

    cout<<"wybierz operacje"<<endl;
    cout<<"1. dodawanie"<<endl;
    cout<<"2. odejmowanie"<<endl;
    cout<<"3. oblicz srednia"<<endl;
    cout<<"4. potegowanie"<<endl;
    cout<<"5. wyjscie z programu"<<endl;
    cin>>opcja;

    switch(opcja)
    {
        case 1:
            cin>>n1;
            cin>>n2;
            cout<<"wynik "<<add(n1,n2);
            break;
        case 2:
            cin>>n1;
            cin>>n2;
            cout<<"wynik "<<subtract(n1,n2);
            break;
        case 3:
            srednia();
            break;
        case 4:
            potegowanie();
        case 5:
            exit(0);
            break;

        default:
            cout<<"niepoprawny wybor"<<endl;
    }
}

float add(float a, float b)
{
    return a+b;
}
float subtract(float a, float b)
{
    return a-b;
}
void srednia()
{
    int tab_size;
    cout<<"wpisz 5 liczb"<<endl;
    cin>> tab_size;
    float liczby[tab_size];

    for(int i=0; i<tab_size; i++)
    {
        cin>>liczby[i];
    }
    float wynik=0;
    for(int i=0; i<tab_size; i++)
    {
        wynik += liczby[i];
    }
    cout<<"srednia to "<<wynik/tab_size;

    cout<<endl<<endl;
}
void potegowanie()
{
    int liczba, potega, wynik=1;
    cout<<"wpisz liczbe"<<endl;
    cin>>potega;
    cout<<"wpisz potege"<<endl;
    cin>>liczba;

    if(potega != 0)
    {

    for(int i=0; i<potega; i++)
    {
         wynik *= liczba;
    }
    }
    cout<<"wynik to "<<wynik<<endl;


}
