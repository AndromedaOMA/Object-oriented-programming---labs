#include <iostream>
#include <cmath>
#include <cstring>
#include "Number.h"

void LL_to_STR(long long int val, char s[])
{
    int dim = 0, st, dr;
    do
    {
        s[dim++] = '0' + val % 10;
        val /= 10;
    } while (val);
    s[dim] = '\0';
    st = 0, dr = dim - 1;
    while (st < dr)
    {
        std::swap(s[st], s[dr]);
        st++;
        dr--;
    }
}

//--
Number::Number(const char* value, int base)
{
    int valid = 1;
    for (int i = 0; i < strlen(value); i++)
    {
        int number;
        if ('0' <= value[i] && value[i] <= '9')
            number = value[i] - '0';
        else
            number = value[i] - 'A' + 10;
        if (number >= base || base <= 1 || base >= 17)
        {
            valid = 0;
            break;
        }
    }
    if (valid == 0)
    {
        //printf("The value does not correspond to the base!");
        std::cout << "The value does not correspond to the base!";
    }
    else
    {
        strcpy(this->Value, value);
        this->Base = base;

        int length = GetDigitsCount();
        long long int decimal = 0;

        for (int i = 0; i < length; i++)
        {
            int number;
            if ('0' <= this->Value[i] && this->Value[i] <= '9')
                number = this->Value[i] - '0';
            else
                number = this->Value[i] - 'A' + 10;
            long long int p = 1;
            for (int k = 1; k <= length - i - 1; k++)
                p = p * this->Base;
            //decimal += number * pow(this->Base, length - i - 1);
            decimal += number * p;
        }

        this->decimalValue = decimal;
    }
}
//--
Number::Number(long long int value)
{
    this->Base = 10;
    this->decimalValue = value;
    char convert[25];
    std::sprintf(convert, "%d", value);
    //LL_to_STR(value, convert);
    strcpy(this->Value, convert);
}
//--
Number::Number(const char* value)
{
    this->Base = 10;
    this->decimalValue = atoll(value);
    strcpy(this->Value, value);
    //printf("$%s$", this->Value);
    //printf("$%s$", value);
    //printf("$%d$", this->decimalValue);
}
//Copy constructor ???
Number::Number(const Number& value)
{
    this->Base = value.Base;
    this->decimalValue = value.decimalValue;
    strcpy(this->Value, value.Value);
}
//--
Number::~Number()
{

}
//--
char Number::operator [] (const int i)
{
    return this->Value[i];
}
//--
Number Number::operator + (const Number& t)
{
    Number sum(decimalValue + t.decimalValue);
    return sum;
}
//--
Number Number::operator - (const Number& t)
{
    Number dif(decimalValue - t.decimalValue);
    return dif;
}
bool Number::operator == (const Number& t)
{
    if (this->decimalValue == t.decimalValue)
        return true;
    return false;
}
bool Number::operator > (const Number& t)
{
    if (this->decimalValue > t.decimalValue)
        return true;
    return false;
}
bool Number::operator >= (const Number& t)
{
    if (this->decimalValue >= t.decimalValue)
        return true;
    return false;
}
bool Number::operator < (const Number& t)
{
    if (this->decimalValue < t.decimalValue)
        return true;
    return false;
}
bool Number::operator <= (const Number& t)
{
    if (this->decimalValue <= t.decimalValue)
        return true;
    return false;
}
//--
Number& Number::operator = (long long int value) // move assignment (atribuire)
{
    this->decimalValue = value;
    this->Base = 10;
    char convert[25];
    std::sprintf(convert, "%d", value);
    //LL_to_STR(value, convert);
    strcpy(this->Value, convert);
    return (*this);
}
//--
bool operator += (Number& t, Number value)
{
    t.decimalValue += value.decimalValue;
    //char convert[25];
    Number aux(t.decimalValue);
    aux.SwitchBase(t.Base);
    //std::sprintf(convert, "%d", t.decimalValue);
    //LL_to_STR(i.decimalValue, convert);
    strcpy(t.Value, aux.Value);
    return true;
}

bool Number::operator -- ()
{
    //scrisa pentru baza 10 (ca in cerinta)
    long long int ten = 1;
    while (ten * 10 <= decimalValue)
        ten *= 10;
    this->decimalValue = this->decimalValue % ten;
    char convert[25];
    std::sprintf(convert, "%lld", this->decimalValue);
    //LL_to_STR(this->decimalValue, convert);
    strcpy(this->Value, convert);
    return true;
}
//--
bool Number::operator -- (int value)
{
    //scrisa pentru baza 10 (ca in cerinta)
    this->decimalValue /= 10;
    char convert[25];
    std::sprintf(convert, "%d", this->decimalValue);
    //LL_to_STR(this->decimalValue, convert);
    strcpy(this->Value, convert);

    return true;
}

//--
void Number::SwitchBase(int newBase)
{
    int length = GetDigitsCount();
    long long decimal = 0;
    char* result = new char[100];

    for (int i = 0; i < length; i++)
    {
        int number;
        if ('0' <= this->Value[i] && this->Value[i] <= '9')
            number = this->Value[i] - '0';
        else
            number = this->Value[i] - 'A' + 10;
        decimal += number * pow(this->Base, length - i - 1);
    }

    this->decimalValue = decimal;
    this->Base = newBase;

    length = 0;
    while (decimal > 0)
    {
        char character;
        if (0 <= decimal % newBase && decimal % newBase <= 9)
            character = (char)(decimal % newBase + '0');
        else
            character = (char)(decimal % newBase + 10 - 'A');
        result[length++] = character;
        decimal /= newBase;
    }
    result[length++] = '\0';

    int dim = 0;
    for (int i = strlen(result) - 1; i >= 0; i--)
        this->Value[dim++] = result[i];
    this->Value[dim] = '\0';
}
//--
void Number::Print()
{
    //printf("Value: ");
    std::cout << "Value: ";
    for (int i = 0; i < GetDigitsCount(); i++)
    {
        //printf("%c", operator [](i));
        std::cout << operator [](i);
    }
    //printf("\n");
    std::cout << "\n";
    //printf("Base: %d", this->Base);
    std::cout << "Base: " << this->Base;
    //printf("\n");
    std::cout << "\n";
    //printf("Decimal: %lld", this->decimalValue);
    std::cout << "Decimal: " << this->decimalValue;
    //printf("\n\n");
    std::cout << "\n\n";
}
//--
int  Number::GetDigitsCount()
{
    return strlen(this->Value);
}
//--
int  Number::GetBase()
{
    return this->Base;
}
