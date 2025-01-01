#include <iostream>
#include <string>

void printMessage(const std::string &message = "Default Message")
{
    std::cout << "Message: " << message << std::endl;
}

int main()
{
    printMessage("Hello!"); // 사용자 정의 메시지
    printMessage();         // 기본 메시지 사용
    return 0;
}
