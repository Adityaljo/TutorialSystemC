#include "systemc.h"
#include "cpu.h"

void cpu::my_custom_function() {
    cout << "cpu::my_custom_function()" << endl;
};

void cpu::before_end_of_elaboration() {
    cout << "cpu::before_end_of_elaboration()" << endl;
}


void cpu::end_of_elaboration() {
    cout << "cpu::end_of_elaboration()" << endl;
}

void cpu::start_of_simulation() {
    cout << "cpu::start_of_simulation()" << endl;
}

void cpu::end_of_simulation() {
    cout << "cpu::end_of_simulation()" << endl;
}