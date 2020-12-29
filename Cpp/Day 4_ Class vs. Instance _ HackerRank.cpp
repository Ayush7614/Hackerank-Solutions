using namespace std;
#include <iostream>
class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        if(initialAge>=0)
        {
        age=initialAge;
        }
        else
        {
        age=0;
        cout<<"Age is not valid, setting age to 0."<<endl;
        }

    }

    void Person::amIOld(){
        if(age<13)
        {
            cout<<"You are young."<<endl;
        }
        else if (age>=13 && age<18)
        {
              cout<<"You are a teenager."<<endl;
        }
        else{
              cout<<"You are old."<<endl;

        }

    }

    void Person::yearPasses(){
        age++;
    }
    int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses();
        }
        p.amIOld();

		cout << '\n';
    }

    return 0;
}
