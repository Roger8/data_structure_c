//C/C++ notes
1.
//***********************  const *  &  * const ********************//
Read it backwards...
int* - pointer to int
int const * - pointer to const int
int * const - const pointer to int
int const * const - const pointer to const int
Now the first const can be on either side of the type so:

const int * == int const *
const int * const == int const * const
If you want to go really crazy you can do things like this:

int ** - pointer to pointer to int
int ** const - a const pointer to a pointer to an int
int * const * - a pointer to a const pointer to an int
int const ** - a pointer to a pointer to a const int
int * const * const - a const pointer to a const pointer to an int
/*
split the statement at asterix sign, then, if the const keyword appears in the left part (like in 'const int * foo') - it belongs to pointed data, if it's in the right part ('int * const bar') - it's about the pointer. 
*/