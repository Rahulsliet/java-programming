#include <stdio.h>
#include <string.h>
struct stu
{
    int roll;
    char name[20];
};
int main()
{
    struct stu s = {10, "pankaj"};
    printf(s);
}