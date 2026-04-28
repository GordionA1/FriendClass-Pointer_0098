#include <iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void shownim(){
        cout << "No Induk: " << nim << endl;
    }
};

int main (){
    mahasiswa*mhs = new mahasiswa{1};
    mhs->nim = 2;
    mhs->shownim();
    delete mhs;
    return 0;
}