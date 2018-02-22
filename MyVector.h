#ifndef MYVECTOR_HEADER
#define MYVECTOR_HEADER

template<typename T>
class MyVector
{
public:
    // Constructor + Destructor
    MyVector();
    ~MyVector();

    // Member function
    void assign( int count, const T& value );

    // Operator Overloading
    MyVector& operator=(const MyVector& other);
    T& operator[]( int pos );
    const T& operator[]( int pos ) const;

    // Function Overloading
    T& at( int pos );
    const T& at( int pos ) const;

    T& front();
    const T& front() const;
    T& back();
    const T& back() const;

    // Capacity
    // TODO, add them all in!

    // Modifiers
    // All except emplace and emplace_back

    // Operators
    // operator==
    // operator!=
    // operator<
    // operator<=
    // operator>
    // operator>=

private:
    T m_data;
};

#endif
