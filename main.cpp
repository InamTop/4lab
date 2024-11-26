#include <iostream>
using namespace std;

class Office{
private:
  int Number;
  std::string Name;
  std::string Model;
  int Quantity;
  double Price;
  int Year;
  
public:
  Office();
  Office(int num, std::string na, std::string mod, int q, double p, int y);
  ~Office();
  int getNum();
  void setNum(int p);
  std::string getname();
  void setname(std::string p);
  std::string getmodel();
  void setmodel(std::string p);
  int getQua();
  void setQua(int p);
  double getprice();
  void setprice(double p);
  int getyear();
  void setyear(int p);
};

int main()
{
  Office p1;
  p1.setNum(1);
  p1.setname("Printer");
  p1.setmodel("HP");
  p1.setQua(10);
  p1.setprice(150);
  p1.setyear(2020);
  Office p2(1,"Scanner","Canon",5,80,2019);
  cout << p1.getNum() << " " << p1.getname() << " " << p1.getmodel() << " " << p1.getQua() << " " << p1.getprice() << " " << p1.getyear() <<  endl;
  cout << p2.getNum() << " " << p2.getname() << " " << p2.getmodel() << " " << p2.getQua() << " " << p2.getprice() << " " << p2.getyear() <<  endl;
  Office p3[7];
  int q1;
  std::string q2;
  std::string q3;
  int q4;
  double q5;
  int q6;
  for(int i=0;i<7;i++)
  {
    cout << "Enter Id->";
    cin >> q1;
    p3[i].setNum(q1);
    cout << "Enter Name->";
    cin >> q2;
    p3[i].setname(q2);
    cout << "Enter Model->";
    cin >> q3;
    p3[i].setmodel(q3);
    cout << "Enter Quantity->";
    cin >> q4;
    p3[i].setQua(q4);
    cout << "Enter Price->";
    cin >> q5;
    p3[i].setprice(q5);
    cout << "Enter Year->";
    cin >> q6;
    p3[i].setyear(q6);
  }
  for(int i=0;i<7;i++)
    cout << p3[i].getNum() << " " << p3[i]getname() << " " << p3[i].getmodel() << " " << p3[i].getQua() << " " << p3[i].getprice() << " " << p3[i].getyear() <<  endl;
  return 0;
};
  
Office::Office(); {
  Number = 0;
  Name = "Noname"
  Model = "NoModel"
  Quantity = 0
  Price = 0
  Year = 0
  
}

Office::Office(int num, std::string na, std::string mod, int q, double p, int y); {
  Number = num;
  Name=na;
  Model=mod;
  Quantity=q;
  Price=p;
  Year=y;
}

Office::~Office()

{ }

int Office::getNum()
{
  return Number;
}
void Office::setNum(int p)
{
  Number = p;
}
std::string Office::getname()
{
  return Name;
}
void Office::setname(string p)
{
  Name = p;
}

std::string Office::getmodel()
{
  return Model;
}
void Office::setmodel(string p)
{
  Model = p;
}


int Office::getQua()
{
  return Quantity;
}
void Office::setQua(int p)
{
  Quantity = p;
}


double Office::getprice()
{
  return Price;
}
double Office::setrice(double p)
{
  Price = p;
}

int Office::getyear()
{
  return Year;
}
void Office::setyear(int p)

{
  Year = p;
}
























  
  





