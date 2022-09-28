template<typename T>
bool search(const T* array, int numberOfElements, const T& element)
{
   int idx = 0;
   while (idx < numberOfElements)
   {
      if (array[idx] == element)
      {
         return true;
      }
      else
      {
         ++idx;
      }
   }
   
   return false;
}

// Remember to use while loops for stopping before sequence

// ALSO element can be a string, so we add const ref, array is also not changed so we add
// const
