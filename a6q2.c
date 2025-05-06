#include <stdio.h>
struct element_t
{
    int atomic_n;
    char name[100];
    char symbl[10];
    char class[100];
    double atomic_w;
    int e[7];
};
struct element_t scan_element();
void print_element(struct element_t e);
int main()
{
    struct element_t e = scan_element();
    print_element(e);
}
struct element_t scan_element()
{
    struct element_t e;
    printf("Enter the details=>");
    scanf("%d%s%s%s%lf", &e.atomic_n, &e.name, &e.symbl, &e.class, &e.atomic_w);
    for (int i = 1; i <= 7; i++)
        scanf("%d", &e.e[i]);
    return e;
}
void print_element(struct element_t e)
{
    printf("Details=>");
    printf("%d %s %s %s %lf ", e.atomic_n, e.name, e.symbl, e.class, e.atomic_w);
    for (int i = 1; i <= 7; i++)
        printf("%d ", e.e[i]);
}