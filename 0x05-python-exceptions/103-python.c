#include <Python.h>
#include <stdio.h>

void print_python_list(PyObject *p) {
if (!PyList_Check(p)) {
printf("[*] Python list info\n");
printf("  [ERROR] Invalid List Object\n");
return;
}

Py_ssize_t size = PyList_Size(p);
PyObject *element;

printf("[*] Python list info\n");
printf("[*] Size of the Python List = %ld\n", size);

printf("[*] Allocated = %ld\n", ((PyListObject *)p)->allocated);

for (Py_ssize_t i = 0; i < size; i++) {
element = PyList_GetItem(p, i);
printf("Element %ld: %s\n", i, Py_TYPE(element)->tp_name);
}
}

void print_python_bytes(PyObject *p) {
if (!PyBytes_Check(p)) {
printf("[.] Python bytes info\n");
printf("  [ERROR] Invalid Bytes Object\n");
return;
}

Py_ssize_t size = PyBytes_Size(p);
char *bytes = PyBytes_AsString(p);

printf("[.] Python bytes info\n");
printf("  size: %ld\n", size);
printf("  trying string: %s\n", bytes);

printf("  first %ld bytes:", (size + 1 < 10) ? size + 1 : 10);
for (Py_ssize_t i = 0; i < size + 1 && i < 10; i++) {
printf(" %02x", bytes[i] & 0xff);
}
printf("\n");
}

void print_python_float(PyObject *p) {
if (!PyFloat_Check(p)) {
printf("[.] Python float info\n");
printf("  [ERROR] Invalid Float Object\n");
return;
}

printf("[.] Python float info\n");
printf("  value: %f\n", PyFloat_AsDouble(p));
}
