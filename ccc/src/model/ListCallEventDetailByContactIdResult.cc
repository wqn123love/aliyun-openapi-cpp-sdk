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

#include <alibabacloud/ccc/model/ListCallEventDetailByContactIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListCallEventDetailByContactIdResult::ListCallEventDetailByContactIdResult() :
	ServiceResult()
{}

ListCallEventDetailByContactIdResult::ListCallEventDetailByContactIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCallEventDetailByContactIdResult::~ListCallEventDetailByContactIdResult()
{}

void ListCallEventDetailByContactIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Caller"].isNull())
		data_.caller = dataNode["Caller"].asString();
	if(!dataNode["Callee"].isNull())
		data_.callee = dataNode["Callee"].asString();
	if(!dataNode["CallType"].isNull())
		data_.callType = dataNode["CallType"].asString();
	if(!dataNode["StartTime"].isNull())
		data_.startTime = dataNode["StartTime"].asString();
	if(!dataNode["PrivacyNumber"].isNull())
		data_.privacyNumber = dataNode["PrivacyNumber"].asString();
	if(!dataNode["ReleaseAgent"].isNull())
		data_.releaseAgent = dataNode["ReleaseAgent"].asString();
	if(!dataNode["ReleaseReason"].isNull())
		data_.releaseReason = dataNode["ReleaseReason"].asString();
	auto allEventsNode = dataNode["Events"]["CallEventDetail"];
	for (auto dataNodeEventsCallEventDetail : allEventsNode)
	{
		Data::CallEventDetail callEventDetailObject;
		if(!dataNodeEventsCallEventDetail["TimeStamp"].isNull())
			callEventDetailObject.timeStamp = dataNodeEventsCallEventDetail["TimeStamp"].asString();
		if(!dataNodeEventsCallEventDetail["Event"].isNull())
			callEventDetailObject.event = dataNodeEventsCallEventDetail["Event"].asString();
		if(!dataNodeEventsCallEventDetail["AgentName"].isNull())
			callEventDetailObject.agentName = dataNodeEventsCallEventDetail["AgentName"].asString();
		if(!dataNodeEventsCallEventDetail["Status"].isNull())
			callEventDetailObject.status = dataNodeEventsCallEventDetail["Status"].asString();
		if(!dataNodeEventsCallEventDetail["CallMode"].isNull())
			callEventDetailObject.callMode = dataNodeEventsCallEventDetail["CallMode"].asString();
		if(!dataNodeEventsCallEventDetail["Duration"].isNull())
			callEventDetailObject.duration = std::stoi(dataNodeEventsCallEventDetail["Duration"].asString());
		auto detailDataNode = value["DetailData"];
		if(!detailDataNode["EventType"].isNull())
			callEventDetailObject.detailData.eventType = detailDataNode["EventType"].asString();
		if(!detailDataNode["Helper"].isNull())
			callEventDetailObject.detailData.helper = detailDataNode["Helper"].asString();
		if(!detailDataNode["SatisfactionalResearch"].isNull())
			callEventDetailObject.detailData.satisfactionalResearch = detailDataNode["SatisfactionalResearch"].asString();
		if(!detailDataNode["SkillGroup"].isNull())
			callEventDetailObject.detailData.skillGroup = detailDataNode["SkillGroup"].asString();
		if(!detailDataNode["HangUper"].isNull())
			callEventDetailObject.detailData.hangUper = detailDataNode["HangUper"].asString();
		data_.events.push_back(callEventDetailObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string ListCallEventDetailByContactIdResult::getMessage()const
{
	return message_;
}

int ListCallEventDetailByContactIdResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListCallEventDetailByContactIdResult::Data ListCallEventDetailByContactIdResult::getData()const
{
	return data_;
}

std::string ListCallEventDetailByContactIdResult::getCode()const
{
	return code_;
}

bool ListCallEventDetailByContactIdResult::getSuccess()const
{
	return success_;
}

