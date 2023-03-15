#include <stdio.h>

typedef char info[64];

typedef struct
{
    long long int id;
    info full_name;
    info email;
    info password;
} User;


int main(int argc, char const *argv[])
{
    // equivalent to type aliass
    User u1 = {1, "John Doe", "john.doe@gmail.com", "johndoe123"};
    printf(
        "User ID: %lld\nFull Name: %s\nEmail: %s\nPassword: %s\n", 
        u1.id, u1.full_name, u1.email, u1.password
    );
    return 0;
}
