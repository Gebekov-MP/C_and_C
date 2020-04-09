//how C call python code. Some instance


#include <Python.h>
...
Py_Initialize(); // Это язык C, а не Python
PyRun_SimpleString(“x = ‘brave ‘ + ‘sir robin’”); // Но он запускает код на
// языке Python