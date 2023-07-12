#ifndef LNODE_T_H_
#define LNODE_T_T_
#include <string>


class Student_inf
{
private:
	std::string m_name;
	long m_ID;
	int m_ChineseScore;
	int m_MathematicsScore;
	int m_EnglishScore;
public:
	Student_inf();      //default constructor
	Student_inf(const std::string& name, long ID, int ChineseScore, int MathematicsScore, int EnglishScore);
	~Student_inf();
	void Print_inf();
};
#endif // !LNODE_T_H_