#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    string line = "ldkstellar";
    string name = "이동규";
    const char *cLine = line.c_str(); // string 을 char로 변환
    cout << cLine << endl;
    printf("%s", cLine);
    cLine = name.c_str();
    printf("%s", cLine);

    return 0;
}
