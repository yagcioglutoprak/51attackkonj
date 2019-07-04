/*
 * Copyright (c) 2019 The resq Core developers
 * Copyright (c) 2019 The Bitcoin Monster Core developers
 * Distributed under the MIT software license, see the accompanying
 * file COPYING or http://www.opensource.org/licenses/mit-license.php.
 *
 * CharityPayment.cpp
 *
 *  Created on: Jun 24, 2018
 *      Author: Tri Nguyen
 */

#include "CharityPayment.h"
//#include "standard.h";
#include "util.h"
#include "chainparams.h"
#include <boost/foreach.hpp>

CAmount CharityPayment::getCharityPaymentAmount(int blockHeight, CAmount blockReward) {
	 if (blockHeight < 1){
		 return 0;
	 }
	 return blockReward * 0.25;
}

void CharityPayment::FillCharityPayment(CMutableTransaction& txNew, int nBlockHeight, CAmount blockReward, CTxOut& txoutCharityRet) {
    // make sure it's not filled yet
	txoutCharityRet = CTxOut();

    CScript payee;
    // fill payee with the charity address
    payee = GetScriptForDestination(charityAddress.Get());

    // GET CHARITY PAYMENT VARIABLES SETUP
    CAmount charityPayment = getCharityPaymentAmount(nBlockHeight, blockReward);
    // split reward between miner ...
    txNew.vout[0].nValue -= charityPayment;
    // ... and masternode
    txoutCharityRet = CTxOut(charityPayment, payee);
    txNew.vout.push_back(txoutCharityRet);
    LogPrintf("CMasternodePayments::FillCharityPayment -- Charity payment %lld to %s\n", charityPayment, charityAddress.ToString());
}

bool CharityPayment::IsBlockPayeeValid(const CTransaction& txNew, const int height, const CAmount blockReward) {
	CScript payee;
	// fill payee with the charity address
	payee = GetScriptForDestination(charityAddress.Get());
	CAmount charityReward = getCharityPaymentAmount(height, blockReward);
	BOOST_FOREACH(const CTxOut& out, txNew.vout) {
		if(out.scriptPubKey == payee && out.nValue >= charityReward) {
			return true;
		}
	}

	return false;
}
