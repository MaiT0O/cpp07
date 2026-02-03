#pragma once

template <typename T>
class Array
{
    private:
          T* _array;
          unsigned int _n;
    
    public:
     Array() : _array(NULL), _n(0) {}
    
     Array(unsigned int n) : _array(new T[n]()), _n(n) {}
    
     Array(const Array& other) : _array(new T[other._n]), _n(other._n)
     {
          for (unsigned int i = 0; i < _n; i++) {
                _array[i] = other._array[i];
          }
     }
    
     Array& operator=(const Array& other) {
          if (this != &other) {
                delete[] _array;
                _n = other._n;
                _array = new T[_n];
                for (unsigned int i = 0; i < _n; i++) {
                 _array[i] = other._array[i];
                }
          }
          return *this;
     }
    
     ~Array() {
          delete[] _array;
     }
    
     class exception : public std::exception {
          public:
               virtual const char* what() const throw() {
                    return "Index out of bounds";
               }
     };

     T& operator[](unsigned int index)
     {
          if (index >= _n)
               throw exception();
          return _array[index];
     }

     const T& operator[](unsigned int index) const
     {
          if (index >= _n)
               throw exception();
          return _array[index];
     }

     unsigned int size() const {
          return _n;
     }
};