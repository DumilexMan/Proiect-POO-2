#include <iostream>
#include <cstring>
using namespace std;

class Telekom
{
public:
    Telekom(){id=1;};
    Telekom(char l[20])         { strcpy(this->locatie,l); nrang=0; id=1; } //Constructori pentru magazine fara, cu angajati
    Telekom(char l[20],int n,int id)   { strcpy(this->locatie,l); this->nrang=n; this->id=id; }

//    ~Telekom()                  { cout<<"Date magazin sterse \n";}


    virtual ~Telekom(){};

    void Afisare_magazin()      { cout<<"Locatie: "<<locatie<<"   Nr. angajati: "<<nrang<<"   Id: "<<id<<"\n";}

    Telekom operator++();
    Telekom operator++(int dummy);
    Telekom operator=(Telekom op1);

    char get_locatie();
    int get_nrang();
    int get_id();
    void set_loc(char n[20]);
    void set_nrang(int nr);
    void set_id(int n);

    virtual void show_id() const{ cout<<id<<"Telekom"<<endl;}
    void show_id1() const{ cout<<id<<"Telekom"<<endl;}

private:
    char locatie[20];
    int nrang,id;
    static int id_reg;//id regiune                           //variabile statice

};

class Client : public Telekom
{
public:
    Client(){};
    Client(char n[20],char p[20], char c[15], char nr[15], char a[20], int v, int id)
    {
        strcpy(this->nume,n);
        strcpy(this->prenume,p);
        strcpy(this->cnp,c);
        strcpy(this->nrtel,nr);
        strcpy(this->adresa,a);
        this->varsta=v;
        this->id=id;
    }

    ~Client(){ cout<<"Date client sterse \n"; }

    void Afisare_client()
    {
        cout<<"Nume: "<<nume<<"   ";
        cout<<"Prenume: "<<prenume<<"   ";
        cout<<"CNP: "<<cnp<<"   ";
        cout<<"Nr. telefon: "<<nrtel<<"   ";
        cout<<"Adresa: "<<adresa<<"   ";
        cout<<"Varsta: "<<varsta<<"   ";
        cout<<"Id: "<<id<<"\n";
    }

    void Sterge_nume()
    {
        strcpy(nume,"\0");
        cout<<"Nume sters \n";
    }
    void Sterge_prenume()
    {
        strcpy(prenume,"\0");
        cout<<"Nume sters \n";
    }

    void set_nume(char n[20]);
    void set_prenume(char n[20]);
    void set_cnp(char n[20]);
    void set_nrtel(char n[20]);
    void set_adresa(char n[20]);
    void set_varsta(int n);
    void set_id(int n);

    char get_nume();
    char get_prenume();
    char get_cnp();
    char get_nrtel();
    char get_adresa();
    int get_varsta();
    int get_id();

    friend Client operator+(Client op1, char op2[20]);
    friend Client operator+(char op1[20], Client op2);
    friend Client operator+(Client op1, Client op2);
    friend Client operator-(Client op1, int n); //sterge n litere din nume

    Client operator=(Client op1);

    virtual void show_id() const{ cout<<id<<endl;}
    void show_id1() const{ cout<<id<<endl;}

private:
    char nume[20],prenume[20],cnp[15],nrtel[15],adresa[20];
    int varsta,id;

};

class Angajat : public Telekom
{
public:
    Angajat(){id=30;};
    Angajat(char n[20],char p[20], char c[15], char nr[15], char a[20], int v, int s, int id)
    {
        strcpy(this->nume,n);
        strcpy(this->prenume,p);
        strcpy(this->cnp,c);
        strcpy(this->nrtel,nr);
        strcpy(this->adresa,a);
        this->varsta=v;
        this->salariu=s;
        this->id=id;
    }

    ~Angajat(){ cout<<"Date angajat sterse \n"; }

    void Afisare_angajat()
    {
        cout<<"Nume: "<<nume<<"   ";
        cout<<"Prenume: "<<prenume<<"   ";
        cout<<"CNP: "<<cnp<<"   ";
        cout<<"Nr. telefon: "<<nrtel<<"   ";
        cout<<"Adresa: "<<adresa<<"   ";
        cout<<"Varsta: "<<varsta<<"   ";
        cout<<"Salariu: "<<salariu<<"   ";
        cout<<"Id: "<<id<<"\n";
    }

    void set_nume(char n[20]);
    void set_prenume(char n[20]);
    void set_cnp(char n[20]);
    void set_nrtel(char n[20]);
    void set_adresa(char n[20]);
    void set_varsta(int n);
    void set_salariu(int n);
    void set_id(int n);

