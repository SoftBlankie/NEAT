class Genome {
    public:
        Genome(Neat neat);
        double distance(Genome g2);
        static Genome crossOver(Genome g1, Genome g2);
        void mutate();

        RandomHashSet<ConnectionGene> getConnections();
        RandomHashSet<NodeGene> getNodes();
        Neat getNeat();

    private:
        RandomHashSet<ConnectionGene> connections;
        RandomHashSet<NodeGene> nodes;

        Neat neat;
};

Genome::Genome (Neat neat) {
    this.neat = neat;
}

double Genome::distance(Genome g2) {
    return 0;
}

Genome Genome::crossOver(Genome g1, Genome g2) {
    return NULL;
}

void Genome::mutate() {

}

RandomHashSet<connectionGene> Genome::getConnections() {
    return connections;
}

RandomHashSet<NodeGene> Genome::getNodes() {
    return nodes;
}

Neat Genome::getNeat() {
    return neat;
}
