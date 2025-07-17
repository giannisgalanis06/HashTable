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
        int a,i=0; //a διαβάζει αριθμους απο το αρχείο και i μετράει ποσους αριθμους εχει το αρχείο

        ifstream g; //ρευμα g να διαβάσει απο το αρχείο filename τις τιμες των κομβων
        g.open(filename);
    if(g.is_open())
        {
        while(g>>a) //βρίσκω πόσοι αριθμοι υπάρχουν στο filename αρχείο
        {
            i++;
        }
        size=i;
        i=0;
        g.clear();  // ωστε να φυγει το EOF flag(αλλιως θα διαβασει τιποτα)
        g.seekg(0,ios::beg); //πηγαίνω τον δείκτη ανάγνωσης πάλι στην αρχη για να πάρω και τις τιμές εφόσον εμαθα πόσα στοιχεία έχει και δέσμευσα χωρο πίνακα

        A=new Hashh[size];
        for(i=0;i<size;i++)
        {
            A[i].head=NULL; //βάζω για αρχή για όλο το πίνακα κεφαλί λίστας το NULL
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
    Hashko *temp=new Hashko; //δημιουργία καινούργιου κόμβου βάζωντάς του και τα στοιχεία
    temp->t=k;
    temp->next=A[n].head;


    A[n].head=temp; //τον βάζω αρχή λίστας
}

string Hashtable::Search(int k)
{

    int n=hash(k); //βρίσκω πρώτα την θέση του στον πίνακα
    Hashko *temp=A[n].head;

    while(temp!=NULL) //μέχρι να τελειώσιε η λίστα
    {
        if(temp->t==k) //αν η τιμή είναι ίση με αυτή που ψάχνω
            return "SUCCESS";
        temp=temp->next; //προχωρά στον επόμενο της λίστας κόμβο


    }
return "FAILURE"; //αν φτάσει εδώ σημαίνει οτι δεν βρέθηκε


}


int Hashtable::Getsize()
{

    return size; //επιστρέφει το τρέχον μέγεθος του πινκα κατακερματισμού
}