    char get_nume();
    char get_prenume();
    char get_cnp();
    char get_nrtel();
    char get_adresa();
    int get_varsta();
    int get_salariu();
    int get_id();

    friend Angajat operator+(Angajat op1, int n);
    friend Angajat operator-(Angajat op1, int n);

    Angajat operator=(Angajat ob1);

    virtual void show_id() const{ cout<<id<<"Ang"<<endl;}
    void show_id1() const{ cout<<id<<"Ang"<<endl;}

private:
    char nume[20],prenume[20],cnp[15],nrtel[15],adresa[20];
    int varsta,salariu,id;
};

class Abonament  :public Telekom
{
public:
    Abonament() //Constructor simplu
    {
        this->tip='C';
        this->pret=5;
        this->nrmin=100;
        this->id=10;
    }
    Abonament(char tip) //Constructor parametrizat
    {
        if(tip=='C')
        {
        this->tip=tip;
        this->pret=5;
        this->nrmin=100;
        this->id=10;
        }
        if(tip=='B')
        {
        this->tip=tip;
        this->pret=10;
        this->nrmin=200;
        this->id=10;
        }
        if(tip=='A')
        {
        this->tip=tip;
        this->pret=30;
        this->nrmin=500;
        this->id=10;
        }
        if(tip=='S')
        {
        this->tip=tip;
        this->pret=5;
        this->nrmin=-999;
        this->id=10;
        }
    }

    ~Abonament(){ cout<<"Tip abonament sters"<<"\n"; } //Destructor

    void Afisare_abonament(){ cout<<"Tip:"<<tip<<"   Pret:"<<pret<<"   Nr. minute:"<<nrmin<<"\n"; }

    void set_tip(char n);
    void set_pret(int n);
    void set_nrmin(int n);
    void set_id(int n);

    char get_tip();
    int get_pret();
    int get_nrmin();
    int get_id();

    friend Abonament operator-(Abonament op1,int n);
    friend Abonament operator+(Abonament op1,int n);
    Abonament operator++();
    Abonament operator++(int dummy);
    Abonament operator--();
    Abonament operator--(int dummy);
    Abonament operator=(Abonament ob1);

    virtual void show_id() const{ cout<<id<<endl;}
    void show_id1() const{ cout<<id<<endl;}


private:
    char tip;          //      S-Employee  | A-Premium | B-Fancy | C-Normal |
    int pret,nrmin;    //pret-      5      |     30    |    10   |     5    |
    int id;            //nrmin-    -n-     |     500   |    200  |     100  |
};                     // nrminute|-900|

Telekom Telekom::operator++()                                       //Supraincarcari Telekom
{
    nrang++;
    return *this;
}
Telekom Telekom::operator++(int dummy)
{
    nrang++;
    return *this;
}
Telekom Telekom::operator=(Telekom ob1)
{
    strcpy(locatie,ob1.locatie);
    nrang=ob1.nrang;
    id=ob1.nrang;
}

char Telekom::get_locatie(){ return *locatie; }                     //getteri
int Telekom::get_nrang(){ return nrang; }
int Telekom::get_id(){ return id; }

void Telekom::set_loc(char n[20]){ strcpy(locatie,n); }             //setteri
void Telekom::set_nrang(int nr){ nrang=nr; }
void Telekom::set_id(int n){ id=n; }


