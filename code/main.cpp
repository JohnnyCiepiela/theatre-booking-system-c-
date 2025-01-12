#include <ostream>

#include <cstdio>

#include <iostream>

#include <iomanip>

#include <stdio.h>

#include <vector>

#include <string>

#include <fstream>

#include "Event.h"

#include "Film.h"

#include "Music.h"

#include "StandUp.h"

int main() {

    // Declaring a vector of objects
    std::vector < Event > objectsEvents;

    // Creating objects of Film class
    Film scream_2d;
    Film matrix_3d;

    // Creating objects of StandUp class
    StandUp andrew_schulz;
    StandUp george_janko;

    // Creating objects of Music class
    Music drake;
    Music rihanna;

    // Defining objects for writing and reading from file
    std::fstream myFile;
    std::string line;

    // Setting up initial values for object scream_2d
    scream_2d.set_id(1);
    scream_2d.set_name("Scream 2022");
    scream_2d.set_description("Ghostface mask and begins targeting a group of teenagers to resurrect secrets from the town's deadly past.");
    scream_2d.set_capacity(200);
    scream_2d.set_availability(200);
    scream_2d.set_dimension(false);

    // Setting up initial values for object matrix_3d
    matrix_3d.set_id(1);
    matrix_3d.set_name("Matrix: Ressurections 3D");
    matrix_3d.set_description("Mr. Anderson, aka Neo, will have to choose to follow the white rabbit once more.");
    matrix_3d.set_capacity(200);
    matrix_3d.set_availability(200);
    matrix_3d.set_dimension(true);

    // Setting up initial values for object andrew_schulz
    andrew_schulz.set_id(3);
    andrew_schulz.set_name("Andrew Schulz");
    andrew_schulz.set_description("Andrew Cameron Schulz is an American stand-up comedian, actor, television producer and podcaster.");
    andrew_schulz.set_capacity(200);
    andrew_schulz.set_availability(200);

    // Setting up initial values for object george_janko
    george_janko.set_id(4);
    george_janko.set_name("George Janko");
    george_janko.set_description("George Janko is an actor and writer and upstart stand-up comedian.");
    george_janko.set_capacity(200);
    george_janko.set_availability(200);

    // Setting up initial values for object drake
    drake.set_id(5);
    drake.set_name("Drake: Scorpion");
    drake.set_description("Scorpion is the fifth studio album by Canadian rapper and singer Drake.");
    drake.set_capacity(300);
    drake.set_availability(300);

    // Setting up initial values for object rihanna
    rihanna.set_id(6);
    rihanna.set_name("Rihanna: Loud");
    rihanna.set_description("Loud is the fifth studio album by Barbadian singer Rihanna.");
    rihanna.set_capacity(300);
    rihanna.set_availability(300);

    // Pushing objects from derived classes into the vector
    objectsEvents.push_back(scream_2d);
    objectsEvents.push_back(matrix_3d);
    objectsEvents.push_back(andrew_schulz);
    objectsEvents.push_back(george_janko);
    objectsEvents.push_back(drake);
    objectsEvents.push_back(rihanna);

    // Declaration of pointers to the Movie class
    Film* ptrFilm;
    Film* ptrFilm2;
    int* ptrF;
    int* ptrF2;

    // Declaration of pointers to the Comedy class
    StandUp* ptrStandUp;
    StandUp* ptrStandUp2;
    int* ptrS;
    int* ptrS2;

    // Declaration of pointers to the Concert class
    Music* ptrMusic;
    Music* ptrMusic2;
    int* ptrM;
    int* ptrM2;

    // Saving the addresses of objects
    ptrFilm = &scream_2d;
    ptrF = (int*)ptrFilm->get_availability();
    ptrFilm2 = &scream_2d;
    ptrF2 = (int*)ptrFilm2->get_availability();

    ptrStandUp = &andrew_schulz;
    ptrS = (int*)ptrStandUp->get_availability();
    ptrStandUp2 = &george_janko;
    ptrS2 = (int*)ptrStandUp2->get_availability();

    ptrMusic = &drake;
    ptrM = (int*)ptrMusic->get_availability();
    ptrMusic2 = &rihanna;
    ptrM2 = (int*)ptrMusic2->get_availability();

    // Declaration of a pointer to data member
    int Film::* ptiptr = &Film::seats_available;
    // Declaration of a pointer to the member function 
    void(Film:: * ptfptr)(int) = &Film::set_availability;

    // Declaration of a pointer to data member
    int StandUp::* ptiptr2 = &StandUp::seats_available;
    // Declaration of a pointer to the member function
    void(StandUp:: * ptfptr2)(int) = &StandUp::set_availability;

    // Declaration of a pointer to data member
    int Music::* ptiptr3 = &Music::seats_available;
    // Declaration of a pointer to the member function
    void(Music:: * ptfptr3)(int) = &Music::set_availability;

    int scream = ptrFilm->get_availability();
    int* pointer;
    pointer = &scream;

    int matrix = ptrFilm2->get_availability();
    int* pointer2;
    pointer2 = &matrix;

    int andrew = ptrStandUp->get_availability();
    int* pointer3;
    pointer3 = &andrew;

    int george = ptrStandUp2->get_availability();
    int* pointer4;
    pointer4 = &george;

    int drake1 = ptrMusic->get_availability();
    int* pointer5;
    pointer5 = &drake1;

    int rihanna1 = ptrMusic2->get_availability();
    int* pointer6;
    pointer6 = &rihanna1;

    // Declaring some of the variables used in switch case
    int choice;
    int secondChoice;

    int secondChoice_delete;
    int secondChoice_showall;
    int secondChoice_showbooking;

    int thirdNestedChoice;
    int thirdNestedChoice2;
    int thirdNestedChoice3;

    int num = 1;

    while (1) {
        std::cout << "                                " << std::endl;
        std::cout << "********************************" << std::endl;
        std::cout << "*           MAIN MENU          *" << std::endl;
        std::cout << "********************************" << std::endl;
        std::cout << "1.Add booking." << std::endl;
        std::cout << "2.Show all bookings and descriptions." << std::endl;
        std::cout << "3.Show particular booking and availability." << std::endl;
        std::cout << "4.Delete booking " << std::endl;
        std::cout << "5.Save data to a file." << std::endl;
        std::cout << "6.Load data from a file." << std::endl;
        std::cout << "7.Exit." << std::endl;
        std::cout << "********************************" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "                                " << std::endl;
            std::cout << "                                " << std::endl;
            std::cout << "                                " << std::endl;
            std::cout << "********************************" << std::endl;
            std::cout << "1.Add new booking for film event." << std::endl;
            std::cout << "2.Add new booking for stand-up event. " << std::endl;
            std::cout << "3.Add new booking for live music event" << std::endl;
            std::cout << "4.Return to main menu." << std::endl;
            std::cout << "********************************" << std::endl;
            std::cout << "Enter your choice: ";
            std::cin >> secondChoice;
            switch (secondChoice) {
            case 1:
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                std::cout << "********************************" << std::endl;
                std::cout << "1.Scream 2022" << std::endl;
                std::cout << "2.Matrix: Ressurections" << std::endl;
                std::cout << "3.Return to main menu." << std::endl;
                std::cout << "********************************" << std::endl;
                std::cout << "Enter your choice: ";
                std::cin >> thirdNestedChoice;
                switch (thirdNestedChoice) {
                case 1:
                    std::cout << "                                " << std::endl;
                    std::cout << "                                " << std::endl;
                    std::cout << "                                " << std::endl;
                    if (*pointer <= scream_2d.get_capacity() && *pointer > 0) {
                        reduce(pointer);
                    }
                    else {
                        std::cout << "There are no free spots left!" << std::endl;
                    }

                    std::cout << "Available seats left for Scream: " << *pointer << std::endl;
                    std::cin.get();
                    break;

                case 2:
                    std::cout << "                                " << std::endl;
                    std::cout << "                                " << std::endl;
                    std::cout << "                                " << std::endl;
                    if (*pointer2 <= matrix_3d.get_capacity() && *pointer2 > 0) {
                        reduce(pointer2);
                    }
                    else {
                        std::cout << "There are no free spots left!" << std::endl;
                    }

                    std::cout << "Available seats left for Matrix: " << *pointer2 << std::endl;
                    std::cin.get();
                    break;

                }
                break;

            case 3:
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                std::cout << "********************************" << std::endl;
                std::cout << "1.Drake" << std::endl;
                std::cout << "2.Rihanna" << std::endl;
                std::cout << "3.Return to main menu." << std::endl;
                std::cout << "********************************" << std::endl;
                std::cout << "Enter your choice: ";
                std::cin >> thirdNestedChoice2;
                switch (thirdNestedChoice2) {
                case 1:
                    std::cout << "                                " << std::endl;
                    std::cout << "                                " << std::endl;
                    std::cout << "                                " << std::endl;
                    if (*pointer5 <= drake.get_capacity() && *pointer5 > 0) {
                        reduce(pointer5);
                    }
                    else {
                        std::cout << "There are no free spots left!" << std::endl;
                    }
                    std::cout << "Available seats left for Drake: " << *pointer5 << std::endl;
                    std::cin.get();
                    break;

                case 2:
                    std::cout << "                                " << std::endl;
                    std::cout << "                                " << std::endl;
                    std::cout << "                                " << std::endl;
                    if (*pointer6 <= rihanna.get_capacity() && *pointer6 > 0) {
                        reduce(pointer6);
                    }
                    else {
                        std::cout << "There are no free spots left!" << std::endl;
                    }
                    std::cout << "Available seats left for Rihanna: " << *pointer6 << std::endl;
                    std::cin.get();
                    break;

                }
                break;

            case 2:
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                std::cout << "********************************" << std::endl;
                std::cout << "1.Andrew Schulz" << std::endl;
                std::cout << "2.George Janko" << std::endl;
                std::cout << "3.Return to main menu." << std::endl;
                std::cout << "********************************" << std::endl;
                std::cout << "Enter your choice: ";
                std::cin >> thirdNestedChoice3;
                switch (thirdNestedChoice3) {
                case 1:
                    std::cout << "                                " << std::endl;
                    std::cout << "                                " << std::endl;
                    std::cout << "                                " << std::endl;
                    if (*pointer3 <= andrew_schulz.get_capacity() && *pointer3 > 0) {
                        reduce(pointer3);
                    }
                    else {
                        std::cout << "There are no free spots left!" << std::endl;
                    }
                    std::cout << "Available seats left for Andrew Schulz: " << *pointer3 << std::endl;
                    std::cin.get();
                    break;

                case 2:
                    std::cout << "                                " << std::endl;
                    std::cout << "                                " << std::endl;
                    std::cout << "                                " << std::endl;
                    if (*pointer4 <= george_janko.get_capacity() && *pointer4 > 0) {
                        reduce(pointer4);
                    }
                    else {
                        std::cout << "There are no free spots left!" << std::endl;
                    }
                    std::cout << "Available seats left for George Janko: " << *pointer4 << std::endl;
                    std::cin.get();
                    break;

                }
                break;

            case 4:
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                break;

            default:
                std::cout << "Incorrect input" << std::endl;
                break;
            }

            break;

        case 2:
            std::cout << "                                " << std::endl;
            std::cout << "                                " << std::endl;
            std::cout << "                                " << std::endl;
            std::cout << "Complete list of our events:" << std::endl;

            for (int i = 0; i < objectsEvents.size(); i++) {
                std::cout << num << "." << objectsEvents[i].get_name() << std::endl;
                std::cout << "Short description: " << objectsEvents[i].get_description() << std::endl;
                std::cout << "   " << std::endl;
                num++;
            }

            std::cin.get();
            break;

        case 3:
            std::cout << "                                " << std::endl;
            std::cout << "                                " << std::endl;
            std::cout << "                                " << std::endl;
            std::cout << "********************************" << std::endl;
            std::cout << "Choose an event that you want to see the availability of: " << std::endl;
            std::cout << "1.Scream 2022" << std::endl;
            std::cout << "2.Matrix: Ressurections" << std::endl;
            std::cout << "3.Andrew Schulz" << std::endl;
            std::cout << "4.George Janko" << std::endl;
            std::cout << "5.Drake: Scorpion" << std::endl;
            std::cout << "6.Rihanna: Loud" << std::endl;
            std::cout << "********************************" << std::endl;
            std::cout << "Enter Option No.: ";
            std::cin >> secondChoice_showbooking;
            switch (secondChoice_showbooking) {
            case 1:
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                std::cout << "Available seats for Scream: " << *pointer << std::endl;
                std::cin.get();
                break;

            case 2:
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                std::cout << "Available seats left for Matrix: " << *pointer2 << std::endl;
                std::cin.get();
                break;

            case 3:
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                std::cout << "Available seats left for Andrew Schulz: " << *pointer3 << std::endl;
                std::cin.get();
                break;

            case 4:
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                std::cout << "Available seats left for George Janko: " << *pointer4 << std::endl;
                std::cin.get();
                break;

            case 5:
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                std::cout << "Available seats left for Drake: " << *pointer5 << std::endl;
                std::cin.get();
                break;

            case 6:
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                std::cout << "Available seats left for Rihanna: " << *pointer6 << std::endl;
                std::cin.get();
                break;
            }

            break;

        case 4:
            std::cout << "                                " << std::endl;
            std::cout << "                                " << std::endl;
            std::cout << "                                " << std::endl;
            std::cout << "********************************" << std::endl;
            std::cout << "Choose an event that you want to delete the record from: " << std::endl;
            std::cout << "1.Scream 2022" << std::endl;
            std::cout << "2.Matrix: Ressurections" << std::endl;
            std::cout << "3.Andrew Schulz" << std::endl;
            std::cout << "4.George Janko" << std::endl;
            std::cout << "5.Drake: Scorpion" << std::endl;
            std::cout << "6.Rihanna: Loud" << std::endl;
            std::cout << "********************************" << std::endl;
            std::cout << "Enter Option No.: ";
            std::cin >> secondChoice_delete;
            switch (secondChoice_delete) {
            case 1:
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                expand(pointer);
                std::cout << "Available seats left for Scream: " << *pointer << std::endl;
                std::cin.get();
                break;

            case 2:
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                expand(pointer2);
                std::cout << "Available seats left for Matrix: " << *pointer2 << std::endl;
                std::cin.get();
                break;

            case 3:
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                expand(pointer3);
                std::cout << "Available seats left for Andrew Schulz: " << *pointer3 << std::endl;
                std::cin.get();
                break;

            case 4:
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                expand(pointer4);
                std::cout << "Available seats left for George Janko: " << *pointer4 << std::endl;
                std::cin.get();
                break;

            case 5:
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                expand(pointer5);
                std::cout << "Available seats left for Drake: " << *pointer5 << std::endl;
                std::cin.get();
                break;

            case 6:
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                std::cout << "                                " << std::endl;
                expand(pointer6);
                std::cout << "Available seats left for Rihanna: " << *pointer6 << std::endl;
                std::cin.get();
                break;
            }

            break;

        case 5:
            std::cout << "                                " << std::endl;
            std::cout << "                                " << std::endl;
            std::cout << "                                " << std::endl;
            myFile.open("bookings.txt", std::ios::out);
            if (myFile.is_open()) {
                std::cout << "Data has been saved to a file." << std::endl;
                myFile << "Scream 2022 - " << *pointer << std::endl;
                myFile << "Matrix: Ressurections - " << *pointer2 << std::endl;
                myFile << "Andrew Schulz - " << *pointer3 << std::endl;
                myFile << "George Janko - " << *pointer4 << std::endl;
                myFile << "Drake: Scorpion - " << *pointer5 << std::endl;
                myFile << "Rihanna: Loud - " << *pointer6 << std::endl;
                myFile.close();
            }
            break;

        case 6:
            std::cout << "                                " << std::endl;
            std::cout << "                                " << std::endl;
            std::cout << "                                " << std::endl;
            myFile.open("bookings.txt", std::ios::in);
            if (myFile.is_open()) {

                while (getline(myFile, line)) {

                    std::cout << line << std::endl;

                }
                myFile.close();
            }
            break;

        case 7:
            exit(0);

        default:
            std::cout << "Incorrect input." << std::endl;
            break;

        }
    }
}