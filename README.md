A SystemC module is nothing more than a class – sc_module. It has inside a lot of logic which make it possible for us to model in C++ some hardware components.
sc_module is the base class for all the building blocks of a hardware system that you want to model in SystemC.
our cpu class can have inside some class members called alu and decoder to model an “Arithmetic Logic Unit” and a “Decoder Unit”.

1. Declaration Macro – SC_MODULE

2. Constructor Macro – SC_CTOR

		One drawback of the SC_CTOR macro is that you can not add user defined arguments to the created contructor.
		use SC_HAS_PROCESS(cpu) and declare a constructor with custom arguments
3. Thread Macro – SC_THREAD

4. Elaboration and Simulation Callbacks

Elaboration Phase – everything before the call of sc_start() function. This phase should be used to declare modules, clocks, make connections etc.

Simulation Phase – the execution of the sc_start() function

Post-processing Phase – the code after sc_start(). In this phase you should handle the results of the simulation
