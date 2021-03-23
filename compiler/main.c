// Varun Chaudhari

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "external.h"


int main(int argc, char *argv[]) {

	lexicalAnalyzer();

	parse();

	vm();
  
}
