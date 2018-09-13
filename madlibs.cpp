//Juan Aguirre-Ayala
#include <iostream>
#include <string>
using namespace std;

int main()
{
  string sw;
  string n1;
  string n2;
  string v;
  string e;
  int num;

  cout << endl << endl << endl;

  cout << "Welcome to the Mad Libs Game!" << endl;
  cout << "Please enter a silly word: ";
  cin >> sw;
  cout << endl <<  "Please enter a noun: ";
  cin >> n1;
  cout << endl <<  "Please enter another noun: ";
  cin >> n2;
  cout << endl << "Pleaes enter a number: ";
  cin >> num;
  cout << endl << "Please enter a past-tense verb: ";
  cin >> v;
  cout << endl << "Please enter an emotion: ";
  cin >> e;

  cout << "Okay! Here is your story..." << endl << endl;

  cout << "There was a boy named " << sw << ". He had a strong " << endl;
  cout << n1 << ", and when he was " << num << ", he " << v << " with a " << n2 <<   " for fun." << endl;
  cout << "It made him " << e << " to be included." << endl << endl;
  
  cout << "Thank you for playing!" << endl;

  return 0;
}
