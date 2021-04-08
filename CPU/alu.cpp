#include "systemc.h"
#include "alu.h"

void alu::my_custom_function() {
    cout << "alu::my_custom_function()" << endl;
};

void alu::before_end_of_elaboration() {
    cout << "alu::before_end_of_elaboration()" << endl;

    SC_THREAD(my_custom_function);
}

void alu::end_of_elaboration() {
    cout << "alu::end_of_elaboration()" << endl;
}

void alu::start_of_simulation() {
    cout << "alu::start_of_simulation()" << endl;
}

void alu::end_of_simulation() {
    cout << "alu::end_of_simulation()" << endl;
}

