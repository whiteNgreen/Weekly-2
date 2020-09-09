#include <iostream>




int main()
{
    int exit = 0;
    do {    // Wanted to be able to repeat the program without having to restart the entire thing 
        int taskChoice = 0;

        std::cout << "What task would you like to see? \n" << "1. 1 to 100 with While- and For- loops \n" << "2. 100 to 1 using For \n" <<
            "3. 5 to 50 in steps of 5. Using While- For- and DoWhile- loops \n" << "4. Choose your own grade \n" << "5. Exit \n";
        std::cin >> taskChoice;
        std::cout << std::endl;

        while (taskChoice == 1) {
            int whileOneHundred = 0;
            int forOneHundred = 0;
            char taskOne;

            std::cout << "You want to count to 100 using 'while' or 'for' loops? \n" << "1. While\n" << "2. For\n";
            std::cin >> taskOne;
            std::cout << std::endl;

            switch (taskOne) {
            case '1':
                while (whileOneHundred <= 100) {
                    std::cout << whileOneHundred << " ";
                    whileOneHundred++;
                }
                std::cout << std::endl;
                break;

            case '2':
                for (forOneHundred; forOneHundred <= 100; forOneHundred++) {
                    std::cout << forOneHundred << " ";
                }
                std::cout << std::endl;
                break;
            default:
                std::cout << std::endl;
                break;
            }
            std::cout << std::endl;
            taskChoice = 0;
        }

        while (taskChoice == 2) {
            for (int hundredToOne = 100; hundredToOne >= 1; hundredToOne--)
            {
                std::cout << hundredToOne << " ";
            }
            std::cout << '\n' << std::endl;
            taskChoice = 0;
        }

        while (taskChoice == 3) {
            int task3;

            std::cout << "How would you like your count to 50?\n" << "1. While\n" << "2. For\n" << "3. Do While\n";
            std::cin >> task3;
            std::cout << std::endl;

            if (task3 == 1) {
                int fifty1 = 0;

                while (fifty1 <= 50) {
                    fifty1++;
                    if (fifty1 % 5 == 0) {
                        std::cout << fifty1 << " ";
                    }
                }
                std::cout << std::endl;
            }
            if (task3 == 2) {
                for (int fifty2 = 0; fifty2 <= 50; fifty2++) {
                    if (fifty2 % 5 == 0 && fifty2 != 0) {
                        std::cout << fifty2 << " ";
                    }
                }
                std::cout << std::endl;
            }
            if (task3 == 3) {
                int fifty3 = 0;

                do {
                    fifty3++;
                    if (fifty3 % 5 == 0) {
                        std::cout << fifty3 << " ";
                    }
                } while (fifty3 <= 50);
                std::cout << std::endl;
            }

            taskChoice = 0;
            std::cout << std::endl;
        }

        while (taskChoice == 4) {
            char grade;

            std::cout << "What grade would you like in Programming 1? (A - F)\n";
            std::cin >> grade;
            std::cout << std::endl;

            switch (grade)
            {
            case 'a': case 'A':
                std::cout << "Outstanding" << std::endl;
                break;

            case 'b': case 'B':
                std::cout << "Very good" << std::endl;
                break;

            case 'c': case'C':
                std::cout << "Good" << std::endl;
                break;

            case 'd': case 'D':
                std::cout << "Some flaws" << std::endl;
                break;

            case 'e': case 'E':
                std::cout << "Not very good..." << std::endl;
                break;

            case 'f': case 'F':
                std::cout << "Why?....." << std::endl;
                break;

            default:
                std::cout << "Thats not a grade..." << std::endl;
                break;
            }

            taskChoice = 0;
            std::cout << std::endl;
        }

        if (taskChoice == 5) {
            exit = 1;
            std::cout << std::endl;
        }
    }while (exit == 0); 
    return 0;
}

