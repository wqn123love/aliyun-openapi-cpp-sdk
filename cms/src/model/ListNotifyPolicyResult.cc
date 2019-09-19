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

#include <alibabacloud/cms/model/ListNotifyPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

ListNotifyPolicyResult::ListNotifyPolicyResult() :
	ServiceResult()
{}

ListNotifyPolicyResult::ListNotifyPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNotifyPolicyResult::~ListNotifyPolicyResult()
{}

void ListNotifyPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNotifyPolicyListNode = value["NotifyPolicyList"]["NotifyPolicy"];
	for (auto valueNotifyPolicyListNotifyPolicy : allNotifyPolicyListNode)
	{
		NotifyPolicy notifyPolicyListObject;
		if(!valueNotifyPolicyListNotifyPolicy["AlertName"].isNull())
			notifyPolicyListObject.alertName = valueNotifyPolicyListNotifyPolicy["AlertName"].asString();
		if(!valueNotifyPolicyListNotifyPolicy["Dimensions"].isNull())
			notifyPolicyListObject.dimensions = valueNotifyPolicyListNotifyPolicy["Dimensions"].asString();
		if(!valueNotifyPolicyListNotifyPolicy["Type"].isNull())
			notifyPolicyListObject.type = valueNotifyPolicyListNotifyPolicy["Type"].asString();
		if(!valueNotifyPolicyListNotifyPolicy["Id"].isNull())
			notifyPolicyListObject.id = valueNotifyPolicyListNotifyPolicy["Id"].asString();
		if(!valueNotifyPolicyListNotifyPolicy["StartTime"].isNull())
			notifyPolicyListObject.startTime = std::stol(valueNotifyPolicyListNotifyPolicy["StartTime"].asString());
		if(!valueNotifyPolicyListNotifyPolicy["EndTime"].isNull())
			notifyPolicyListObject.endTime = std::stol(valueNotifyPolicyListNotifyPolicy["EndTime"].asString());
		if(!valueNotifyPolicyListNotifyPolicy["GroupId"].isNull())
			notifyPolicyListObject.groupId = valueNotifyPolicyListNotifyPolicy["GroupId"].asString();
		notifyPolicyList_.push_back(notifyPolicyListObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

std::vector<ListNotifyPolicyResult::NotifyPolicy> ListNotifyPolicyResult::getNotifyPolicyList()const
{
	return notifyPolicyList_;
}

std::string ListNotifyPolicyResult::getMessage()const
{
	return message_;
}

int ListNotifyPolicyResult::getTotal()const
{
	return total_;
}

std::string ListNotifyPolicyResult::getCode()const
{
	return code_;
}

std::string ListNotifyPolicyResult::getSuccess()const
{
	return success_;
}

