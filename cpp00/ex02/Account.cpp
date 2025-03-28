#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void)
{
    std::time_t rawtime;
    std::tm* timeinfo;
    char buffer [80];

    std::time(&rawtime);
    timeinfo = std::localtime(&rawtime);

    std::strftime(buffer,80,"%Y%m%d_%H%M%S",timeinfo);

    std::cout << "[" << buffer << "] ";
}

Account::Account(){}

Account::Account(int initial_deposit)
{
    this->_accountIndex = 0;
    _displayTimestamp();
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_accountIndex = _nbAccounts;
    _nbAccounts++;
    this->_nbWithdrawals = 0;
    _totalAmount += _amount;
    std::cout << "index:"<< this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

void Account::displayAccountsInfos(void )
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits;
    std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount;
    std::cout << ";deposits:" << _nbDeposits;
    std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";p_amount:" <<_amount;
    std::cout << ";deposit:" << deposit;
    _amount += deposit;
    _totalAmount += deposit;
    std::cout << ";amount:" <<_amount;
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";p_amount:" <<_amount;
    std::cout << ";withdrawal:";
    if (withdrawal > _amount)
    {
        std::cout << "refused" << std::endl;
        return false;
    }
    _amount = _amount - withdrawal;
    _totalAmount -= withdrawal;
    std::cout << withdrawal;
    std::cout << ";amount:" << _amount;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout << ";nb_withdrawls:" << _nbWithdrawals << std::endl;
    return true;
}


Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:"<< _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
    return _nbAccounts;
}
int	Account::getTotalAmount( void )
{
    return _totalAmount;
}
int	Account::getNbDeposits( void )
{
    return _totalNbDeposits;
}
int	Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}