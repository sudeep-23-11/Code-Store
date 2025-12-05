package data;
public abstract class AC {
    public int id;
    
    public AC() {
        this.id=0;
    }
    public int getId() {
        return this.id;
    }
    public abstract void display();
}