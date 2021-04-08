#ifndef ALU_H
#define ALU_H

SC_MODULE(alu) {

public:
    //declare the constructor directly - without the usage of SC_CTOR macro
    typedef alu SC_CURRENT_USER_MODULE;
    alu(::sc_core::sc_module_name) {
        cout << "cfs_alu::constructor()" << endl;

//        SC_THREAD(my_custom_function);
    };

protected:
    virtual void my_custom_function();

    virtual void before_end_of_elaboration();

    virtual void end_of_elaboration();

    virtual void start_of_simulation();

    virtual void end_of_simulation();
};

#endif