#pragma once
template <typename T>
class Vector
{
    T* arr;
    int current{};
    int capacity{};
public:
    Vector();
    void push_back(T);
    int size();
    void erase(int);
    T operator[](int);
};

template<typename T>
inline Vector<T>::Vector()
{
    arr = new T[1];
    capacity = 1;
    current = 0;
}

template<typename T>
inline void Vector<T>::push_back(T data)
{
    if (current == capacity)
    {
        T* temp = new T[2 * capacity];
        for (int i = 0; i < capacity; i++)
        {
            temp[i] = arr[i];
        }
        delete[] arr;
        capacity *= 2;
        arr = temp;
    }
    arr[current] = data;
    current++;
}

template<typename T>
inline int Vector<T>::size()
{
    return current;
}

template<typename T>
inline void Vector<T>::erase(int index)
{
    T* temp = new T[capacity];
    for (int i{}; i < index; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = index + 1; i < current; i++)
    {
        temp[i-1] = arr[i];
    }
    delete[] arr;
    arr = temp;
    current--;
}

template<typename T>
inline T Vector<T>::operator[](int i)
{
    return arr[i];
}
