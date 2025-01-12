#include <iostream>
#include <string>

void printMessage(const std::string &message = "Default Message", const bool strictMode = false)
{
    std::cout << "Message: " << message << " " << strictMode << std::endl;
}

int main()
{
    printMessage("Hello!"); // 사용자 정의 메시지 // false
    printMessage();         // 기본 메시지 사용 // false
    printMessage("마크저커버그", true);
    return 0;
}
