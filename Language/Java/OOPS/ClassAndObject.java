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
class Service {
    public Data obj;

    public Service() {
        this.obj=new Data();
    }
    public Service(int k) {
        this.obj=new Data(k);
    }

    public int getId() {
        return this.obj.getId();
    }
    public void setId(int id) {
        this.obj.setId(id);
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

        Service obj4=new Service();
        obj4.setId(56);
        Service obj5=new Service(78);
        System.out.println(obj4.getId()+" "+obj5.getId());
    }
}