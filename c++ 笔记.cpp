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

/*
常量成员函数 
声明带 const 关键字的成员函数将指定该函数是一个“只读”函数，它不会修改为其调用该函数的对象。 常量成员函数不能修改任何非静态数据成员或调用不是常量的任何成员函数。若要声明常量成员函数，请在参数列表的右括号后放置 const 关键字。 声明和定义中都需要 const 关键字。
*/
// constant_member_function.cpp
class Date
{
public:
   Date( int mn, int dy, int yr );
   int getMonth() const;     // A read-only function
   void setMonth( int mn );   // A write function; can't be const
private:
   int month;
};

int Date::getMonth() const
{
   return month;        // Doesn't modify anything
}
void Date::setMonth( int mn )
{
   month = mn;          // Modifies data member
}
int main()
{
   Date MyDate( 7, 4, 1998 );
   const Date BirthDate( 1, 18, 1953 );
   MyDate.setMonth( 4 );    // Okay
   BirthDate.getMonth();    // Okay
   BirthDate.setMonth( 4 ); // C2662 Error
}

//* ----------------------------------------------------------

