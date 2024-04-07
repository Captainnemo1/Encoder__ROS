// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rbl_message:msg/Rbl.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "rbl_message/msg/detail/rbl__struct.h"
#include "rbl_message/msg/detail/rbl__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rbl_message__msg__rbl__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[25];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("rbl_message.msg._rbl.Rbl", full_classname_dest, 24) == 0);
  }
  rbl_message__msg__Rbl * ros_message = _ros_message;
  {  // bool_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "bool_value");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bool_value = (Py_True == field);
    Py_DECREF(field);
  }
  {  // integer_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "integer_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->integer_value = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // float_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "float_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->float_value = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rbl_message__msg__rbl__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Rbl */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rbl_message.msg._rbl");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Rbl");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rbl_message__msg__Rbl * ros_message = (rbl_message__msg__Rbl *)raw_ros_message;
  {  // bool_value
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bool_value ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bool_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // integer_value
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->integer_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "integer_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // float_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->float_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "float_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
