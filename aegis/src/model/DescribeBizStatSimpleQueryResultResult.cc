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

#include <alibabacloud/aegis/model/DescribeBizStatSimpleQueryResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeBizStatSimpleQueryResultResult::DescribeBizStatSimpleQueryResultResult() :
	ServiceResult()
{}

DescribeBizStatSimpleQueryResultResult::DescribeBizStatSimpleQueryResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBizStatSimpleQueryResultResult::~DescribeBizStatSimpleQueryResultResult()
{}

void DescribeBizStatSimpleQueryResultResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allTrendDataArr = value["TrendDataArr"]["BizStatTrendDOS"];
	for (auto value : allTrendDataArr)
	{
		BizStatTrendDOS trendDataArrObject;
		if(!value["BizName"].isNull())
			trendDataArrObject.bizName = value["BizName"].asString();
		auto allValueArray = value["ValueArray"]["IntegerItem"];
		for (auto value : allValueArray)
			trendDataArrObject.valueArray.push_back(value.asString());
		trendDataArr_.push_back(trendDataArrObject);
	}
	auto allDataTimeArray = value["DataTimeArray"]["StringItem"];
	for (const auto &item : allDataTimeArray)
		dataTimeArray_.push_back(item.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeBizStatSimpleQueryResultResult::BizStatTrendDOS> DescribeBizStatSimpleQueryResultResult::getTrendDataArr()const
{
	return trendDataArr_;
}

std::vector<std::string> DescribeBizStatSimpleQueryResultResult::getDataTimeArray()const
{
	return dataTimeArray_;
}

bool DescribeBizStatSimpleQueryResultResult::getSuccess()const
{
	return success_;
}
