public class A{
	int x = 0;
    int getX(){
    	return x;
    }
}

public class Main {
  public static void main(String[] args) {
    A myObj = new A();
    myObj.x = 7;
    
    
    System.out.println(myObj.getX());
  }
}

