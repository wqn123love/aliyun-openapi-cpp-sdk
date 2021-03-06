/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/facebody/model/RecognizeFaceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Facebody;
using namespace AlibabaCloud::Facebody::Model;

RecognizeFaceResult::RecognizeFaceResult() :
	ServiceResult()
{}

RecognizeFaceResult::RecognizeFaceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RecognizeFaceResult::~RecognizeFaceResult()
{}

void RecognizeFaceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["FaceCount"].isNull())
		data_.faceCount = std::stoi(dataNode["FaceCount"].asString());
	if(!dataNode["LandmarkCount"].isNull())
		data_.landmarkCount = std::stoi(dataNode["LandmarkCount"].asString());
	if(!dataNode["DenseFeatureLength"].isNull())
		data_.denseFeatureLength = std::stoi(dataNode["DenseFeatureLength"].asString());
		auto allFaceRectangles = dataNode["FaceRectangles"]["FaceRectangle"];
		for (auto value : allFaceRectangles)
			data_.faceRectangles.push_back(value.asString());
		auto allFaceProbabilityList = dataNode["FaceProbabilityList"]["FaceProbability"];
		for (auto value : allFaceProbabilityList)
			data_.faceProbabilityList.push_back(value.asString());
		auto allPoseList = dataNode["PoseList"]["Pose"];
		for (auto value : allPoseList)
			data_.poseList.push_back(value.asString());
		auto allLandmarks = dataNode["Landmarks"]["Landmark"];
		for (auto value : allLandmarks)
			data_.landmarks.push_back(value.asString());
		auto allPupils = dataNode["Pupils"]["Pupil"];
		for (auto value : allPupils)
			data_.pupils.push_back(value.asString());
		auto allGenderList = dataNode["GenderList"]["Gender"];
		for (auto value : allGenderList)
			data_.genderList.push_back(value.asString());
		auto allAgeList = dataNode["AgeList"]["Age"];
		for (auto value : allAgeList)
			data_.ageList.push_back(value.asString());
		auto allExpressions = dataNode["Expressions"]["Expression"];
		for (auto value : allExpressions)
			data_.expressions.push_back(value.asString());
		auto allGlasses = dataNode["Glasses"]["Glass"];
		for (auto value : allGlasses)
			data_.glasses.push_back(value.asString());
		auto allDenseFeatures = dataNode["DenseFeatures"]["DenseFeature"];
		for (auto value : allDenseFeatures)
			data_.denseFeatures.push_back(value.asString());

}

RecognizeFaceResult::Data RecognizeFaceResult::getData()const
{
	return data_;
}

