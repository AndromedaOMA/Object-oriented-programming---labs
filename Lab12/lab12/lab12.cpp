#include <iostream>
#include <vector>

//enum TipContact { Prieten, Cunoscut, Coleg };
//
//class Contact {
//protected:
//    string nume;
//
//public:
//    Contact(const string& nume) : nume(nume) {}
//    virtual ~Contact() {}
//
//    const string& getNume() const {
//        return nume;
//    }
//};
//
//class Prieten : public Contact {
//private:
//    string dataNastere;
//    string numarTelefon;
//    string adresa;
//
//public:
//    Prieten(const string& nume, const string& dataNastere, const string& numarTelefon, const string& adresa)
//        : Contact(nume), dataNastere(dataNastere), numarTelefon(numarTelefon), adresa(adresa) {}
//};
//
//class Cunoscut : public Contact {
//private:
//    string numarTelefon;
//
//public:
//    Cunoscut(const string& nume, const string& numarTelefon)
//        : Contact(nume), numarTelefon(numarTelefon) {}
//};
//
//class Coleg : public Contact {
//private:
//    string numarTelefon;
//    string firma;
//    string adresa;
//
//public:
//    Coleg(const string& nume, const string& numarTelefon, const string& firma, const string& adresa)
//        : Contact(nume), numarTelefon(numarTelefon), firma(firma), adresa(adresa) {}
//};
//
//class Agenda {
//private:
//    vector<Contact*> contacte;
//
//public:
//    Contact* cautaContact(const string& nume) {
//        for (Contact* contact : contacte) {
//            if (contact->getNume() == nume) {
//                return contact;
//            }
//        }
//        return nullptr;
//    }
//
//    vector<Prieten*> getPrieteni() {
//        vector<Prieten*> prieteni;
//        for (Contact* contact : contacte) {
//            if (dynamic_cast<Prieten*>(contact) != nullptr) {
//                prieteni.push_back(dynamic_cast<Prieten*>(contact));
//            }
//        }
//        return prieteni;
//    }
//
//    void stergeContact(const string& nume) {
//        for (auto it = contacte.begin(); it != contacte.end(); ++it) {
//            if ((*it)->getNume() == nume) {
//                delete* it;
//                contacte.erase(it);
//                break;
//            }
//        }
//    }
//
//    void adaugaContact(Contact* contact) {
//        contacte.push_back(contact);
//    }
//};
//
//int main() {
//    Agenda agenda;
//
//    // Adaugare contacte
//    agenda.adaugaContact(new Prieten("John Doe", "01/01/1990", "1234567890", "Adresa 1"));
//    agenda.adaugaContact(new Cunoscut("Jane Smith", "0987654321"));
//    agenda.adaugaContact(new Coleg("Alice Johnson", "9876543210", "Company X", "Adresa 2"));
//
//    // Cautare contact
//    Contact* contact = agenda.cautaContact("John Doe");
//    if (contact != nullptr) {
//        cout << "Contactul " << contact->getNume() << " a fost gasit.\n";
//    }
//    else {
//        cout << "Contactul nu a fost gasit.\n";
//    }
//
//    // Stergere contact
//    agenda.stergeContact("Jane Smith");
//
//    // Afisare lista de prieteni
//    vector<Prieten*> prieteni = agenda.getPrieteni();
//    cout << "Lista de prieteni:\n";
//    for (Prieten* prieten : prieteni) {
//        cout << prieten->getNume() << ", Data nasterii: " << prieten->getDataNastere() << "\n";
//    }
//
//    return 0;
//}

class Contact {
public:
	char* nume = nullptr;
	Contact() {}
	Contact(const char* NUME)
	{
		nume = new char[strlen(NUME) + 1];

		for (int i = 0; i < strlen(NUME); i++)
			nume[i] = NUME[i];
		nume[strlen(NUME)] = '\0';
	};
	~Contact()
	{
		delete[]nume;
	}

};

