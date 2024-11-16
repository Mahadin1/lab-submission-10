#include<stdio.h>
#include<string.h>

struct movie {
    char title[50];
    char genre[50];
    char director[50];
    int releaseYear;
    float rating;
};

void display(struct movie m) {
    printf("Movie Details:\n");
    printf("Title: %s\n", m.title);
    printf("Genre: %s\n", m.genre);
    printf("Director: %s\n", m.director);
    printf("Release Year: %d\n", m.releaseYear);
    printf("Rating: %.2f\n", m.rating);
}

int main() {
    struct movie movies[10] = {
        {"inception", "Sci-Fi", "Christopher Nolan", 2010, 8.8}, 
        {"titanic", "Romance", "James Cameron", 1997, 7.8}, 
        {"avatar", "Action", "James Cameron", 2009, 8.0}, 
        {"the Dark Knight", "Action", "Christopher Nolan", 2008, 9.0},
        {"the Godfather", "Crime", "Francis Ford Coppola", 1972, 9.2}
    };
    int filledMovies = 5;
    int num = 0;
    
    while(1) {
        printf("1.Search movie\n2.Display movie list\n3.Add movie\n4.Exit\n");
        scanf("%d", &num);
        
        if (num == 1) {
            printf("1.Search by title\n2.Search by genre\n");
            int op;
            scanf("%d", &op);
            
            if (op == 1) {
                char title[50];
                printf("Enter title: \n");
                scanf("%s", &title);
                int found = 0;
                for (int i = 0; i < filledMovies; i++) {
                    if (strstr(movies[i].title, title)) {
                        display(movies[i]);
                        found = 1;
                    }
                }
                if (!found) {
                    printf("No movie found\n");
                }
            } else if (op == 2) {
                char genre[50];
                printf("Enter genre: \n");
                scanf("%s", &genre);
                int found = 0;
                for (int i = 0; i < filledMovies; i++) {
                    if (strstr(movies[i].genre, genre)) {
                        display(movies[i]);
                        found = 1;
                    }
                }
                if (!found) {
                    printf("No movie found\n");
                }
            }
        } 
        else if (num == 2) {
            for (int i = 0; i < filledMovies; i++) {
                display(movies[i]);
                printf("\n");
            }
        } 
        else if (num == 3) {
            int n = filledMovies;
            printf("Enter movie details:\n");
            printf("Title: ");
            scanf("%s", movies[n].title);
            printf("Genre: ");
            scanf("%s", movies[n].genre);
            printf("Director: ");
            scanf("%s", movies[n].director);
            printf("Release Year: ");
            scanf("%d", &movies[n].releaseYear);
            printf("Rating: ");
            scanf("%f", &movies[n].rating);
            filledMovies++;
            printf("Movie added successfully.\n");
        } 
        else if (num == 4) {
            break; 
        } else {
            printf("Invalid option, please try again.\n");
        }
    }

    return 0;
}
