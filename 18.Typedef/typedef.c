#include<stdio.h>




typedef struct {

	char name[25];
	char password[15];
	int id;

} User;




//typedef char user[25];

int main() {

//char user1[25] = "Mo";
//user user1 = "Mo";



	User user1 = {"maMo", "password123", 123456789};
	User user2 = {"mome", "Password321", 987654321};


	printf("%s\t%s\t%d\n", user1.name, user1.password, user1.id);
	printf("%s\t%s\t%d", user2.name, user2.password, user2.id);



return 0;
}
