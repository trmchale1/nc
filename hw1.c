#include <stdio.h>
#include <string.h>
struct transaction {
	char type;
	char item[21];
	int cust_num;
	int trans_num;
	int price;
	int quantity;
};

int main(int argc, char **argv)
{
	FILE *f;
	char buf1;
	char buf2[21];
	int buf3, buf4, buf5,buf6;
	f = fopen("transactions.txt","r");

	struct transaction first;
/*
	fscanf((FILE*)f,"%c\n",&buf1);
	first.type = buf1;
	printf("%c\n", first.type);
	fscanf((FILE*)f,"%s\n",buf2);
//	printf("%p\n",&buf2);
	strcpy(first.item,buf2);	
	printf("%s\n",first.item);
	fscanf((FILE*)f,"%d\n",&buf3);
	first.cust_num = buf3;
	printf("%d\n",first.cust_num);
*/

	// io works, needs tests for Order/Payment
	while(fscanf((FILE*)f,"%c\n",&buf1) != EOF){
		first.type = buf1;
		printf("%c\n", first.type);
		
		fscanf((FILE*)f,"%s\n",buf2);
		strcpy(first.item,buf2);
		printf("%s\n",first.item);
		
		fscanf((FILE*)f,"%d\n",&buf3);
		first.cust_num = buf3;
		printf("%d\n",first.cust_num);
		
		fscanf((FILE*)f,"%d\n",&buf4);
		first.trans_num = buf4;
		printf("%d\n",first.trans_num);
		
		fscanf((FILE*)f,"%d\n",&buf5);
                first.price = buf5;
                printf("%d\n",first.price);

		fscanf((FILE*)f,"%d\n",&buf6);
                first.quantity = buf6;
                printf("%d\n",first.quantity); 	
	}	

	return 0;

}
/*
struct transaction *trans_create(char type, char *item, int trans_num, int price, int quanity)
{
	
}
*/
