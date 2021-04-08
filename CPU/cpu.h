#ifndef CPU_H
#define CPU_H

#include "alu.h"
#include "decoder.h"

SC_MODULE(cpu) {

public:

    //Decoder sub-module
    decoder decoder_inst;

    //ALU sub-module
    alu alu_inst;

    SC_CTOR(cpu) : decoder_inst("decoder_inst"), alu_inst("alu_inst") {
        cout << "cpu::constructor()" << endl;

        //register the thread
        //this thread will be called once sc_start() is called in testbench.cpp
        SC_THREAD(my_custom_function);
    };

protected:

    //declare the thread function
    virtual void my_custom_function();

    //declare all the callbacks in order to be able to override their implementation in cpu.cpp file

    virtual void before_end_of_elaboration();

    virtual void end_of_elaboration();

    virtual void start_of_simulation();

    virtual void end_of_simulation();
};

#endif