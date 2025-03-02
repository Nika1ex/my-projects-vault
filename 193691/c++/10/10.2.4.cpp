struct thing {
 private:
  unsigned id;
  double price;
  double weight;

 public:
  unsigned get_id() { return id; }
  void get_data(double& price, double& weight) {
    price = this->price;
    weight = this->weight;
  }
  void set_data(unsigned id, double price, double weight) {
    this->id = id;
    this->price = price;
    this->weight = weight;
  }
};