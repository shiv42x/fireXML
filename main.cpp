#include "fireXML.h"

int main()
{
	XMLDoc* doc = LoadDocument("test.xml");
	XMLNode* root = GetDocRoot(doc);

	std::cout << "Hello World!\n";
	std::cout << root->tag->value << ": " << root->innerText->value << std::endl;

	return 0;
}