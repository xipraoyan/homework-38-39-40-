#include <iostream>

class Matrix
{
    private:
    int m_col;
    int m_row;
    int** m_arr;

    public:
    Matrix()
    {
       m_col = 0;
       m_row = 0;
       m_arr = nullptr;
    }

    Matrix(const Matrix& other) //copy ctor
    {
        m_row = other.m_row;
        m_col = other.m_col;

        m_arr = new int* [m_col];
       for(int i = 0; i < m_col; i++)
        {
           m_arr[i] = new int[m_row];
           for(int j = 0; j < m_row; j++)
           {
             m_arr[i][j] = other.m_arr[i][j];
             std::cout << m_arr[i][j] << " ";
           }
           std::cout << std::endl;
        }
    }

    Matrix& operator = (const Matrix& other) //operator =
    {
        if(this != &other)
        {

            this -> m_row = other.m_row;
            this -> m_col = other.m_col;

            this -> m_arr = new int* [m_col];
            for(int i = 0; i < m_col; i++)
            {
               m_arr[i] = new int[m_row];
               for(int j = 0; j < m_row; j++)
               {
                m_arr[i][j] = other.m_arr[i][j];
               }
              //std::cout << std::endl;
            }  
        }

        return *this;
    }

    ~Matrix()  //destructor
    {
        for (int i = 0; i < m_col; ++i) 
        {
            delete [] m_arr[i];
        }
        delete [] m_arr;
    }

    void set_Matrix(int a, int b)
    {
        m_col = a;
        m_row = b;
        m_arr = new int* [m_col];
        for(int i = 0; i < m_col; i++)
        {
           m_arr[i] = new int[m_row];
           for(int j = 0; j < m_row; j++)
           {
               m_arr[i][j] = rand() % 10; 
           }
        } 
    }

    int get_col() const
    {
      return m_col;
    }

    int get_row() const
    {
      return m_row;
    }

    void print()
    {
        std::cout << "Columns:" << " " << get_col() << std::endl;
        std::cout << "Rows:" << " " << get_row() << std::endl;

        for(int i = 0; i < m_col; i++)
        {
           for(int j = 0; j < m_row; j++)
           {
               std::cout << m_arr[i][j] << " " ;
           }
               std::cout << std::endl;
        } 
    }
    
};

int main(int argc, char* argv[])
{
    Matrix a;
    a.set_Matrix(3, 3);
    a.print();
    std::cout << std::endl;
    

    Matrix b(a);
    std::cout << std::endl;

    Matrix c(a);
    c = a;
    
    return 0;

}