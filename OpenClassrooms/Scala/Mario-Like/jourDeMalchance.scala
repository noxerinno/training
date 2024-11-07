import scala.math.abs;

class Personnage{
    var nom : String = "Mario";
    var vie : Int = 10;
    var argent : Int = 0;
    var degats : Int = 1;

    def sauter(){
        println(nom + " a sauté !");
    }

    // def gagnerVie(aGagner:Int){
    //     vie = vie + abs(aGagner);
    // }

    def perdreVie(aPerdre:Int){
        if(vie - abs(aPerdre) > -1){
            vie = vie - abs(aPerdre); 
        }
        else{
            vie = 0;
        }

        println(nom + " a perdu de la vie et a désormais " + vie + " points de vie.");
    }

    def gagnerArgent(aGagner:Int){
        argent = argent + abs(aGagner);

        println(nom + " a gagner de l'argent et a désormais " + argent + " pièces.");
    }

    def perdreArgent(aPerdre:Int){
        if(argent - abs(aPerdre) > -1){
            argent = argent - abs(aPerdre);
        }
        else{
            argent = 0;
        }

        println(nom + " a perdu de l'argent et a désormais " + argent + " pièces.");
    }

    def attaquerBoss(cible:Boss){
        if(cible.vie - degats > -1){
            cible.vie = cible.vie - degats;
        } 
        else{
            cible.vie = 0;
        }

        println(nom + " a attaqué " + cible.nom + " ! " + cible.nom + " a désormais " + vie + "points de vie !");
    }

    def attaquerMonstre(cible:Monstre){
        if(cible.vie - degats > -1){
            cible.vie = cible.vie - degats;
        } 
        else{
            cible.vie = 0;
        }

        println(nom + " a attaqué " + cible.nom + " ! " + cible.nom + " a désormais " + vie + "points de vie !");
    }

    def donnerBisou(cible:Princesse){
        cible.vie += 1;

        println(nom + " a embrassé " + cible.nom);
    }

    def entrerChateau(){

    }

    def estMort(){
        if(vie == 0){
            println(nom + " est mort !");
        }
    }
}

class Monstre{
    var nom : String = "Goumba";
    var vie : Int = 1;
    var degats : Int = 1;

    def attaquerPersonnage(cible:Personnage){
        if(cible.vie - degats > -1){
            cible.vie = cible.vie - degats;
        } 
        else{
            cible.vie = 0;
        }

        println(nom + " a attaqué " + cible.nom + " ! " + cible.nom + " a désormais " + vie + "points de vie !");
    }
            density(i) = (density(i)._1, density(i)._2, populationDensity, superficyDensity);
        }

        return density;
    }

    val density : Array[DensityValues] = density(airports, countries);
    println(density(75));
    //---------------------------------------------------------------------------------------------------------------------(1h00 research - 3h00 programming)
}

    def estMort(){
        if(vie == 0){
            println(nom + " est mort !");
        }
    }  
}

class Boss{
    var nom : String = "Bowser";
    var vie : Int = 1;
    var degats : Int = 2;

    def attaquerPersonnage(cible:Personnage){
        if(cible.vie - degats > -1){
            cible.vie = cible.vie - degats;
        } 
        else{
            cible.vie = 0;
        }

        println(nom + " a attaqué " + cible.nom + " ! " + cible.nom + " a désormais " + vie + "points de vie !");
    } 

    def attaquerBoss(cible:Boss){
        if(cible.vie - degats > -1){
            cible.vie = cible.vie - degats;
        } 
        else{
            cible.vie = 0;
        }

        println(nom + " a attaqué " + cible.nom + " ! " + cible.nom + " a désormais " + vie + "points de vie !");
    }

    def attaquerMonstre(cible:Monstre){
        if(cible.vie - degats > -1){
            cible.vie = cible.vie - degats;
        } 
        else{
            cible.vie = 0;
        }

        println(nom + " a attaqué " + cible.nom + " ! " + cible.nom + " a désormais " + vie + "points de vie !");
    }

    def estMort(){
        if(vie == 0){
            println(nom + " est mort !");
        }
    }    
}

class Princesse{
    var nom : String = "Peach";
    var vie : Int = 1;
    var degats : Int = 1;

    def donnerBisou(cible:Personnage){
        cible.vie += 1;

        println(nom + " a embrassé " + cible.nom);
    } 

    def donnerGifle(cible:Personnage){
        cible.vie -= 1;

        println(nom + " a giflé " + cible.nom);
    }
}

object Main extends App{
    var Mario = new Personnage;
}