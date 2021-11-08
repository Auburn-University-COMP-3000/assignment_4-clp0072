#include <iostream> 
#include <cstdlib> // for exit()
#include <cctype>  // for tolower()

using namespace std;

class Month
{
public:

//a default constructor (what does it do? nothing)
  Month() {}

  //constructor to set month based on first 3 chars of the month name
  Month(char c1, char c2, char c3) {
    Month = 0;
    string month = "";
    month += c1;
    month += c2;
    month += c3;

    if (month == "Jan") {
      Month = 1;
    }
    else if (month == "Feb") {
      Month = 2;
    }
    else if (mmonth == "Mar") {
      Month = 3;
    }
    else if (month == "Apr") {
      Month = 4;
    }
    else if (month == "May") {
      Month = 5;
    }
    else if (month == "Jun") {
      Month = 6;
    }
    else if (month == "Jul") {
      Month = 7;
    }
    else if (month == "Aug") {
      Month = 8;
    }
    else if (month == "Sep") {
      Month = 9;
    }
    else if (month == "Oct") {
      Month = 10;
    }
    else if (month == "Nov") {
      Month = 11;
    }
    else if (month == "Dec") {
      Month = 12;
    }
}

  //a constructor to set month base on month number, 1 = January etc.
  Month( int monthNumber) {Month=monthNumber;}

  //an input function to set the month based on a three character input
  void getMonthByNumber(istream& in) {
  string month;
  in >> month;

  if (month == "Jan") {
    Month = 1;
  }
  else if (month == "Feb") {
    Month = 2;
  }
  else if (month == "Mar") {
    Month = 3;
  }
  else if (month == "Apr") {
    Month = 4;
  }
  else if (month == "May") {
    Month = 5;
  }
  else if (month == "Jun") {
    Month = 6;
  }
  else if (month == "Jul") {
    Month = 7;
  }
  else if (month == "Aug") {
    Month = 8;
  }
  else if (month == "Sep") {
    Month = 9;
  }
  else if (month == "Oct") {
    Month = 10;
  }
  else if (month == "Nov") {
    Month = 11;
  }
  else if (month == "Dec") {
    Month = 12;
  }
}
    //input function to set the month based on the month number 
  void getMonthByName(istream& in) {in >> Month;}

  //an output function that outputs the month as an integer,
  void outputMonthNumber(ostream& out) {out << Month;}

  //an output function that outputs the month as the letters.
  void outputMonthName(ostream& out) {
    switch (month) {

      case 1:
      out << "Jan";
      break;

      case 2:
      out << "Feb";
      break;

      case 3:
      out << "Mar";
      break;

      case 4:
      out << "Apr";
      break;

      case 5:
      out << "May";
      break;

      case 6:
      out << "Jun";
      break;

      case 7:
      out << "Jul";
      break;

      case 8:
      out << "Aug";
      break;

      case 9:
      out << "Sep";
      break;

      case 10:
      out << "Oct";
      break;

      case 11:
      out << "Nov";
      break;

      case 12:
      out << "Dec";
      break;

      default:
      break;
    }
  }

  //a function that returns the next month as a month object
  Month nextMonth() {
    int nextMonth = Month + 1;
    if (nextMonth == 13) {
      nextMonth = 1;
  }
    return Month(nextMonth);
  }

  //NB: each input and output function have a single formal parameter
  //for the stream
  int monthNumber() {
    return Month;
  }
};
  
  

int main() {
    
cout << "\nTesting constructor Month(char c1, char c2, char c3)" << endl;
Month month;
month = Month('J', 'a', 'n');
m.outputMonthNumber(cout); cout << " ";
m.outputMonthName(cout); cout << endl;

month = Month('F', 'e', 'b');
m.outputMonthNumber(cout); cout << " ";
m.outputMonthName(cout); cout << endl;

month = Month('M', 'a', 'r');
m.outputMonthNumber(cout); cout << " ";
m.outputMonthName(cout); cout << endl;

month = Month('A', 'p', 'r');
m.outputMonthNumber(cout); cout << " ";
m.outputMonthName(cout); cout << endl;

month = Month('M', 'a', 'y');
m.outputMonthNumber(cout); cout << " ";
m.outputMonthName(cout); cout << endl;

month = Month('J', 'u', 'n');
m.outputMonthNumber(cout); cout << " ";
m.outputMonthName(cout); cout << endl;

month = Month('J', 'u', 'l');
m.outputMonthNumber(cout); cout << " ";
m.outputMonthName(cout); cout << endl;

month = Month('A', 'u', 'g');
m.outputMonthNumber(cout); cout << " ";
m.outputMonthName(cout); cout << endl;

month = Month('S', 'e', 'p');
m.outputMonthNumber(cout); cout << " ";
m.outputMonthName(cout); cout << endl;

month = Month('O', 'c', 't');
m.outputMonthNumber(cout); cout << " ";
m.outputMonthName(cout); cout << endl;

month = Month('N', 'o', 'v');
m.outputMonthNumber(cout); cout << " ";
m.outputMonthName(cout); cout << endl;

month = Month('D', 'e', 'c');
m.outputMonthNumber(cout); cout << " ";
m.outputMonthName(cout); cout << endl;

cout << "\nTesting constructor Month(int monthNumber)" << endl;
int i = 1;
while (i <= 12) {
  Month mm(i);
  mm.outputMonthNumber(cout);
  cout << " ";
  mm.outputMonthName(cout);
  cout << endl;
  i++;
}

cout << "\nTesting the getMonthByName and outputMonth methods" << endl;
i = 1;
Month mm;
while (i <= 12) {
  mm.getMonthByName(cin);
  mm.outputMonthNumber(cout);
  cout << " ";
  mm.outputMonthName(cout);
  cout << endl;
  i++;
}

cout << "\nTesting the getMonthByNumber and outputMonth methods" << endl;
i = 1;
while (i <= 12) {
  mm.getMonthByNumber(cin);
  mm.outputMonthNumber(cout);
  cout << " ";
  mm.outputMonthName(cout);
  cout << endl;
  i++;
}

cout << "\nTesting the nextMonth and outputMonth methods" << endl;
i = 1;
while (i <= 12) {
  Month mm(i);
  mm = mm.nextMonth();
  mm.outputMonthNumber(cout);
  cout << " ";
  mm.outputMonthName(cout);
  cout << endl;
  i++;
}

return 0;
}
  }
};
