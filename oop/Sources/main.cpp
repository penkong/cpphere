#include <iostream>
#include <vector>

// structs
struct User
{
  std::string first;
  std::string last;
  std::string get_status() 
  {
    return status;
  }
  private:
    std::string status = "GOLD";
};

class Me {
  static int user_count; 
  std::string status = "GOLD";
  public: 
    static int get_user_count() 
    {
      return user_count;
    }
    std::string first;
    std::string last;
    std::string get_status() 
    {
      return status;
    }
    Me() {
      user_count++;
    }
    ~Me() {
      user_count--;
    }
    friend void output_status();
};

int Me::user_count = 0;

void output_status(Me me)
{
  std::cout << me.first;
}

// on call
// output_status(me);

class WithCtor {
  public:
    std::string first;
    WithCtor() 
    {
      std::cout << "Constructor";
    }
    WithCtor(std::string first) 
    {
      this->first = first;
    }
    ~WithCtor() {
      std::cout << "Calling Destructor";
    }
};


// operator overloading 
// point + point
// define what plust means
class Point{
  public:
    int x,y = 10;
    Point operator + (Point p)
    {
      Point new_p;
      new_p.x = x + p.x;
      new_p.y = y + p.y;
      return new_p;
    }

    bool operator == (Point p) {
      if(x == p.x && y == p.y ) {
        return true;
      }
      return false;
    }
};

// it can become friend
std::ostream& operator << (std::ostream& output ,const User &user)
{
  output << user.first << "\n" << user.last << std::endl;
  return output; 
};

// it can become friend
std::istream& operator >> (std::istream& input , User user) 
{
  input >> user.first >> user.last;
  return input;
}

// now access to private parts

int main() 
{
  User user;
  user.first = "Hey";
  user.last = "do";

  Me me;
  me.get_status();
  Me::get_user_count();
  me.~Me();

  Point p1,p2;
  Point p3 = p1 + p2;

  std::vector<User> users;

  // User user;
  std::cout << user << std::endl;
  std::cin >> user;
}