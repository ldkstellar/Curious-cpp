#include <iostream>
using namespace std;

class Vector
{
private:
    /* data */
    public:
    int x;
    int y;
    
};

struct VectorBox
{
    int mX ;
    int mY;
    Vector* addr;
    /* data */
};


int main(int argc, char const *argv[])
{
    Vector vector;
    // cout<< vector.x;
    VectorBox box ={0,0,NULL};
    cout<<box.mX;
    /* code */
    return 0;
}
