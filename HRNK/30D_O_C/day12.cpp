#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};
class Student :  public Person{
	private:
		vector<int> testScores; 
	public:
		Student(
			string firstName_, 
			string lastName_, 
			int identification_, 
			vector<int> testScores_
		) : Person(firstName_, lastName_, identification_), testScores(testScores_) {}
 		
		char calculate() {
			char value;
			//tmp avg=0;
			int sum=0;
			for(int i=0; i<testScores.size(); i++) {
				sum+=testScores[i];
			}
			int average = sum/testScores.size();

			if (average >= 90) {
				value = 'O';
			} else if (average>=80) {
				value = 'E';
			} else if (average>=70) {
				value = 'A';
			} else if (average>=55) {
				value = 'P';
			} else if (average >=40) {
				value = 'D';
			} else {
				value = 'T';
			}
			return value;
		} 
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
