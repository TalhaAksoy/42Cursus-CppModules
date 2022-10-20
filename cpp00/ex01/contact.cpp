//
// Created by Selim talha Aksoy on 10/20/22.
//

#include "contact.h"

void Contact::setFirstName(std::string firstName) {
	this->firstName = firstName;
}

void Contact::setLastName(std::string lastName) {
	this->lastName = lastName;
}

void Contact::setNickName(std::string nickName) {
	this->nickName = nickName;
}

void Contact::setPhoneNumber(std::string phoneNumber) {
	this->phoneNumber = phoneNumber;
}

void Contact::setSecret(std::string secret) {
	this->secret = secret;
}

void Contact::setIndex(int nbr) {
	this->index = nbr;
}

const string &Contact::getFirstName() {
	return firstName;
}

const string &Contact::getLastName() {
	return lastName;
}

const string &Contact::getNickName() {
	return nickName;
}

const string &Contact::getPhoneNumber() {
	return phoneNumber;
}

const string &Contact::getSecret() {
	return secret;
}

const int &Contact::getIndex() {
	return this->index;
}