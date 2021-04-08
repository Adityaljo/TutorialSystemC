#include "systemc.h"
#include "decoder.h"

void decoder::my_custom_function() {
    cout << "decoder::my_custom_function()" << endl;
};

void decoder::before_end_of_elaboration() {
    cout << "decoder::before_end_of_elaboration()" << endl;
}

void decoder::end_of_elaboration() {
    cout << "decoder::end_of_elaboration()" << endl;
}

void decoder::start_of_simulation() {
    cout << "decoder::start_of_simulation()" << endl;
}

void decoder::end_of_simulation() {
    cout << "decoder::end_of_simulation()" << endl;
}

