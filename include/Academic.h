#ifndef Academic_H
#define Academic_H
struct Academic
{
	char* pass;
	char* fullname;
	char* gender;
	char* phoneNumber;
	char* email;
};
struct node
{
	Academic data;
	node* pNext;
};
Academic* Create();
#endif