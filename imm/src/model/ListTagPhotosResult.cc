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

#include <alibabacloud/imm/model/ListTagPhotosResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

ListTagPhotosResult::ListTagPhotosResult() :
	ServiceResult()
{}

ListTagPhotosResult::ListTagPhotosResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTagPhotosResult::~ListTagPhotosResult()
{}

void ListTagPhotosResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPhotosNode = value["Photos"]["PhotosItem"];
	for (auto valuePhotosPhotosItem : allPhotosNode)
	{
		PhotosItem photosObject;
		if(!valuePhotosPhotosItem["SrcUri"].isNull())
			photosObject.srcUri = valuePhotosPhotosItem["SrcUri"].asString();
		if(!valuePhotosPhotosItem["TagScore"].isNull())
			photosObject.tagScore = std::stof(valuePhotosPhotosItem["TagScore"].asString());
		photos_.push_back(photosObject);
	}
	if(!value["NextMarker"].isNull())
		nextMarker_ = value["NextMarker"].asString();

}

std::vector<ListTagPhotosResult::PhotosItem> ListTagPhotosResult::getPhotos()const
{
	return photos_;
}

std::string ListTagPhotosResult::getNextMarker()const
{
	return nextMarker_;
}

