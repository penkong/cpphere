#include <iostream>
#include <cmath>
#include <climits>
#include <float.h>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
// using directive
// using namespace std;

// using declration
using std::cout;
using std::cin;
using std::endl;
using std::string;

// define constant , known as macros
#define xxx 10;

//  read c++ core guidelines

int main() {
  // cout << "hellw";
  // int sl;
  // cin >> sl;
  // need to say what output format is 
  // printf("%i\n", sl);
  // int base , exponent;
  // cout << pow(10,2);
  short a;
  int b;
  long c;
  long long d;

  unsigned short aa;
  unsigned int ba;
  unsigned long ca;
  unsigned long long da;

  // -128,127
  char x = 'A';
  unsigned char y;
  // casting
  // cout << (int) x << endl; 
  // cout << sizeof(short) << endl;
  // cout << SHRT_MAX << endl;

  bool f = false;
  // boolapha to show false in console .
  cout <<  std::boolalpha << f << endl;

  float aaa;
  // 77000 = 7.7E4;
  double bbb;
  long double sl;
  // cout << std::fixed << aaa;

  // fload are trusted by this amount
  cout << FLT_DIG << endl;

  // readonly var 
  const int x = 5;

  // constant
  enum { y = 10};

  // numeric functions
  // NAN , inf , -inf , INIFINITY
  // sqrt , remainder || fmod --> floating , modules --> int
  // ceil , floor , trunc

  string greet = "fsdf";
  // string has member function === method , length(), size()
  // append("herer"), insert(at indxe , "  insert here")
  // erase(3, 1) , remove last char pop_back(), 
  // replace(at index ,length , 'replace able string ')

  // sensoring text
  // greeing.find("hell")
  // greeing.replace(greeting.find("hell") , 4)
  // substr(5, 2), find_first_of()
  // .compare() return 0

  char name[] = "MKZ"; // c style "MKZ\0"

  // cin only get first word
  // user input
  // getline()
  // for get numbers cin.getline()


  /// cnstant 
  auto xxd = 5ULL;
  // g++ filename -std=c++11

  // hex(16) and octal(8)
  // hex ---> int number = 0x30 
  // octal ---> int number = 030 
  // std::hex << decimal number here

  // control flow 
  // branching if switch, looping

  enum seasons { summer, spring};
  seasons her = summer;

  enum class Seasons { summer, spring};
  Seasons now = Seasons::summer;

  // ternary 
  // z== y ? 'fds' : 'fdsff'

  // this is seed for random
  srand(time(NULL));
  rand() % 251;


  // arrays and vectors templetized array 
  // int guesses[20];
  // for loop over array , need make size
  // int size = sizeof(guesses) ==> give in bytes / sizeof(int)
  // or keep track of element of array seprately 

  // pass array to function cause it become pointer
  // std::cin.clear()
  // std::cin.ignore(10000, '\n')
  // std::cin.ingore(std::numeric_limits<std::streamszie>::max(), '\n');

  // dynamic array ==? vector , list , array list  
  // vector know size , items.size()
  // templatized class == generic
  // std::vector<int> dddd = {1,2,5};
  // dddd.push_back(23);
  // g++ -std=c++11;
  // passing vector sth(std::vector<int> data) or &data

  // standard templetize array , an object contain array
  // stl array
  // std::array<int,5> , khow his size, static size
  // array passed by pointers , vector pass by value , stl array pass by value


  // range based loop
  //
  return 0;
} 