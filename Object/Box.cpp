/*
** EPITECH PROJECT, 2017
** Piscine CPP
** File description:
** Box.cpp
*/

#include "Box.h"

Box::Box() {
	type = BOX;
}

Box::~Box() = default;

bool Box::isOpen() {
	return (open);
}

void Box::wrapMeThat(Object *object) {
	if(open && content == nullptr) {
		content = object;
	}
}