#include <iostream>
#include "LNode_T_H.h"

Student_inf::Student_inf()
{
	std::cout << "default student name called.\n";
    m_name = "error";
	m_ID = 0;
    m_ChineseScore;
	m_MathematicsScore;
	m_EnglishScore;
}

Student_inf::Student_inf(const std::string& name, long ID, int ChineseScore, int MathematicsScore, int EnglishScore)
{
	m_name = name;
	m_ID = ID;
	m_ChineseScore = ChineseScore;
	m_MathematicsScore = MathematicsScore;
	m_EnglishScore = EnglishScore;
}

Student_inf::~Student_inf()
{
}

void Student_inf::Print_inf()
{
	std::cout << "name: " << m_name << std::endl;
	std::cout << "ID: " << m_ID << std::endl;
	std::cout << "ChineseScore: " << m_ChineseScore << std::endl;
	std::cout << "MathmaticsScore: " << m_MathematicsScore << std::endl;
	std::cout << "EnglishScore: " << m_EnglishScore << std::endl;
}