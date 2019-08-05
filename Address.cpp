#include "Address.h"

Address::Address(std::string host, std::string port)
{
	this->host = host;
	this->port = port;
	this->fullAddr = host + ":" + port;
}

std::string Address::GetFullAddr()
{
	return this->fullAddr;
}

std::string Address::GetHost()
{
	return this->host;
}

std::string Address::GetPort()
{
	return this->port;
}
