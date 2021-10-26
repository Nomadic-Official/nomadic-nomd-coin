// Copyright (c) 2020 The PIVX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef NOMADIC_LEGACY_ZPOS_H
#define NOMADIC_LEGACY_ZPOS_H

#include "stakeinput.h"
#include "txdb.h"

class CLegacyZNomdStake : public CStakeInput
{
private:
    uint32_t nChecksum;
    libzerocoin::CoinDenomination denom;
    uint256 hashSerial;

public:
    CLegacyZNomdStake() : CStakeInput(nullptr) {}

    explicit CLegacyZNomdStake(const libzerocoin::CoinSpend& spend);
    bool InitFromTxIn(const CTxIn& txin) override;
    bool IsZNOMD() const override { return true; }
    uint32_t GetChecksum() const { return nChecksum; }
    const CBlockIndex* GetIndexFrom() const override;
    CAmount GetValue() const override;
    CDataStream GetUniqueness() const override;
    bool CreateTxIn(CWallet* pwallet, CTxIn& txIn, uint256 hashTxOut = UINT256_ZERO) override { return false; /* creation disabled */}
    bool CreateTxOuts(CWallet* pwallet, std::vector<CTxOut>& vout, CAmount nTotal, const bool onlyP2PK) override { return false; /* creation disabled */}
    bool GetTxOutFrom(CTxOut& out) const override { return false; /* not available */ }
    virtual bool ContextCheck(int nHeight, uint32_t nTime) override;
};

#endif //NOMADIC_LEGACY_ZPOS_H
