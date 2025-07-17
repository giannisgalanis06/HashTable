#ifndef HASHTABLE_H
#define HASHTABLE_H
#include <iostream>
using namespace std;
#include <string>



struct Hashko              //συνδεδεμένη λίστα για κάθε επόμενη ίδια θέησ πίνανκα
{
    int t; //τιμή που αποθηκεύω
    Hashko *next; //δείκτης για κάθε επόμενο κόμβο λίστας
};

struct Hashh
{
    Hashko *head; //κεφαλή της λίστας για συγκρούσεις
};





class Hashtable
{
   private:
       int size; //μέγεθος πίνακα
       Hashh *A; //πίνακας απο Hashh όπου κάθε στοιχείο του έχει μια δική του λίστα



    public:
            int hash(int k); //συνάρτηση κατακερματισμού
            Hashtable(); //κατασκευαστής
            void insert(int k); //εισάγει στοιχείο
            void BuildHashtable(string fileanme);
            int Getsize(); //για μέγεθος
            string Search(int k); //αναζητά στοιχείο






};





#endif
