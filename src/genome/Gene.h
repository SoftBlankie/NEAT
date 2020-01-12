cass Gene {
    public:
        Gene();
        int getInnovation_number();
        void setInnovation_number(int innovation_number);

    protected:
        int innovation_number;
};

Gene::Gene() {

}

int Gene::getInnovation_number() {
    return innovation_number;
}

void Gene::setInnovation_number(int innovation_number) {
    this.innovation_number = innovation_number;
}
