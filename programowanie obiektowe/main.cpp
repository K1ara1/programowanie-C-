#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>

using namespace std;

class circle
{
public:
    int promien;

    circle(int p)
    {
        promien=p;
    }
    float pole()
    {
        return M_PI *promien* promien;
    }
};

int main()
{   srand(time(NULL));
    for(int i=1; i<10; i++)
        {
        int rand_promien= rand()%10;
        circle kolo(rand_promien);
        cout<<"kolo ma promien "<<kolo.promien <<"ma pole "<<kolo.pole()<<endl;
        }


    circle c1(10);
    cout<<c1.pole()<<endl;

    return 0;
}
