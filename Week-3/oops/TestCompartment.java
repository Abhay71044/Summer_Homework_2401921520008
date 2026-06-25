import java.util.Random;

abstract class Compartment {

    public abstract String notice();

}

class FirstClass extends Compartment {

    public String notice() {
        return "First Class Compartment";
    }

}

class Ladies extends Compartment {

    public String notice() {
        return "Ladies Compartment";
    }

}

class General extends Compartment {

    public String notice() {
        return "General Compartment";
    }

}

class Luggage extends Compartment {

    public String notice() {
        return "Luggage Compartment";
    }

}

public class TestCompartment {

    public static void main(String[] args) {

        Compartment arr[] = new Compartment[10];
        Random r = new Random();

        for(int i = 0; i < 10; i++) {

            int num = r.nextInt(4) + 1;

            if(num == 1) {
                arr[i] = new FirstClass();
            }
            else if(num == 2) {
                arr[i] = new Ladies();
            }
            else if(num == 3) {
                arr[i] = new General();
            }
            else {
                arr[i] = new Luggage();
            }
        }

        System.out.println("Compartments Generated:");

        for(int i = 0; i < 10; i++) {
            System.out.println((i + 1) + ". " + arr[i].notice());
        }
    }
}