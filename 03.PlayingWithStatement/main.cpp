#include <iostream>


int main(){
    
    std::cout << "************************" << std::endl;
    std::cout << "        WELCOME         " << std::endl;
    std::cout << "************************" << std::endl;

    std::cout << std::endl;

    std::cout << "Play with statements" << std::endl;
    std::cout << "What is magic of Play with Statement?" << std::endl;
    std::cout << std::endl;
    std::cout << "Well, When you modify the value of my_val1 and my_val2 you get different answer for example if you change value of my_val1 to false you get different message" << std::endl;

    bool my_val1{true};
    bool my_val2{false};

    if(my_val1 == true) {
        std::cout << "my_val1 : Wow, Your value is great" << std::endl;
    }else{
        std::cout << "my_val1 : We're sorry, Your value is not great" << std::endl;
    }if(my_val2 == true) {
        std::cout << "my_val2 : Wow, Your value is great" << std::endl;
    }else{
        std::cout << "my_val2 : We're sorry, Your value is not great" << std::endl;
    }


    return 0;
}