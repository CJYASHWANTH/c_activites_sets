#include <stdio.h>
#include <math.h>

typedef struct point
{
    float x, y;
} Point;
typedef struct polygon
{
    int sides;
    Point p[100];
    float perimeter;
} Polygon;
int input_n()
{
    int n;
    printf("Enter the number of sides of the polygon: ");
    scanf("%d", &n);
    return n;
}
Point input_point(char *prompt_msg)
{
    Point p;
    printf("%s", prompt_msg);
    scanf("%f %f", &p.x, &p.y);
    return p;
}
int input_polygon(Polygon *p)
{
    p->sides = input_n();
    printf("Enter the coordinates of the points:\n");
    for (int i = 0; i < p->sides; i++)
    {
        printf("Enter the coordinates of point %d (x,y):\n", i + 1);
        p->p[i] = input_point("");
    }
    return p->sides;
}
float find_distance(Point a, Point b)
{
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}
void find_perimeter(Polygon *p)
{
    float perimeter = 0.0;
    for (int i = 0; i < p->sides; i++)
    {
        perimeter += find_distance(p->p[i], p->p[(i + 1) % p->sides]);
    }
    p->perimeter = perimeter;
}
void output(Polygon p)
{
    printf("The perimeter of the polygon is %.6f\n", p.perimeter);
}
int main()
{
    Polygon poly;
    input_polygon(&poly);
    find_perimeter(&poly);
    output(poly);
    return 0;
}
