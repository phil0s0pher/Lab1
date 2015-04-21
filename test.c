#include "test.h"
#include "functions.h"


int main()
{
	test_replace_ext();
	test_delete_ext();
	test_is_a_file();
	test_trans_opcode();
	return 0;
}

void test_replace_ext()
{
	char file[7]="men.amt";
	char file2[7]="men.stf";
	
	printf("\nTest replace_ext\n");
	
	printf("Test 1\n");
	replace_ext(file, ".txt");
	assert(strcmp(file,"men.txt"));
	
	printf("test 2\n");
	replace_ext(file2, ".ast");
	assert(strcmp(file2,"men.ast "));
	
	printf("All Tests Passed\n\n");
}

void test_delete_ext()
{
	char file3[]="file.txt";
	
	printf("Test delete_ext\n");
	
	printf("Test 1\n");
	delete_ext(file3);
	assert(strcmp(file3,"file    "));
	
	printf("All Tests Passed\n\n");
}

void test_is_a_file()
{
	char file4[]= "file.txt";
	char file5[]= "file";
	
	printf("Test is_a_file\n");
	
	printf("Test 1\n");
	assert(is_a_file(file4)==1);
	
	printf("Test 2\n");
	assert(is_a_file(file5)==0);
	
	printf("All Tests Passed\n\n");
}

void test_trans_opcode()
{
	char op1[3]="NOP";
	char op2[2]="OR";
	char op3[3]="DDD";
	
	printf("Test trans_opcode\n");
	
	printf("Test 1\n");
	assert(strcmp(trans_opcode(op1),"00 00"));

	printf("Test 2\n");
	assert(strcmp(trans_opcode(op2),"75 3F"));

	printf("Test 3\n");
	assert(strcmp(trans_opcode(op3),"DDD"));

	printf("All Tests Passed\n\n");
}