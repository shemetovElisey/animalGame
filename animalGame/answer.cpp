#include "answer.h"

Answer::Answer(std::string _text)
	: text(_text) {}

NodeType Answer::getType() {
	return NodeType::Answer;
}

std::string Answer::getText() {
	return text;
}