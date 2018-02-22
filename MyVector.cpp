#include "MyVector.h"

template<typename T>
MyVector<T>::MyVector() : m_data(10) {
    // Fill
}

template<typename T>
MyVector<T>::~MyVector() {
    // Fill
}

template<typename T>
void MyVector<T>::assign(int count, const T& value) {
    // Fill
}

template<typename T>
MyVector<T>& MyVector<T>::operator=(const MyVector& other) {
    return *this;
}

template<typename T>
T& MyVector<T>::operator[]( int pos ) {
    return m_data;
};

template<typename T>
const T& MyVector<T>::operator[]( int pos ) const {
    return m_data;
};

template<typename T>
T& MyVector<T>::at( int pos ) {
    return m_data;
};

template<typename T>
const T& MyVector<T>::at( int pos ) const {
    return m_data;
};

template<typename T>
T& MyVector<T>::front() {
    return m_data;
};

template<typename T>
const T& MyVector<T>::front() const {
    return m_data;
};

template<typename T>
T& MyVector<T>::back() {
    return m_data;
};

template<typename T>
const T& MyVector<T>::back() const {
    return m_data;
};

// Template Declarations
#define DECLARE(type) template class MyVector<type>;
DECLARE(int);
DECLARE(float);
DECLARE(char);
