#include <iostream>

int main() {

    for(int i = 1; i<11; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    for(int i=2; i<21; i+=2){
        std::cout << i << " " ;
    }

    std::cout << std::endl;

    for(int i = 1; i < 21; i+=2 ){
        std::cout << i << " " ;
    }

    std::cout << std::endl;

    for(int i=1; i<51; i+=3) {
        std::cout << i << " " ;
    }

    std::cout << std::endl;

    for(int i = 40; i>1; i-=4) {
        std::cout << i << " " ;
    }

    std::cout << std::endl;

    for(int i=1; i<=100; i++) {
        int prime=0;
        for(int j=2; j<=100; j++)
        {
            if(i%j==0)
            {
                prime++;

            }
        }
        if(prime==1) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;




    return 0;
}