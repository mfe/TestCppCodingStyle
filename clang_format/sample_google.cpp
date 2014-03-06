/** Coding Style sample

    Disparate code samples to demonstrate coding style.

**/
#include <stdlib.h>
#include <stdbool.h>

// Macros
#define SOME_FLAG
#ifdef VAR
#ifdef VAR_2
// do something
#else
// do something
#endif
#endif

// Struct
typedef struct SomeStruct {
  int int_var;
  float float_var;
} SomeStruct;

// Templated class declaration
namespace someNamespace {

template <class SomeClass>
class TempateClass : public ParentClass<SomeClass> {
 protected:
  SomeClass member;

 public:
  int function(const int &intVar, const bool &boolVar = true);
  void bigFunction(const int &intVar, float &floatVar,
                   char charVarWithALongName, const bool &boolVar = true);
};
}

// Const var
const int CONST_VAR = 0;

// Enum
typedef enum {
  ONE,
  TWO,
  THREE
} Number;

// function definitions
int TemplateClass::function(const int &intVar, const bool &boolVar) {
  int someInt;
  // if statement
  if (intVar < 0) throw new CustomException();
  // switch statement
  switch (intVar) {
    case 1: {
      someInt = 43;
      break;
    }
    case 2: {
      someInt = 52;
      break;
    }
    default: { someInt = 10; }
  }
  someInt += intVar + 2;
  if (boolVar) someInt *= 5;

  // << operator
  if (DEBUG) LOG("function :: someInt result" << someInt);
  return someInt;
}

void bigFunction(const int &intVar, float &floatVar, char charVarWithALongName,
                 const bool &boolVar) {
  // Array
  int someArray[255];
  // For
  for (int i = 0; i < 255; i++) {
    // Do Something
  }
}

////// Real life code sample

///// CPP 11
enum class Direction {
  Up,
  Right,
  Down,
  Left
};

std::vector<std::vector<int>> Numbers;

std::map<int, std::string> nombres = {{1, "un"}, {2, "deux"}, {3, "trois"}};

auto addition = [](int x, int y) -> int {
  return x + y;
};

///// TuttleOFX
// Very long declaration
boost::gil::pixel<
    boost::gil::bits32f,
    boost::gil::layout<typename boost::gil::color_space_type<SView>::type>>
    mse(const SView &v1, const SView &v2, const SView &dst,
        bool outputIsPsnr = false);

// imbricate functions
BOOST_ASSERT(cR / (sqrt(cQ *cQ *cQ)) <= 1 && cR / (sqrt(cQ *cQ *cQ)) >= -1);

points.push_back( terry::transform( params, Point2( params._lensCenterDst.x, rec.y1 ) )
