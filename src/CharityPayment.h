/*
 * Copyright (c) 2019 The resq Core developers
 * Copyright (c) 2019 The Bitcoin Monster Core developers
 * Distributed under the MIT software license, see the accompanying
 * file COPYING or http://www.opensource.org/licenses/mit-license.php.
 *
 * CharityPayment.h
 *
 *  Created on: Jun 24, 2018
 *      Author: Tri Nguyen
 */

#ifndef SRC_CHARITYPAYMENT_H_
#define SRC_CHARITYPAYMENT_H_
#include <string>
#include "amount.h"
#include "primitives/transaction.h"
#include "base58.h"
using namespace std;

static const char* DEFAULT_CHARITY_ADDRESS = "KYHu7aLFaeU5Pf4UVh8vTSrd9oGKoDAAaK";

class CharityPayment {
public:
	CharityPayment(const char* address = DEFAULT_CHARITY_ADDRESS) {
		charityAddress.SetString(address);
	}
	~CharityPayment(){};
	CAmount getCharityPaymentAmount(int blockHeight, CAmount blockReward);
	void FillCharityPayment(CMutableTransaction& txNew, int nBlockHeight, CAmount blockReward, CTxOut& txoutCharityRet);
	bool IsBlockPayeeValid(const CTransaction& txNew, const int height, const CAmount blockReward);
private:
	CBitcoinAddress charityAddress;
};



#endif /* SRC_CHARITYPAYMENT_H_ */
