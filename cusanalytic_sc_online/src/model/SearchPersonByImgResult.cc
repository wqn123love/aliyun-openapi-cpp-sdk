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

#include <alibabacloud/cusanalytic_sc_online/model/SearchPersonByImgResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cusanalytic_sc_online;
using namespace AlibabaCloud::Cusanalytic_sc_online::Model;

SearchPersonByImgResult::SearchPersonByImgResult() :
	ServiceResult()
{}

SearchPersonByImgResult::SearchPersonByImgResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchPersonByImgResult::~SearchPersonByImgResult()
{}

void SearchPersonByImgResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPersonSearchResultItemsNode = value["PersonSearchResultItems"]["PersonSearchResultItem"];
	for (auto valuePersonSearchResultItemsPersonSearchResultItem : allPersonSearchResultItemsNode)
	{
		PersonSearchResultItem personSearchResultItemsObject;
		if(!valuePersonSearchResultItemsPersonSearchResultItem["FaceId"].isNull())
			personSearchResultItemsObject.faceId = valuePersonSearchResultItemsPersonSearchResultItem["FaceId"].asString();
		if(!valuePersonSearchResultItemsPersonSearchResultItem["UkId"].isNull())
			personSearchResultItemsObject.ukId = valuePersonSearchResultItemsPersonSearchResultItem["UkId"].asString();
		if(!valuePersonSearchResultItemsPersonSearchResultItem["Score"].isNull())
			personSearchResultItemsObject.score = std::stof(valuePersonSearchResultItemsPersonSearchResultItem["Score"].asString());
		personSearchResultItems_.push_back(personSearchResultItemsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();

}

std::string SearchPersonByImgResult::getMsg()const
{
	return msg_;
}

std::vector<SearchPersonByImgResult::PersonSearchResultItem> SearchPersonByImgResult::getPersonSearchResultItems()const
{
	return personSearchResultItems_;
}

bool SearchPersonByImgResult::getSuccess()const
{
	return success_;
}

