#include <iostream>

template <typename T>
class Vector
{
private:
    size_t m_cap;
    size_t m_size;
    T* m_arr;

public:
    Vector() : m_cap{2}, m_size{0}, m_arr{new T[m_cap]} 
    {
        
    }

    ~Vector() 
    {
        delete [] m_arr;
    }

    void push_back(T elem)
    {
        if(m_cap == m_size)
        {
            m_cap *= 2;
            T* tmp = new T[m_cap];
            for(int i = 0; i < m_size; i++)
            {
                tmp[i] = m_arr[i];
            }
            delete [] m_arr;
            m_arr = tmp;
            tmp = nullptr;
        }
        m_arr[m_size] = elem;
        m_size += 1;
    }

    size_t size() 
    { 
        return m_size; 
    }

    size_t cap()
    { 
        return m_cap; 
    }

    T& operator[](size_t index) 
    {
        return m_arr[index];
    }

    const T& operator[](size_t index) const 
    {
        return m_arr[index];
    }

};

int main(int argc, char* argv[])
{
    Vector <int> v;

    v.push_back(5);

    std::cout << "size = " << v.size() << std::endl;
    std::cout << "capacity = " << v.cap() << std::endl;

    std::cout << v[0] << std::endl;
}