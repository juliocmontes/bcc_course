/*
Title: Lab 2 - Histograms
Author: Julio Montes
Date: 10.22.19

Description: two different counters, from 0-1 and 0-10 counting them multiple times and displaying histograms for them
*/

#include <iostream>
#include <cmath>
#include <math.h>
// for random
#include <stdlib.h>
// for time to seed random each time
#include<time.h>

// Histogram for 1000 count
int main()
{
    // initialize random number generator , time is returned with seconds therefore always pproviding a different number when ran
    srand(time(NULL));

    // initialized as strings and will use the length properties to count 
    std::string counter1 = "";
    std::string counter2 = "";
    std::string counter3 = "";
    std::string counter4 = "";
    std::string counter5 = "";
    std::string counter6 = "";
    std::string counter7 = "";
    std::string counter8 = "";
    std::string counter9 = "";
    std::string counter10 = "";

    for(int i = 1000; i > 0; i--){
        // initialize  the random number between 0 and 1 
        double randnum = (double)rand() / ((double)RAND_MAX + 1);
        if (randnum < 0.1) {
            // appends * to string if random numberis les that 0.1
            counter1 += '*';
        } else if ((0.1 <= randnum) && ( randnum < 0.2)) {
            counter2 += '*';
        } else if ((0.2 <= randnum) && ( randnum< 0.3)) {
            counter3 += '*';
        } else if ((0.3 <= randnum) && (randnum < 0.4)) {
            counter4 += '*';
        } else if ((0.4 <= randnum) && (randnum < 0.5)) {
            counter5 += '*';
        }  else if ((0.5 <= randnum) && (randnum < 0.6)) {
            counter6 += '*';
        } else if ((0.6 <= randnum) && (randnum < 0.7)) {
            counter7 += '*';
        } else if ((0.7 <= randnum) && (randnum < 0.8)) {
            counter8 += '*';
        }  else if ((0.8 <= randnum) && (randnum < 0.9)) {
            counter9 += '*';
        } else
            counter10 += '*';
    };
    
    // print count and histogram  
    std::cout << "Counter 1: " << counter1.length() << " - " << counter1 << std::endl;
    std::cout << "Counter 2: " << counter2.length() << " -  " << counter2 << std::endl;
    std::cout << "Counter 3: " << counter3.length() << " - " << counter3 << std::endl;
    std::cout << "Counter 4: " << counter4.length() << " - " << counter4 << std::endl;
    std::cout << "Counter 5: " << counter5.length() << " - " << counter5 << std::endl;
    std::cout << "Counter 6: " << counter6.length() << " - " << counter6 << std::endl;
    std::cout << "Counter 7: " << counter7.length() << " - " << counter7 << std::endl;
    std::cout << "Counter 8: " << counter8.length() << " - " << counter8 << std::endl;
    std::cout << "Counter 9: " << counter9.length() << " - " << counter9 << std::endl;
    std::cout << "Counter 10: " << counter9.length() << " - " << counter10 << std::endl;
    
    std::cout << "Total: " << counter1.length() + counter2.length() + counter3.length() + counter4.length() + counter5.length() + counter6.length() + counter7.length() + counter8.length() + counter9.length() + counter10.length() << std::endl;

    return 0;
}

// // Histogram modified for 10 count
// int main()
// {
//     // initialize random number generator , time is returned with seconds therefore always pproviding a different number when ran
//     srand(time(NULL));

//     // initialized as strings and will use the length properties to count 
//     std::string counter1 = "";
//     std::string counter2 = "";
//     std::string counter3 = "";
//     std::string counter4 = "";
//     std::string counter5 = "";
//     std::string counter6 = "";
//     std::string counter7 = "";
//     std::string counter8 = "";
//     std::string counter9 = "";
//     std::string counter10 = "";


//     for(int i = 10; i > 0; i--) {
//         // initialize  the random number between 0 and 1 
//         int randnum = rand() % 10;
        
//         if (randnum < 1) {
//             // appends * to string if random numberis les that 0.1
//             counter1 += '*';
//         } else if ((1 >= randnum) && (randnum < 2)) {
//             counter2 += '*';    
//         } else if ((2 >= randnum) && (randnum < 3)) {
//             counter3 += '*';
//         } else if ((3 >= randnum) && (randnum < 4)) {
//             counter4 += '*';
//         } else if ((4 >= randnum) && (randnum < 5)) {
//             counter5 += '*';
//         }  else if ((5 >= randnum) && (randnum < 6)) {
//             counter6 += '*';
//         } else if ((6 >= randnum) && (randnum < 7)) {
//             counter7 += '*';
//         } else if ((7 >= randnum) && (randnum < 8)) {
//             counter8 += '*';
//         }  else if ((8 >= randnum) && (randnum < 9)) {
//             counter9 += '*';
//         } else
//             counter10 += '*';
//     };

//     // print count and histogram  
//     std::cout << "Counter 1: " << counter1.length() << " - " << counter1 << std::endl;
//     std::cout << "Counter 2: " << counter2.length() << " -  " << counter2 << std::endl;
//     std::cout << "Counter 3: " << counter3.length() << " - " << counter3 << std::endl;
//     std::cout << "Counter 4: " << counter4.length() << " - " << counter4 << std::endl;
//     std::cout << "Counter 5: " << counter5.length() << " - " << counter5 << std::endl;
//     std::cout << "Counter 6: " << counter6.length() << " - " << counter6 << std::endl;
//     std::cout << "Counter 7: " << counter7.length() << " - " << counter7 << std::endl;
//     std::cout << "Counter 8: " << counter8.length() << " - " << counter8 << std::endl;
//     std::cout << "Counter 9: " << counter9.length() << " - " << counter9 << std::endl;
//     std::cout << "Counter 10: " << counter9.length() << " - " << counter10 << std::endl;
    
//     std::cout << "Total: " << counter1.length() + counter2.length() + counter3.length() + counter4.length() + counter5.length() + counter6.length() + counter7.length() + counter8.length() + counter9.length() + counter10.length() << std::endl;

//     return 0;
// }
