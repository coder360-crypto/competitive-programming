#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

struct student{
    char name[256];
    char height[20];
};

float checkRealNumber(char height[]);

int main(){
    int n;
	float height_in_m[100];;
    printf("Enter number of students : ");
    scanf("%d", &n);

    struct student s[100];
	float y, z;
	y= 9999999999999999;
	z= -99999999999999999;

    for(int i = 1; i<=n; i++){
        printf("Enter Student %d's name : ", i);
        fflush(stdin);
        gets(s[i].name);
        printf("Enter Student %d's height : ", i);
        fflush(stdin);
        gets(s[i].height);
		float x;
        x = checkRealNumber(s[i].height);
		height_in_m[i] = x;

		if(y > height_in_m[i]){
			y = height_in_m[i]; // for finding minimum height
		}

		if(z < height_in_m[i]){
			z = height_in_m[i]; // for finding maximum height
		}
    }
     printf("%f\n",z);
	printf("Student with the MINIMUM height is(are) : \n");
	for(int i = 1; i<=n; i++){
		if(y == height_in_m[i]){
			printf("%d) %s having height %s\n", i, s[i].name, s[i].height);
		}
	}

	printf("Student with the MAXIMUM height is(are) : \n");
	for(int i = 1; i<=n; i++){
		if(z == height_in_m[i]){
			printf("%d) %s having height %s\n", i, s[i].name, s[i].height);
		}
	}
    return 0;
}

float checkRealNumber(char height[]){
    int l = strlen(height);

    if(height[l-1] == 'm'){
        int i =0;
        float a;
        char p[l-3];
        while(height[i]!=' '){
            p[i]=height[i];
            i++;
		}
        a = atof(p);
        a /= 100;
        printf("%f m\n",a);
        return a;
    }

    else if(height[l-1] == 't'){
        int i = 0;
        float a;
        char p[l-3];
        while(height[i]!=' '){
            p[i]=height[i];
            i++;
		}
        a = atof(p);
        a *= 0.3048;
        printf("%f\n",a);
        return a;
    }
}