#include <iostream>
#include <vector>

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
	char* dataNastere = nullptr, * numarTelefon = nullptr, * adresa = nullptr;
public:
	Prieten(const char* inputNume, const char* inputDataNastere, const char* inputNumarTelefon, const char* inputAdresa)
	{
		//Contact(inputNume);

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
	//void Print() override
	//{
	//	std::cout << "Nume: " << nume << ", Data Nastere: " << dataNastere << ", Numar Telefon: " << numarTelefon << ", Adresa: " << adresa << std::endl;
	//}
};

class Cunoscut : public Contact {
public:
	char* numarTelefon;
	Cunoscut(const char* inputNume, const char* inputNumarTelefon)
	{
		//Contact(inputNume);

		numarTelefon = new char[strlen(inputNumarTelefon) + 1];

		for (int i = 0; i < strlen(inputNumarTelefon); i++)
			numarTelefon[i] = inputNumarTelefon[i];
		numarTelefon[strlen(inputNumarTelefon)] = '\0';
	}

	~Cunoscut()
	{
		delete[] numarTelefon;
	}
	//void Print() override
	//{
	//	std::cout << "Nume: " << nume << ", Numar Telefon: " << numarTelefon << std::endl;
	//}
};
class Coleg :public Contact {
	char* firma = nullptr, * numarTelefon, * adresa = nullptr;
public:
	Coleg(const char* inputNume, const char* inputFirma, const char* inputNumarTelefon, const char* inputAdresa)
	{
		//Contact(inputNume);

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
	//void Print() override
	//{
	//	std::cout << "Nume: " << nume << ", Firma: " << firma << ", Numar Telefon: " << numarTelefon << ", Adresa: " << adresa << std::endl;
	//}
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
		for (auto it = contacte.begin(); it < contacte.end(); ++it)
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

	//void Afisare() {
	//	for (const auto& contact : contacte) {
	//		contact->Print();
	//	}
	//}
};

int main()
{
	Agenda A;
	A.adaugareContact(new Prieten("Olaru Marius", "01/01/1990", "1234567890", "Adresa 1"));
	A.adaugareContact(new Cunoscut("Will Smith", "0987654321"));
	A.adaugareContact(new Coleg("MJ", "9876543210", "Chicago Bulls", "Adresa 2"));

	//A.Afisare();
	return 0;
}