#ifndef HASHTABLE_H
#define HASHTABLE_H
#include <iostream>
using namespace std;
#include <string>



struct Hashko              //����������� ����� ��� ���� ������� ���� ���� �������
{
    int t; //���� ��� ���������
    Hashko *next; //������� ��� ���� ������� ����� ������
};

struct Hashh
{
    Hashko *head; //������ ��� ������ ��� �����������
};





class Hashtable
{
   private:
       int size; //������� ������
       Hashh *A; //������� ��� Hashh ���� ���� �������� ��� ���� ��� ���� ��� �����



    public:
            int hash(int k); //��������� ���������������
            Hashtable(); //�������������
            void insert(int k); //������� ��������
            void BuildHashtable(string fileanme);
            int Getsize(); //��� �������
            string Search(int k); //������� ��������






};





#endif