Client operator+(Client op1, char op2[20])                            //supraincarcari Client
{
    Client temp;
    int k=strlen(op1.nume),k1=strlen(op2);
    for(int i=k;i<=k+k1;i++)
        op1.nume[i]=op2[i-k];
    strcpy(temp.nume,op1.nume);
    strcpy(temp.prenume,op1.prenume);
    strcpy(temp.cnp,op1.cnp);
    strcpy(temp.nrtel,op1.nrtel);
    strcpy(temp.adresa,op1.adresa);
    temp.varsta=op1.varsta;
    temp.id=op1.id;
    return temp;
}
Client operator+(char op1[20], Client op2)
{
    Client temp;
    int k=strlen(op1),k1=strlen(op2.nume);
    for(int i=k;i<=k+k1;i++)
        op1[i]=op2.nume[i-k];
    strcpy(temp.nume,op1);
    strcpy(temp.prenume,op2.prenume);
    strcpy(temp.cnp,op2.cnp);
    strcpy(temp.nrtel,op2.nrtel);
    strcpy(temp.adresa,op2.adresa);
    temp.varsta=op2.varsta;
    temp.id=op2.id;
    return temp;
}
Client operator+(Client op1, Client op2)
{
    Client temp;
    int k=strlen(op1.nume),k1=strlen(op2.nume);
    for(int i=k;i<=k+k1;i++)
        op1.nume[i]=op2.nume[i-k];
    strcpy(temp.nume,op1.nume);
    strcpy(temp.prenume,op1.prenume);
    strcpy(temp.cnp,op1.cnp);
    strcpy(temp.nrtel,op1.nrtel);
    strcpy(temp.adresa,op1.adresa);
    temp.varsta=op1.varsta;
    temp.id=op1.id;
    return temp;
}
Client operator-(Client op1, int n)
{
    Client temp;
    strncpy(temp.nume,op1.nume,n);
    int k=strlen(temp.nume);
    temp.nume[k]='\0';
    strcpy(temp.prenume,op1.prenume);
    strcpy(temp.cnp,op1.cnp);
    strcpy(temp.nrtel,op1.nrtel);
    strcpy(temp.adresa,op1.adresa);
    temp.varsta=op1.varsta;
    temp.id=op1.id;
    return temp;
}
Client Client::operator=(Client ob1)
{
    strcpy(nume,ob1.nume);
    strcpy(prenume,ob1.prenume);
    strcpy(cnp,ob1.cnp);
    strcpy(nrtel,ob1.nrtel);
    strcpy(adresa,ob1.adresa);
    varsta=ob1.varsta;
    id=ob1.id;
}

void Client::set_nume(char n[20]){ strcpy(nume,n); }                    //setter
void Client::set_prenume(char n[20]){ strcpy(prenume,n); }
void Client::set_cnp(char n[20]){ strcpy(cnp,n); }
void Client::set_nrtel(char n[20]){ strcpy(nrtel,n); }
void Client::set_adresa(char n[20]){ strcpy(adresa,n); }
void Client::set_varsta(int n){ varsta=n; }
void Client::set_id(int n){ id=n; }

char Client::get_nume(){ return *nume; }                                //getter
char Client::get_prenume(){ return *prenume; }
char Client::get_cnp(){ return *cnp; }
char Client::get_nrtel(){ return *nrtel; }
char Client::get_adresa(){ return *adresa; }
int Client::get_varsta(){ return varsta; }
int Client::get_id(){ return id; }

Angajat operator+(Angajat op1, int n)                                   //supraincarcari Angajat
{
    Angajat temp;
    temp.salariu=op1.salariu+n;
    temp.varsta=op1.varsta;
    strcpy(temp.adresa,op1.adresa);
    strcpy(temp.cnp,op1.cnp);
    strcpy(temp.nrtel,op1.nrtel);
    strcpy(temp.nume,op1.nume);
    strcpy(temp.prenume,op1.prenume);
    temp.id=op1.id;
    return temp;
}
Angajat operator-(Angajat op1, int n)
{
    Angajat temp;
    temp.salariu=op1.salariu-n;
    temp.varsta=op1.varsta;
    strcpy(temp.adresa,op1.adresa);
    strcpy(temp.cnp,op1.cnp);
    strcpy(temp.nrtel,op1.nrtel);
    strcpy(temp.nume,op1.nume);
    strcpy(temp.prenume,op1.prenume);
    temp.id=op1.id;
    return temp;
}
Angajat Angajat::operator=(Angajat ob1)
{
    salariu=ob1.salariu;
    varsta=ob1.varsta;
    strcpy(adresa,ob1.adresa);
    strcpy(cnp,ob1.cnp);
    strcpy(nrtel,ob1.nrtel);
    strcpy(nume,ob1.nume);
    strcpy(prenume,ob1.prenume);
    id=ob1.id;
}

void Angajat::set_nume(char n[20]){ strcpy(nume,n); }           //setter
void Angajat::set_prenume(char n[20]){ strcpy(prenume,n); }
void Angajat::set_cnp(char n[20]){ strcpy(cnp,n); }
void Angajat::set_nrtel(char n[20]){ strcpy(nrtel,n); }
void Angajat::set_adresa(char n[20]){ strcpy(adresa,n); }
void Angajat::set_varsta(int n){ varsta=n; }
void Angajat::set_salariu(int n){ salariu=n; }
void Angajat::set_id(int n){ id=n; }

char Angajat::get_nume(){ return *nume; }                       //getter
char Angajat::get_prenume(){ return *prenume; }
char Angajat::get_cnp(){ return *cnp; }
char Angajat::get_nrtel(){ return *nrtel; }
char Angajat::get_adresa(){ return *adresa; }
int Angajat::get_varsta(){ return varsta; }
int Angajat::get_salariu(){ return salariu; }
int Angajat::get_id(){ return id; }

