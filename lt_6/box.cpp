class box{
    int l,b,h;
    public:
    box():l(0),b(0),h(0){}
    box(int a,int d,int c):l(a),b(d),h(c){}
    box(const box& B){
        l=B.getL();
        b=B.getB();
        h=B.getH();
    }
    int getL()const{return l;}
    int getB()const{return b;}
    int getH()const{return h;}
    int getVolumn()const{return l*b*h;}
    bool operator<(const box &a){
        if(this->getVolumn()<a.getVolumn()){
            return true;
        }else{
            return false;
        }
    } 
    // void operator<<(const box& a){
    //     cout<<a.getL()<<" "<<a.getB()<<" "<<a.getH();
    // }
    friend ostream& operator<<(ostream& out, box& B)
    {
        cout << B.l << " " << B.b << " " << B.h;      
       
};