/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 8, 2015, 11:05 AM
 */

#include <iostream>
 using namespace std;
 //This program has been copied from text as instructed
 int main( )
 {
     cout<<"Hello";
    int number_of_pods, peas_per_pod, total_peas;
        cout << "Enter the number of pods:\n";
        cin >> number_of_pods;
        cout << "Enter the number of peas in a pod:\n";
        cin >> peas_per_pod;
        total_peas = number_of_pods * peas_per_pod;
        cout << "If you have ";
        cout << number_of_pods;
        cout << " pea pods\n";
        cout << "and ";
        cout << peas_per_pod;
        cout << " peas in each pod, then\n";
        cout << "you have ";
        cout << total_peas;
        cout << " peas in all the pods.\n";
        cout<<"goodbye";
        return 0;
 }
