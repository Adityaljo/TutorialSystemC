#ifndef DECODER_H
#define DECODER_H

SC_MODULE(decoder) {

public:
    SC_CTOR(decoder) {
        cout << "decoder::constructor()" << endl;

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