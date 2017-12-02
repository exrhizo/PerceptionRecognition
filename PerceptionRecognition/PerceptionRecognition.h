#ifndef PR_TYPES_HEADER
#define PR_TYPES_HEADER

class   {
 public:
  PerceptionRecognition(std::string name) : _name(name) {
    _InitData();
  }

  static *PerceptionRecognition LoadPreset(string name) {
    // switch (name) {
    //   case "": {
        
    //     break;
    //   }
    // }
    return new PerceptionRecognition(name);
  }

  void RecordStream();




 private:
  
  std::string name;
  int _dataset_dimensions;


  GRT::TimeSeriesClassificationDataStream _classification_stream;

  void _InitData();

}

#endif