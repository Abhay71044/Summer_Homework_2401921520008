interface Playable {
    void play();
}

class Veena implements Playable {

    public void play() {
        System.out.println("Playing Veena");
    }
}

class Saxophone implements Playable {

    public void play() {
        System.out.println("Playing Saxophone");
    }
}

public class Test {
    public static void main(String[] args) {

        // Part A
        Veena v = new Veena();
        v.play();

        // Part B
        Saxophone s = new Saxophone();
        s.play();

        // Part C
        Playable p;

        p = new Veena();
        p.play();

        p = new Saxophone();
        p.play();
    }
}