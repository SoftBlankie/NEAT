class NodeGene : public Gene {
    public:
        NodeGene(int innovation_number);
        bool equals();
        int hashCode();
        
        double getX();
        void setX(double x);
        double getY();
        void setY(double y);

    private:
        double x,y;
};

NodeGene::NodeGene(int innovation_number) {
    Gene(innovation_number);
}

bool NodeGene::equals(std::any o) {
    if (NodeGene* v = dynamic_cast<NodeGene*>(o)) {
        return innovation_number == v.getInnovation_number();
    }
    return false;
}

int NodeGene::hashCode() {
    return innovation_number
}

double NodeGene::getX() {
    return x;
}

void NodeGene::setX(double x) {
    this.x = x;
}

double NodeGene::getY() {
    return y;
}

void NodeGene::setY(double y) {
    this.y = y;
}
