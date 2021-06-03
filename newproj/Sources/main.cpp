#include <iostream>
#include <cmath>

using namespace std;

void higher(string name, int age);

int cuber(double num) {
  return num * num * num;
}

int power(int base, int pow) {
  int res = 1;
  for(int i = 0; i < pow; i++) {
    res = res * base; 
  }
  return res;
}

// inheritance


// classes
class MyClass {
  private:
    string rating;

  public:
    string title;
    string author;
    int pages;

    MyClass() {
      cout << "creating with no" << endl;
    }

    MyClass(string atitle, string aauthor, int apages, string aRating) {
      cout << "creating " << endl;
      title = atitle;
      author = aauthor;
      pages = apages;
      setRating(aRating);
    }

    // object functiosn
    bool hasHonors() {
      if(title.length()>3) {
        return true;
      }
      return false;
    }

    // getters and setters
    void setRating(string aRating){
      if(aRating == "G" || aRating == "PG") {
        rating = aRating;
      } else {
        rating = "NR";
      }
    }

    string getRating() {
      return rating;
    }
};


class SpeficicClass : public MyClass {};

int main()
{

  // objects
  // MyClass class1("high");
  // class1.title = "mk";
  // class1.author = "mkz ";
  // class1.pages = 23;

  MyClass starter("new book", "mk", 334, "G");
  MyClass starter2;
  cout << starter2.hasHonors();



  // string chars = "chars";

  // int charsAge;
  // charsAge = 18;

  // //  data types in c++

  // char grade = 'A';
  // string phrase = "Here are these";
  // int age = 44;
  // // float 
  // // for specific 
  // double mld = 2.33434;
  // bool isIt = true;


  //  with strings 
  // cout << phrase.length();
  // cout << phrase[0];
  // phrase[0] = 'D';
  // cout << phrase;

  // cout << phrase.find("are", 0) << endl;
  // string phase = phrase.substr(5, 3);
  // cout << phase;

  // numbers
  // cout << 10.0 / 3.0 << endl;

  // cout << pow(2, 5) << endl;
  // cout << sqrt(24);


  //  get user input
  // int agged;
  // cout << "Enter Age: " ;
  // cin >> agged;
  // cout << "Your are " << agged << " Years old" << endl;

  // string name;
  // cout << "Enter Name: ";
  // getline(cin, name);
  // cout << "Hello " << name << endl;

  // calculator 
  // int num1, num2;
  // cout << "Enter First Number : ";
  // cin >> num1;
  // cout << "Enter Second Number : ";
  // cin >>  num2 ;
  // cout << num1 + num2;


  // mad libs
  // string color, violets, her;
  // cout << "Enter a Color : ";
  // getline(cin,color);
  // cout << "Enter a Noun : ";
  // getline(cin,violets);
  // cout << "Enter a her : ";
  // getline(cin,her);
  // cout << "Roses Are " << color << endl;
  // cout << violets << " are blue" << endl;
  // cout << "I love " << her << endl;

  // arrays 
  // int luckynum[] = {3,4,5,6,7,8,9};
  // cout << luckynum[0];

  // int luckyNum[4] = {3,4,5,6};

  //  functions 
  // higher("Bruno", 324);
  // double cu = cuber(44.4);
  // cout << cu;

  // if statement 
  // bool isHere = false;
  // if(isHere) {
  //   cout << "he is Male!!! ";  
  // } else {
  //   cout << "Nope";
  // }

  //  calculator 2 
  // int num1, num2;
  // char op;

  // cout << "Enter First Numer : ";
  // cin >> num1;

  // cout << "Enter Operator : ";
  // cin >> op;

  // cout << "Enter Second Numer : ";
  // cin >> num2;

  // int res;
  // if(op == '+') {
  //   res = num1 + num2;
  // } else if (op == '-') {
  //   res = num1 - num2;
  // } else if (op == '/') {
  //   res = num1 / num2;
  // } else if (op == '*') {
  //   res = num1 * num2;
  // } else {
  //   cout << "Invalid op!";
  // }

  // cout << res;

  //  switch
  // int dayNum;
  // string dayName;

  // switch (dayNum)
  // {
  // case 0:
  //   dayName = 'Sunday';
  //   break;
  // default:
  //   break;
  // }

  // while loops
  // int index = 1;

  // while (index < 10)
  // {
  //   cout << index << endl;
  //   index++;
  // }
  

  // for loops 
  // for (int i = 1; i < 20; i++) {
  //   cout << i << endl;
  // }


  // exponent
  // power()

  // 2d array and nested;
  // int numberss[2][2] = {{1,2},{3,4}};


  // int aged = 434;

  // cout << &aged;

  // // pointer var
  // int *pAged = &aged;

  // cout << pAged << endl;
  // // de reference pointer
  // cout << *pAged;

  // cout << mld << endl;
  // cout << "hello " << chars << endl;
  // cout << "    /  " << charsAge << endl;
  // cout << "    " << chars << "/ " << endl;
  
  return 0;
}

void higher(string name, int age) 
{
  cout << "Hi There!!! " << name << " " << age << endl;
}