Abonament operator+(Abonament op1, int n)                       //supraincarcari Abonament
{
    Abonament temp;
    if(op1.nrmin!=-999)
    temp.nrmin=op1.nrmin+n;
    else
        temp.nrmin=op1.nrmin;
    temp.pret=op1.pret;
    temp.tip=op1.tip;
    temp.id=op1.id;
    return temp;
}
Abonament operator-(Abonament op1, int n)
{
    Abonament temp;
    if(op1.nrmin!=-999)
    temp.nrmin=op1.nrmin-n;
    else
        temp.nrmin=op1.nrmin;
    temp.pret=op1.pret;
    temp.tip=op1.tip;
    temp.id=op1.id;
    return temp;
}
Abonament Abonament::operator++()
{
    nrmin++;
    return *this;
}
Abonament Abonament::operator++(int dummy)
{
    nrmin++;
    return *this;
}
Abonament Abonament::operator--()
{
    nrmin--;
    return *this;
}
Abonament Abonament::operator--(int dummy)
{
    nrmin--;
    return *this;
}
Abonament Abonament::operator=(Abonament ob1)
{
    tip=ob1.tip;
    nrmin=ob1.nrmin;
    pret=ob1.pret;
}

void Abonament::set_tip(char n){ tip=n; }                       //setteri
void Abonament::set_nrmin(int n){ nrmin=n; }
void Abonament::set_pret(int n){ pret=n; }
void Abonament::set_id(int n){ id=n; }

char Abonament::get_tip(){ return tip; }                        //getteri
int Abonament::get_nrmin(){ return nrmin; }
int Abonament::get_pret(){ return pret; }
int Abonament::get_id(){ return id; }

void apelare(Telekom& i){ i.show_id(); }
void apelare1(Telekom& i){ i.show_id1(); }


void creaza_Telekom(int i)
{
    Telekom ob;
}

void creaza_Angajat(int i)
{
    Angajat ob;
}

void creaza_Client(int i)
{
    Client ob;
}

void creaza_Abonament(int i)
{
    Abonament ob;
}

int main()
{

//Exemple de utilizare ale functiilor

    /*
    Angajat ex;
    Angajat ex1;

    apelare(ex);   //-> se afiseaza id-ul de la Angajat
    apelare1(ex1); //upcasting->se afiseaza id-ul de la Telekom

    //downcast:

    Telekom* a=new Angajat;

    Angajat* b=dynamic_cast<Angajat*>(a);
    Client* c=dynamic_cast<Client*>(a);
    cout<<"a: "<<a<<"\n";
    cout<<"b: "<<b<<"\n";
    cout<<"c: "<<c<<"\n";
*/

/*
    Abonament a('A'),b('S');
    a.Afisare_abonament();
    a=a+1;
    a++;
    ++a;
    a.Afisare_abonament();
    a=b;
    a.Afisare_abonament();
    Client c("a","a","a","a","a",10,10);
    c.Afisare_client();

    c=c+"ana";

    c.Afisare_client();

    c.Sterge_nume();

    c.Afisare_client();
    c.set_adresa("undeva");
    c.Afisare_client();
    Angajat j("a","a","a","a","a",10,3000,40);
    j.Afisare_angajat();
    Telekom t("a");
    ++t;
    t++;
    t.set_loc("altundeva");
    t.Afisare_magazin();
    cout<<c.get_cnp()<<endl;

*/

//meniu


    int i;
    cout<<"1 pentru crea o clasa Telekom \n2 pentru a crea o clasa Client \n3 pentru a crea o clasa Angajat \n4 pentru a crea o clasa Abonament \n0 pentru a iesi din meniul de creare\n";
    try{
    cin>>i;
    while(i!=0)
    {
    if(i!=0&&i!=1&&i!=2&&i!=3&&i!=4)
        throw 57 ;
    switch(i)
{
    case 1:
        creaza_Telekom(i);
        cin>>i;
        break;
    case 2:
        creaza_Client(i);
        cin>>i;
        break;
    case 3:
        creaza_Angajat(i);
        cin>>i;
        break;
    case 4:
        creaza_Abonament(i);
        cin>>i;
        break;
    default:
        cin>>i;
}
    }
    }
    catch(int err)
    {
        if(err==57)
            cout<<"Numar nepermis introdus";
    }

    return 0;
}
