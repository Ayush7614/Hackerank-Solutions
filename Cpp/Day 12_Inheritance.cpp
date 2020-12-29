

class Student : public Person{
	private:
		vector<int> testScores;  
	public:
Student(string firstName, string lastName, int identification, vector<int> scores):Person(firstName,lastName,identification)
{
    this->testScores=scores;
}
        char calculate()
        {
            int sum=0;
            int avg=0;
            for(unsigned long int i=0;i<testScores.size();i++)
            {
                sum=sum+testScores[i];
            }
            avg=sum/testScores.size();

            if(avg>=90 && avg<=100)
                return 'O';
            else if(avg>=80 && avg<90)
                return 'E';
            else if(avg>=70 && avg<80)
                return 'A';
            else if(avg>=55 && avg<70)
                return 'P';
            if(avg>=40 && avg<55)
                return 'D';
            else
                return 'T';       
        
        }
};

