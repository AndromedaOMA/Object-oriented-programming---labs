#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <sstream>
#include <queue>

int main()
{
	std::ifstream f("Text.in");
	std::string str = "", ch;
	while (f >> ch)
	{
		str += ch;
		str += ' ';
	}
	std::cout << str << '\n';
	f.close();
	std::cout << '\n';

	//--------------------------

	std::string ma[100][100], word = "", strPrim = "";
	int index = 0;
	for (auto c : str)
	{
		if (isalpha(c))
			word += tolower(c);
		else
			if ((c == ' ' || c == ',' || c == '?' || c == '!' || c == '.') && word != "")
			{
				strPrim += word;
				strPrim += ' ';
				word = "";
			}
	}
	std::cout << strPrim << '\n';

	std::cout << '\n';

	//--------------------------

	std::map<std::string, int> MAP;
	std::stringstream n(strPrim);
	word = "";
	while (n >> word)
	{
		auto aux = MAP.find(word);
		if (aux != MAP.end())
			aux->second++;
		else
			MAP[word] = 1;
	}
	for (const auto& pair : MAP)
		std::cout << pair.first << ':' << pair.second << '\n';
	std::cout << '\n';

	//--------------------------

	//std::map<std::string, int>::iterator it;
	//std::priority_queue<std::string, int> s;
	//for (it = MAP.begin();it != MAP.end(); it++)
	//{

	//}
/*
	std::vector<std::pair<std::string, int>> vec(MAP.begin(), MAP.end());
	std::sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) { return a.second > b.second; });
	
	///std::priority_queue<
	///		T,               // tipul elementelor din coada
	///		Container,       // containerul subiacent utilizat pentru stocare
	///		Compare          // functia comparator pentru sortare (optional)
	///> pq;
	
	std::priority_queue<std::pair<std::string, int>, std::vector<std::pair<std::string, int>>, std::greater<>> pq(vec.begin(), vec.end());
	while (!pq.empty()) {
		std::pair<std::string, int> top_element = pq.top();
		std::string key = top_element.first;
		int val = top_element.second;
		std::cout << key << ':' << val << std::endl;
		pq.pop();
	}
	std::cout << '\n';
	*/



	struct
	{
		bool operator() (const std::pair<std::string, int> l, const std::pair<std::string, int> r) const {
			if (l.second == r.second)
			{
				return l.first > r.first;
			}

			return l.second < r.second;
		}
	} comparator;


	std::priority_queue<std::pair<std::string, int>, std::vector<std::pair<std::string, int>>, decltype(comparator)> pq{};
	for (auto& it : MAP)
	{
		pq.push(it);
	}


	while (!pq.empty()) {
		auto& top_element = pq.top();
		auto& key = top_element.first;
		int val = top_element.second;
		std::cout << key << ':' << val << std::endl;
		pq.pop();
	}

	std::cout << '\n';



	return 0;
}