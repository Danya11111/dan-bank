#include <iostream>
using namespace std;

struct client{
  string name;
  string surname;
  int amount;
};

client read_data(){
  client c;
  cout<< "Enter your name and surname:"<<"\n";
  cin>> c.name >> c.surname;
  cout<< "Enter amount: "<<"\n";
  cin >> c.amount;
  return c;
}

void write_data(client c){
  cout << c.name<<"\n"<< c.surname <<"\n"<<"Your balance is:"<<"\n"<< c.amount<<"\n";
}

void add_money(client& c){
  cout<< "How much money do you want to add? "<<"\n";
  int m;
  cin>>m;
  c.amount+=m;
}

void spend_money(client& c){
  cout << "How much money do you want to spend? "<<"\n";
  int m1;
  cin>>m1;
  c.amount-=m1;
  if (c.amount <0){
    cout<<"Not enought money!"<<"\n";
    return 0;
  }
  
}
int main() {
  client book;
  book = read_data();
  write_data (book);
  
  int tru_or_fal=1;
  while (tru_or_fal==1){
    cout<<"Choose action: "<<"\n"<<"1-add money 2-spend money"<<"\n";
    int action;
    cin >> action;
    
    if (action == 1){
      add_money(book);
      write_data (book);
      cout<<"Thank you!"<<"\n";
      tru_or_fal--;
    }
      
    else if (action == 2){
      spend_money(book);
      write_data(book);
      cout<<"Thank you!"<<"\n";
      tru_or_fal--;
    }
      
    else{
      cout<<"Error"<<"\n"<<"Try again)"<<"\n";
    
    }
  }
  return 0;
}