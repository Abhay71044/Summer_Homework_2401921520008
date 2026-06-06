public class LibraryInterfaceDemo {

    public static void main(String[] args) {

        System.out.println("===== Kid User Tests =====");

        KidUser kid = new KidUser();

        // Age = 10
        kid.age = 10;
        kid.registerAccount();

        // Age = 18
        kid.age = 18;
        kid.registerAccount();

        // Book = Kids
        kid.bookType = "Kids";
        kid.requestBook();

        // Book = Fiction
        kid.bookType = "Fiction";
        kid.requestBook();

        System.out.println();

        System.out.println("===== Adult User Tests =====");

        AdultUser adult = new AdultUser();

        // Age = 5
        adult.age = 5;
        adult.registerAccount();

        // Age = 23
        adult.age = 23;
        adult.registerAccount();

        // Book = Kids
        adult.bookType = "Kids";
        adult.requestBook();

        // Book = Fiction
        adult.bookType = "Fiction";
        adult.requestBook();
    }
} 