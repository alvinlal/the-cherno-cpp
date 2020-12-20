#include<iostream>

static int s_level = 1;
static int s_speed = 2;


int main() {
	s_speed = s_level > 5 ? 10 : 5;
}