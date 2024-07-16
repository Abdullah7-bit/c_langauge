#include <iostream>
using std::string;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class AbstractEmployee{
	virtual void AskforPromotion()=0;
};
class Employee:AbstractEmployee{
	private:
		string Company;
		int Age;
	protected:
		string Name;
	public:
		string getName(){
			return Name;
		};
		void setName(string name){
			Name = name;
		};
		string getCompany(){
			return Company;
		};
		void setCompany(string company){
			Company = company;
		};
		int getAge(){
			return Age;
		};
		void setAge(int age){
//			if(age >= 18)
			Age = age;
		};		
		
		void Introduction(){
		std::cout << "Name - "	<< Name << std::endl;
		std::cout << "Company - "	<< Company<< std::endl;
		std::cout << "Age - "	<< Age<< std::endl;
		};
		Employee(string name, string company,int age){
			Name = name;
			Company = company;
			Age = age;
		};
		void AskforPromotion(){
			if(Age>=25)
				std::cout << Name << " got Promoted!!" << std::endl;
			else
				std::cout << Name << ", Sorry no Promotion for u" << std::endl;
		}
		
		virtual void Work(){
			std::cout << Name << " is checking Email, doing backlog and performing some task!!!" << std::endl;
		}
		
		
};

	class Developer: public Employee{
			public:
				string Favproglang;
				Developer(string name,string company, int age, string favproglang):Employee(name,company,age){
					Favproglang = favproglang;					
				}
				void FixBug(){
					std::cout << getName() << " fix bugs using " << Favproglang << std::endl;
				}
				void Work(){
					std::cout << Name << " is writing code in " << Favproglang << std::endl;
				}
		};
		class Teacher:public Employee{
			public:
				string Subject;
				void PreparingSubject(){
					std::cout<< getName() << " is preparing " << Subject << " subject." << std::endl;
				};
				Teacher(string name,string company,int age , string subject):Employee(name,company,age){
					Subject = subject;
				};
				void Work(){
					std::cout << Name << " preparing test for "<< Subject << std::endl;
				}
		};
int main(int argc, char** argv) {
//	Employee emp1 =  Employee("Abdullah","XYZ",22);
//	Employee emp2 =  Employee("Furqan","ASD",29);
//	emp1.Introduction();
	
//	emp1.setAge(13);
//	std::cout << emp1.getName() << " will be " << emp1.getAge() << " years old next year!!" << std::endl;
//	emp1.AskforPromotion();
//	emp2.AskforPromotion();



Developer d = Developer("Abdullah", "Microsoft",22,"C++");
//d.FixBug();
//d.AskforPromotion();
//d.Work();
Teacher t =Teacher("Ali","PC",29,"History");
//t.PreparingSubject();
//t.Work();


Employee *e1 = &d;
Employee *e2 = &t;

e1->Work();
e2->Work();

	return 0;
}
