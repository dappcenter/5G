// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2018 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_KEY_IO_H
#define BITCOIN_KEY_IO_H

#include <chainparams.h>
#include <key.h>
#include <pubkey.h>
#include <script/standard.h>

#include <string>

CKey DecodeSecret(const std::string& str);
std::string EncodeSecret(const CKey& key);

CExtKey DecodeExtKey(const std::string& str);
std::string EncodeExtKey(const CExtKey& extkey);
CExtPubKey DecodeExtPubKey(const std::string& str);
std::string EncodeExtPubKey(const CExtPubKey& extpubkey);

std::string EncodeDestination(const CTxDestination& dest);
CTxDestination DecodeDestination(const std::string& str);
bool IsValidDestinationString(const std::string& str);
bool IsValidDestinationString(const std::string& str, const CChainParams& params);

class C5GAddress {

public:
    bool Set(const CKeyID &id);
    bool Set(const CScriptID &id);
    bool Set(const CTxDestination &dest);
    bool IsValid() const;
    bool IsValid(const CChainParams &params) const;

    C5GAddress();
    C5GAddress(const CTxDestination &dest);
    C5GAddress(const std::string& strAddress);
    C5GAddress(const char* pszAddress);

    CTxDestination Get() const;
    bool GetKeyID(CKeyID &keyID) const;
    bool GetIndexKey(uint160& hashBytes, int& type) const;
    bool IsScript() const;
    std::string ToString() const;

    bool operator==(const C5GAddress &rhs) const;
    bool operator!=(const C5GAddress &rhs) const;
    bool operator<(const C5GAddress &rhs) const;

private:
    CTxDestination txDest;
};

#endif // BITCOIN_KEY_IO_H
