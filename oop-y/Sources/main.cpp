#include <iostream>

// abstract class .
class IEmployee
{
  virtual void AskForPromotion() = 0;
};

class Employee : IEmployee
{
  // by default fields are private
protected:
  std::string Name;
  std::string Company;
  int Age;

public:
  void setName(std::string name)
  {
    Name = name;
  }

  std::string getName()
  {
    return Name;
  }

  void setCompany(std::string company)
  {
    Company = company;
  }

  std::string getCompany()
  {
    return Company;
  }

  void setAge(int age)
  {
    if (age >= 18)
    {
      Age = age;
    }
  }

  int getAge()
  {
    return Age;
  }

  Employee(std::string name, std::string company, int age)
  {
    Name = name;
    Company = company;
    Age = age;
  }

  void Introduce()
  {
    std::cout << "name - " << Name << std::endl;
    std::cout << "company - " << Company << std::endl;
    std::cout << "age - " << Age << std::endl;
  }

  void AskForPromotion()
  {
    if (Age > 30)
    {
      std::cout << "Promoted!" << std::endl;
    }
    else
    {
      std::cout << "no Promoted!" << std::endl;
    }
  }

  // polymorph
  virtual void Work() {
    std::cout << Name << "is doing work" << std::endl;
  }
};

class Developer : public Employee
{

public:
  std::string FavProgram;
  Developer(std::string name, std::string company, int age, std::string fav) : Employee(name, company, age)
  {
    FavProgram = fav;
  }
  void FixBug()
  {
    std::cout << getName() << "fixed bugs" << FavProgram << std::endl;
  }
};

class Teacher : public Employee
{
  std::string Subject;

public:
  Teacher(std::string name, std::string company, int age, std::string subj) : Employee(name, company, age)
  {
    Subject = subj;
  }
  void Prepare()
  {
    std::cout << Name << std::endl;
  }
};

int main()
{

  Employee emp = Employee("Mazdak", "mkz", 20);
  Employee emp2 = Employee("Mazdak2", "mkz2", 32);

  // emp.Age = 30;
  // emp.Company = "mkz";
  // emp.Name = "mazdak";
  // emp2.Age = 31;
  // emp2.Company = "mkz2";
  // emp2.Name = "mazdak2";

  // emp.setAge(65);

  emp.Introduce();
  emp.AskForPromotion();
  emp2.Introduce();
  emp2.AskForPromotion();


  Developer d = Developer("mkk", "m", 32, "c++");
  d.FixBug();
  d.Introduce();

  Teacher t = Teacher("mkk", "m", 32, "history");

  // pointer to reference .
  Employee* e =  &d;
  Employee* e2 =  &t;

  e->Work();
  e2->Work();
}

// Encapsulation , group data in class and not accessible out of class directly .
// getter and setters

// abstrction : hiding complicate things behind procedure that make them seems simple.

// inheritance ,

// Polymorphism , an object that has many forms 