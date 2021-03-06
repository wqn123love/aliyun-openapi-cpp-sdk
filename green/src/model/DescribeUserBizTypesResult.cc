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

#include <alibabacloud/green/model/DescribeUserBizTypesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeUserBizTypesResult::DescribeUserBizTypesResult() :
	ServiceResult()
{}

DescribeUserBizTypesResult::DescribeUserBizTypesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUserBizTypesResult::~DescribeUserBizTypesResult()
{}

void DescribeUserBizTypesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBizTypeListNode = value["BizTypeList"]["item"];
	for (auto valueBizTypeListitem : allBizTypeListNode)
	{
		Item bizTypeListObject;
		if(!valueBizTypeListitem["BizType"].isNull())
			bizTypeListObject.bizType = valueBizTypeListitem["BizType"].asString();
		if(!valueBizTypeListitem["SourceBizType"].isNull())
			bizTypeListObject.sourceBizType = valueBizTypeListitem["SourceBizType"].asString();
		if(!valueBizTypeListitem["Gray"].isNull())
			bizTypeListObject.gray = valueBizTypeListitem["Gray"].asString() == "true";
		if(!valueBizTypeListitem["Source"].isNull())
			bizTypeListObject.source = valueBizTypeListitem["Source"].asString();
		if(!valueBizTypeListitem["CiteTemplate"].isNull())
			bizTypeListObject.citeTemplate = valueBizTypeListitem["CiteTemplate"].asString() == "true";
		if(!valueBizTypeListitem["IndustryInfo"].isNull())
			bizTypeListObject.industryInfo = valueBizTypeListitem["IndustryInfo"].asString();
		bizTypeList_.push_back(bizTypeListObject);
	}
	auto allBizTypeListImportNode = value["BizTypeListImport"]["item"];
	for (auto valueBizTypeListImportitem : allBizTypeListImportNode)
	{
		Item bizTypeListImportObject;
		if(!valueBizTypeListImportitem["BizType"].isNull())
			bizTypeListImportObject.bizType = valueBizTypeListImportitem["BizType"].asString();
		if(!valueBizTypeListImportitem["SourceBizType"].isNull())
			bizTypeListImportObject.sourceBizType = valueBizTypeListImportitem["SourceBizType"].asString();
		if(!valueBizTypeListImportitem["Gray"].isNull())
			bizTypeListImportObject.gray = valueBizTypeListImportitem["Gray"].asString() == "true";
		if(!valueBizTypeListImportitem["Source"].isNull())
			bizTypeListImportObject.source = valueBizTypeListImportitem["Source"].asString();
		if(!valueBizTypeListImportitem["CiteTemplate"].isNull())
			bizTypeListImportObject.citeTemplate = valueBizTypeListImportitem["CiteTemplate"].asString() == "true";
		if(!valueBizTypeListImportitem["IndustryInfo"].isNull())
			bizTypeListImportObject.industryInfo = valueBizTypeListImportitem["IndustryInfo"].asString();
		bizTypeListImport_.push_back(bizTypeListImportObject);
	}

}

std::vector<DescribeUserBizTypesResult::Item> DescribeUserBizTypesResult::getBizTypeList()const
{
	return bizTypeList_;
}

std::vector<DescribeUserBizTypesResult::Item> DescribeUserBizTypesResult::getBizTypeListImport()const
{
	return bizTypeListImport_;
}