class Prieten : public Contact {
	char* dataNastere = nullptr, * numarTelefon, * adresa = nullptr;
public:
	Prieten(const char* inputDataNastere, const char* inputNumarTelefon, const char* inputAdresa)
	{
		dataNastere = new char[strlen(inputDataNastere) + 1];
		numarTelefon = new char[strlen(inputNumarTelefon) + 1];
		adresa = new char[strlen(inputAdresa) + 1];


		for (int i = 0; i < strlen(inputDataNastere); i++)
			dataNastere[i] = inputDataNastere[i];
		dataNastere[strlen(inputDataNastere)] = '\0';

		for (int i = 0; i < strlen(inputNumarTelefon); i++)
			numarTelefon[i] = inputNumarTelefon[i];
		numarTelefon[strlen(inputNumarTelefon)] = '\0';

		for (int i = 0; i < strlen(inputAdresa); i++)
			adresa[i] = inputAdresa[i];
		adresa[strlen(inputAdresa)] = '\0';

	}
	~Prieten()
	{
		delete[] dataNastere;
		delete[] numarTelefon;
		delete[] adresa;
	}

	void Print()
	{
		for (int i = 0; i < strlen(dataNastere); i++)
			std::cout << dataNastere[i];
		std::cout << '\n' << numarTelefon << '\n';
		for (int i = 0; i < strlen(adresa); i++)
			std::cout << adresa[i];
		std::cout << '\n';
	}
};

class Cunoscut : public Contact {
public:
	char* numarTelefon;
	Cunoscut(const char* inputNumarTelefon)
	{
		numarTelefon = new char[strlen(inputNumarTelefon) + 1];

		for (int i = 0; i < strlen(inputNumarTelefon); i++)
			numarTelefon[i] = inputNumarTelefon[i];
		numarTelefon[strlen(inputNumarTelefon)] = '\0';
	}

	~Cunoscut()
	{
		delete[] numarTelefon;
	}
};
class Coleg :public Contact {
	char* firma = nullptr, * numarTelefon, * adresa = nullptr;
public:
	Coleg(const char* inputFirma, const char* inputNumarTelefon, const char* inputAdresa)
	{
		firma = new char[strlen(inputFirma) + 1];
		numarTelefon = new char[strlen(inputNumarTelefon) + 1];
		adresa = new char[strlen(inputAdresa) + 1];


		for (int i = 0; i < strlen(inputFirma); i++)
			firma[i] = inputFirma[i];
		firma[strlen(inputFirma)] = '\0';

		for (int i = 0; i < strlen(inputNumarTelefon); i++)
			numarTelefon[i] = inputNumarTelefon[i];
		numarTelefon[strlen(inputNumarTelefon)] = '\0';

		for (int i = 0; i < strlen(inputAdresa); i++)
			adresa[i] = inputAdresa[i];
		adresa[strlen(inputAdresa)] = '\0';

	}
	~Coleg()
	{
		delete[] firma;
		delete[] numarTelefon;
		delete[] adresa;
	}
};

class Agenda {
public:
	std::vector<Contact*> contacte;

	Contact* cautareContactDupaNume(const char* NUME)
	{
		for (Contact* contact : contacte)
		{
			int ok = 1;
			if (strlen(NUME) == strlen(contact->nume))
				for (int i = 0; i < strlen(NUME); i++)
					if (NUME[i] != contact->nume[i])
						ok = 0;
			if (ok)
				return contact;
			return nullptr;
		}
	}

	//lista


	void stergereContact(const char* NUME)
	{
		for (auto it = contacte.begin(); it != contacte.end(); ++it)
		{
			int ok = 1;
			if (strlen(NUME) == strlen((*it)->nume))
				for (int i = 0; i < strlen(NUME); i++)
					if (NUME[i] != (*it)->nume[i])
						ok = 0;

			if (ok)
			{
				delete* it;
				contacte.erase(it);
				break;
			}
		}
	}


	void adaugareContact(Contact* contact)
	{
		contacte.push_back(contact);
	}
};

int main()
{
	Agenda.adaugareContact(new Prieten("John Doe", "01/01/1990", "1234567890", "Adresa 1"));
	Agenda.adaugareContact(new Cunoscut("Jane Smith", "0987654321"));
	Agenda.adaugareContact(new Coleg("Alice Johnson", "9876543210", "Company X", "Adresa 2"));

	return 0;
}