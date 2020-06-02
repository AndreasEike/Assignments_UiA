import javax.swing.*;
import java.util.ArrayList;
import java.util.Collections;

public class main extends JFrame {

    public static void main(String[] args) {

        ArrayList<String> kortstokk= new ArrayList<>();

        String[] farger = {"Spar", "Kløver", "Ruter", "Hjerter"};

        String[] tall = {"Ess", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Knekt", "Dame", "Konge"};

        for (String s : farger) {
            for (String s1 : tall) {
                kortstokk.add(s+ " "+ s1);
            }
        }

        Collections.shuffle(kortstokk);
        String kort = JOptionPane.showInputDialog("Velg et kort (et tall mellom 0 og 51");
        int kortInt = Integer.parseInt(kort);
        JOptionPane.showMessageDialog(null, "Kortet ditt er " + kortstokk.get(kortInt));
    }

}
