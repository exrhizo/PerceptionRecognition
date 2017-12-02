

PerceptionRecognition::_InitData() {
	_classification_stream.setDatasetName(_name);	
	_classification_stream.setNumDimensions(_dataset_dimensions)
}

PerceptionRecognition::RecordStream() {
	for (int i=0; i<100; i++) {
		std::cout << "counting to " << i << std::endl;
	}
}

PerceptionRecognition::setInfoText(std::string info) {
	_classification_stream.setInfoText(info);
}