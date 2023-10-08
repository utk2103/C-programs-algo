#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Structure to represent a term in a polynomial
struct Node {
    int coefficient;
    int exponent;
    struct Node* next;
};

typedef struct Node Node;

// Function to insert a term into a polynomial
void insertTerm(Node** poly, int coeff, int exp) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->coefficient = coeff;
    newNode->exponent = exp;
    newNode->next = NULL;

    if (*poly == NULL) {
        *poly = newNode;
    } else {
        Node* current = *poly;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to add two polynomials
Node* addPolynomials(Node* poly1, Node* poly2) {
    Node* result = NULL;
    while (poly1 != NULL && poly2 != NULL) {
        if (poly1->exponent > poly2->exponent) {
            insertTerm(&result, poly1->coefficient, poly1->exponent);
            poly1 = poly1->next;
        } else if (poly2->exponent > poly1->exponent) {
            insertTerm(&result, poly2->coefficient, poly2->exponent);
            poly2 = poly2->next;
        } else {
            int sumCoeff = poly1->coefficient + poly2->coefficient;
            if (sumCoeff != 0) {
                insertTerm(&result, sumCoeff, poly1->exponent);
            }
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }

    // Append any remaining terms from poly1 and poly2
    while (poly1 != NULL) {
        insertTerm(&result, poly1->coefficient, poly1->exponent);
        poly1 = poly1->next;
    }
    while (poly2 != NULL) {
        insertTerm(&result, poly2->coefficient, poly2->exponent);
        poly2 = poly2->next;
    }

    return result;
}

// Function to display a polynomial
void displayPolynomial(Node* poly) {
    if (poly == NULL) {
        printf("0");
        return;
    }

    while (poly != NULL) {
        printf("%dx^%d", poly->coefficient, poly->exponent);
        if (poly->next != NULL) {
            printf(" + ");
        }
        poly = poly->next;
    }
}

int main() {
    Node* poly1 = NULL;
    Node* poly2 = NULL;

    int n, coeff, exp;

   //printf("Enter the number of terms in the first polynomial: ");
    scanf("%d", &n);

    //printf("Enter the coefficients and exponents for the first polynomial:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &coeff, &exp);
        insertTerm(&poly1, coeff, exp);
    }

    //printf("Enter the number of terms in the second polynomial: ");
    scanf("%d", &n);

    //printf("Enter the coefficients and exponents for the second polynomial:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &coeff, &exp);
        insertTerm(&poly2, coeff, exp);
    }

    Node* sum = addPolynomials(poly1, poly2);

    //printf("Sum of the two polynomials: ");
    displayPolynomial(sum);

    // Free the memory
    while (poly1 != NULL) {
        Node* temp = poly1;
        poly1 = poly1->next;
        free(temp);
    }
    while (poly2 != NULL) {
        Node* temp = poly2;
        poly2 = poly2->next;
        free(temp);
    }
    while (sum != NULL) {
        Node* temp = sum;
        sum = sum->next;
        free(temp);
    }

    return 0;
}