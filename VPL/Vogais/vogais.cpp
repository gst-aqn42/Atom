#include <iostream>
#include <string>

int main(){

    std::string palavra;
    std::cin >> palavra;
    
    char vogais[5] = {'a','e','i','o','u'};
    
    for (int i = 0; i < 5; i++){
        int count = 0;
        for (std::string::iterator it = palavra.begin(); it != palavra.end(); it++){
            if (*it == vogais[i]){
                count++;
            }
        }
        if (count != 0){
            std::cout << vogais[i] << " " << count << std::endl;
        }
    }
    return 0;
}