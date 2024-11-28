#include "fireXML.h"

int main()
{
	XMLDoc* doc = LoadDocument("test.xml");
	XMLNode* root = GetDocRoot(doc);

	std::cout << root->tag->value << ": " << root->innerText->value << std::endl;

	for (auto attrib : root->attributes)
	{
		std::cout << attrib->name->value << '(' << attrib->name->length << ')'
			<< '='
			<< attrib->value->value << '(' << attrib->value->length << ')' << '\n';
	}

	return 0;
}