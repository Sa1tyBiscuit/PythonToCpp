# include <string> 
# include <iostream>

int main()
// write a letter to a friend 
{
    std::cout << "Enter the name of the person you want to write to: \n";
    std::string first_name;
    std::cin >> first_name;
    std::cout << "Dear, " << first_name << "!\n"; 
    std::cout << "   How are you? I miss you \n";

    // initialize friend gender to be 0
    char friends_gender = ' ';

    // prompt asking what the friend's gender is 


    // check that it is valid => either male or female 
    /* 
     In cpp, single quotes are used for single characters 
     double quotes are used for an array of characters 
     */

    while (friends_gender != 'm' && friends_gender != 'f')
    {
        std::cout <<"Enter your friend's gender (m/f) \n";
        std::cin >> friends_gender;
    }

    if(friends_gender == 'm') std::cout<< "if you see " << first_name << " ask him to call me \n"; //if male
    if(friends_gender == 'f') std::cout << "if you see " << first_name << " ask her to call me\n"; //if female
    
}