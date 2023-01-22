//
// Created by Lymond Glenda on 1/17/23.
//
#include <iostream>
#include <fstream>
#include <thread>
#include <chrono>
#include <mutex>
#include <string>
std::mutex g_lock;

void input_file(std::string text) {
    g_lock.lock();
    std::ofstream out("test.txt", std::ios::app);          // поток для записи
    if (out.is_open())
    {
        std::cout << "Open" << std::endl;
        out << text << std::endl;
    }

    std::cout << "End of program" << std::endl;
    g_lock.unlock();


}

void thread_function_2(double d) {
    std::string t = "sjsssdfsdfdsfdsfsdffdsfsdfsdfsdfsdfsdfsdfsdfestsetsfsdfsdfestsdfsdtsersaxfdfgdgdr";
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    input_file(t);

}

void thread_function(int i) {
    std::thread thr_2 (thread_function_2, 2.3);
    std::this_thread::sleep_for(std::chrono::milliseconds(5000));
    std::cout << i << std::endl;
    thr_2.join();
}

int main(void) {
    std::thread thr(thread_function, 1);
    std::thread thr_1(thread_function_2, 2.3);
    thr.join();
//    thr.detach();
    thr_1.join();

    std::cout << "Hello World" << std::endl;
    return 0;
}
