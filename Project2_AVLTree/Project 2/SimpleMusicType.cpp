#include "SimpleMusicType.h"

// this(저장되어있는값)가 obj(입력하는값)와 같을 경우 true, 다를 경우 false를 리턴
// 이를 통한 연산자 오버로딩을 이용하여 대수비교를 한다.
bool SimpleMusicType::operator== (const SimpleMusicType &obj)
{
	return (this->m_sID == obj.m_sID);
}

// this(저장되어있는값)가 obj(입력하는값)보다 클 경우 true, 작거나 같을 경우 false를 리턴
// 이를 통한 연산자 오버로딩을 이용하여 대수비교를 한다.
bool SimpleMusicType::operator> (const SimpleMusicType &obj)
{
	return (this->m_sID>obj.m_sID);
}

// this(저장되어있는값)가 obj(입력하는값)보다 작을 경우 true, 크거나 같을 경우 false를 리턴
// 이를 통한 연산자 오버로딩을 이용하여 대수비교를 한다.
bool SimpleMusicType::operator< (const SimpleMusicType &obj)
{
	return (this->m_sID<obj.m_sID);
}

// this(저장되어있는값)가 obj(입력하는값)보다 크거나 같을 경우 true, 작을 경우 false를 리턴
// 이를 통한 연산자 오버로딩을 이용하여 대수비교를 한다.
bool SimpleMusicType::operator>= (const SimpleMusicType &obj)
{
	return (this->m_sID >= obj.m_sID);
}

// this(저장되어있는값)가 obj(입력하는값)보다 작거나 같을 경우 true, 클 경우 false를 리턴
// 이를 통한 연산자 오버로딩을 이용하여 대수비교를 한다.
bool SimpleMusicType::operator<= (const SimpleMusicType &obj)
{
	return (this->m_sID <= obj.m_sID);
}

