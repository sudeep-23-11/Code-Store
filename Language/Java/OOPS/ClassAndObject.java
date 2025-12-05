//ClassAndObject
class Data {
    public int id;
    public static double amt=12.34;

    public Data() {
        this.id=0;
    }
    public Data(int id) {
        this.id=id;
    }
    public Data(Data d) {
        this.id=d.id;
    }

    public int getId() {
        return this.id;
    }
    public void setId(int id) {
        this.id=id;
    }
    public static double getAmt() {
        return amt;
    }
}

public class ClassAndObject {
    public static void main(String[] args) {
        Data obj1=new Data();
        obj1.setId(56);
        System.out.println(obj1.id+" "+obj1.getId());

        Data obj2=new Data(78);
        Data obj3=new Data(obj2);
        System.out.println(obj2.id+" "+obj3.getId());

        System.out.println(Data.amt+" "+Data.getAmt());
    }
}