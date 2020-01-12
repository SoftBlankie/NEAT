class ConnectionGene {
    public:
        ConnectionGene(NodeGene from, NodeGene to);
        bool equals(std::any o);
        int hashCode();

        NodeGene getFrom();
        void setFrom(NodeGene from);
        NodeGene getTo();
        void setTo(NodeGene to);
        double getWeight();
        void setWeight(double weight);
        bool isEnabled();
        void setEnabled(bool enabled);

    private:
        NodeGene from;
        NodeGene to;

        double weight;
        bool enabled;
}

ConnectionGene::ConnectionGene(NodeGene from, NodeGen to) {
    this.from = from;
    this.to = to;
}

bool ConnectionGene::equals(std::any o) {
    if (ConnectionGene* v = dynamic_case<ConnectionGene*>(o)) {
        return from.equals(v.from) && to.equals(v.to);
    }
    return false;
}

int ConnectionGene::hashCode() {
    return from.getInnovation_number()
        * Neat.MAX_NODES + to.getInnovation_number();
}

NodeGene ConnectionGene::getFrom() {
    return from;
}

void ConnectionGene::setFrom() {
    this.from = from;
}

NodeGene ConnectionGene::getTo() {
    return to;
}

void ConnectionGene::setTo(NodeGene to) {
    this.to = to;
}

double ConnectionGene::getWeight() {
    return weight;
}

void ConnectionGene::setWeight(double weight) {
    this.weight = weight;
}

bool ConnectionGene::isEnabled() {
    return enabled;
}

void ConnectionGene::setEnabled(bool enabled) {
    this.enabled = enabled;
}
