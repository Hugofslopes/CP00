/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:56:28 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/13 17:16:02 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

#include <iostream>

#include <ctime>

#include <vector>
#include <algorithm>
#include <functional>

# define RESET  "\033[0m"
# define GREEN  "\033[32m"
# define RED    "\033[31m"
#define BLUE   "\033[34m"
# define BOLD   "\033[1m"

class Account {

	public:
		typedef Account		t;

		static int	getNbAccounts( void );
		static int	getTotalAmount( void );
		static int	getNbDeposits( void );
		static int	getNbWithdrawals( void );
		static void	displayAccountsInfos( void );

		Account( int initial_deposit );
		~Account( void );

		void	makeDeposit( int deposit );
		bool	makeWithdrawal( int withdrawal );
		int		checkAmount( void ) const;
		void	displayStatus( void ) const;

	private:
		static int	_nbAccounts;
		static int	_totalAmount;
		static int	_totalNbDeposits;
		static int	_totalNbWithdrawals;

		static void	_displayTimestamp( void );

		int				_accountIndex;
		int				_amount;
		int				_nbDeposits;
		int				_nbWithdrawals;

		Account( void );

	};
#endif
