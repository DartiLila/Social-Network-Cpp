#include "Header.h"

void menuKryesore() {
    std::cout << "Shtypni:" << std::endl;
    std::cout << "1. Hyj ne llogari" << std::endl;
    std::cout << "2. Rregjistrou" << std::endl;
    std::cout << "3. Dil nga programi\n" << std::endl;
}

void menuUser() {

    int Answer;
    std::cout << "\nMiresevini: " << std::endl;
    std::cout << "1.Shih Kerkesat" << std::endl;
    std::cout << "2.Shih miqte" << std::endl;
    std::cout << "3.Shto mik" << std::endl;
    std::cout << "4.Hiq mik" << std::endl;
    std::cout << "5.Dil nga llogaria" << std::endl;

    std::cin >> Answer;

    switch (Answer)
    {
    case 1:
        menuUser();
        break;
    case 2:
        menuUser();
        break;
    case 3:
        Menu4();
        break;
    case 4:
        Menu4();
        break;
    case 5:
        main();
        break;
    default:
        break;
    }
}

void Menu4() {
    std::string Miku;
    std::cout << "\nMenu 4:" << std::endl;
    std::cout << "Jepni Emrin e mikut qe do te shtoni/hiqni: ";
    std::cin >> Miku;
    std::cout << "Kerkesa u dergua/Miku u fshi" << std::endl;
    menuUser();
}


int main()
{
    int Answer;

    std::cout << "~~~~~~~~Miresevini ne rrjetin social C++!~~~~~~~~\n" << std::endl;
    menuKryesore();
    std::cin >> Answer;

    switch (Answer)
    {
    case 1:
        enterUser();
        break;
    case 2:
        registerUser();
    case 3:
        exit(1);
        break;
    default:
        break;
    }

}
