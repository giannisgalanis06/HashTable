#include <iostream>
#include "HASHTABLE.h"
using namespace std;
#include <string>
#include <fstream>


Hashtable::Hashtable()
{
    size=0;
    A=NULL;
}

int Hashtable::hash(int k)
{
    return k%size;
}

void Hashtable::BuildHashtable(string filename)
{
        int a,i=0; //a �������� �������� ��� �� ������ ��� i ������� ������ �������� ���� �� ������

        ifstream g; //����� g �� �������� ��� �� ������ filename ��� ����� ��� ������
        g.open(filename);
    if(g.is_open())
        {
        while(g>>a) //������ ����� ������� �������� ��� filename ������
        {
            i++;
        }
        size=i;
        i=0;
        g.clear();  // ���� �� ����� �� EOF flag(������ �� �������� ������)
        g.seekg(0,ios::beg); //������� ��� ������ ��������� ���� ���� ���� ��� �� ���� ��� ��� ����� ������ ����� ���� �������� ���� ��� �������� ���� ������

        A=new Hashh[size];
        for(i=0;i<size;i++)
        {
            A[i].head=NULL; //���� ��� ���� ��� ��� �� ������ ������ ������ �� NULL
        }
        int n;
        while(g>>a)
            insert(a);
    g.close();

        }else {cerr<<"File "<<filename<<" doesnt open";}

}



void Hashtable::insert(int k)
{
    int n=hash(k);
    Hashko *temp=new Hashko; //���������� ����������� ������ �������� ��� ��� �� ��������
    temp->t=k;
    temp->next=A[n].head;


    A[n].head=temp; //��� ���� ���� ������
}

string Hashtable::Search(int k)
{

    int n=hash(k); //������ ����� ��� ���� ��� ���� ������
    Hashko *temp=A[n].head;

    while(temp!=NULL) //����� �� ��������� � �����
    {
        if(temp->t==k) //�� � ���� ����� ��� �� ���� ��� �����
            return "SUCCESS";
        temp=temp->next; //������� ���� ������� ��� ������ �����


    }
return "FAILURE"; //�� ������ ��� �������� ��� ��� �������


}


int Hashtable::Getsize()
{

    return size; //���������� �� ������ ������� ��� ����� ���������������
}


