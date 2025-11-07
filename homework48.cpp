#include <iostream>

class Matrix
{
    private:
    int m_col;
    int m_row;
    int** m_arr;

    public:
    Matrix(int a, int b)
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
                std::cout << m_arr[i][j] << " ";
               }
              std::cout << std::endl;
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


    /*
    void set_Matrix(int a, int b)
    {
        m_col = a;
        m_row = b;
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
    }
    */
};

int main(int argc, char* argv[])
{

    std::cout << std::endl;
    Matrix a(3, 3);
    //std::cout << std::endl;
    

    Matrix b(a);
    std::cout << std::endl;

    Matrix c(a);
    std::cout << std::endl;
    c = a;

    
    
    return 0;

}