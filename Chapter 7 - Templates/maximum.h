template<typename T>
T maximum(const T& first, const T& second);


template<typename T>
T maximum(const T& first, const T& second)
{
   return (first > second) ? first : second;
}

// we pass by reference as T might be a string, which is an object and should
// be a ref

// prof
// Declaration
template<typename T>
T maximum(const T& first, const T& second);

// Definition
template<typename T>
T maximum(const T& first, const T& second)
{
     if (first < second)
          return second;
     else
          return first;
}