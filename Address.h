#pragma once

#include <string>

class Address {
public:
	Address(std::string host, std::string port);

	std::string GetFullAddr();
	std::string GetHost();
	std::string GetPort();
private:
	std::string fullAddr;
	std::string host;
	std::string port;
};