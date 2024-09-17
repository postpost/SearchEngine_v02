#include "Crawler.h"
#include "Indexer.h"
#include "IniParser.h"
#include <string>
#include <unordered_set>
#include <vector>


#include <boost/locale.hpp>
#include <boost/algorithm/string/case_conv.hpp>
#include <boost/system/error_code.hpp>
#include <iostream>

#include <Windows.h>
#pragma execution_character_set("utf-8")

using namespace boost::locale;

int main(int argc, char* argv[]) {
	
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	std::string iniFileName = "config.ini";

	//Crawler
	Crawler crawler (iniFileName);

	return 0;
}