#include <iostream>
#include <thread>

void printMessage() { std::cout << "Hello from thread!" << std::endl; }

int main() {
  std::thread t(printMessage);  // 새로운 스레드 생성
  t.join();                     // main 스레드는 t가 끝날 때까지 기다림
  return 0;
}