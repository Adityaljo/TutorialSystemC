#include "systemc.h"
#include "cpu.h"

using namespace sc_dt;


int sc_main(int, char* []) {
    cout << "sc_main() ..." << endl;

    //make sure you call the appropiate constructor (e.g. with the name of the module)
    cpu cpu_inst("cpu_inst");
    sc_set_time_resolution(1, SC_NS);
    sc_start();

    //call this function in order to trigger end_of_simulation() calls
    if (not sc_end_of_simulation_invoked()) {
        cout << "Simulation stopped without explicit sc_stop()" << endl;
        sc_stop();
    }

    return 0;
}