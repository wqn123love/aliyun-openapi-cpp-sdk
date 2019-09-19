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

#include <alibabacloud/ons/model/OnsTraceGetResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ons;
using namespace AlibabaCloud::Ons::Model;

OnsTraceGetResultResult::OnsTraceGetResultResult() :
	ServiceResult()
{}

OnsTraceGetResultResult::OnsTraceGetResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OnsTraceGetResultResult::~OnsTraceGetResultResult()
{}

void OnsTraceGetResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto traceDataNode = value["TraceData"];
	if(!traceDataNode["QueryId"].isNull())
		traceData_.queryId = traceDataNode["QueryId"].asString();
	if(!traceDataNode["UserId"].isNull())
		traceData_.userId = traceDataNode["UserId"].asString();
	if(!traceDataNode["Topic"].isNull())
		traceData_.topic = traceDataNode["Topic"].asString();
	if(!traceDataNode["MsgId"].isNull())
		traceData_.msgId = traceDataNode["MsgId"].asString();
	if(!traceDataNode["MsgKey"].isNull())
		traceData_.msgKey = traceDataNode["MsgKey"].asString();
	if(!traceDataNode["Status"].isNull())
		traceData_.status = traceDataNode["Status"].asString();
	if(!traceDataNode["CreateTime"].isNull())
		traceData_.createTime = std::stol(traceDataNode["CreateTime"].asString());
	if(!traceDataNode["UpdateTime"].isNull())
		traceData_.updateTime = std::stol(traceDataNode["UpdateTime"].asString());
	if(!traceDataNode["InstanceId"].isNull())
		traceData_.instanceId = traceDataNode["InstanceId"].asString();
	auto allTraceListNode = traceDataNode["TraceList"]["TraceMapDo"];
	for (auto traceDataNodeTraceListTraceMapDo : allTraceListNode)
	{
		TraceData::TraceMapDo traceMapDoObject;
		if(!traceDataNodeTraceListTraceMapDo["PubTime"].isNull())
			traceMapDoObject.pubTime = std::stol(traceDataNodeTraceListTraceMapDo["PubTime"].asString());
		if(!traceDataNodeTraceListTraceMapDo["Topic"].isNull())
			traceMapDoObject.topic = traceDataNodeTraceListTraceMapDo["Topic"].asString();
		if(!traceDataNodeTraceListTraceMapDo["PubGroupName"].isNull())
			traceMapDoObject.pubGroupName = traceDataNodeTraceListTraceMapDo["PubGroupName"].asString();
		if(!traceDataNodeTraceListTraceMapDo["MsgId"].isNull())
			traceMapDoObject.msgId = traceDataNodeTraceListTraceMapDo["MsgId"].asString();
		if(!traceDataNodeTraceListTraceMapDo["Tag"].isNull())
			traceMapDoObject.tag = traceDataNodeTraceListTraceMapDo["Tag"].asString();
		if(!traceDataNodeTraceListTraceMapDo["MsgKey"].isNull())
			traceMapDoObject.msgKey = traceDataNodeTraceListTraceMapDo["MsgKey"].asString();
		if(!traceDataNodeTraceListTraceMapDo["BornHost"].isNull())
			traceMapDoObject.bornHost = traceDataNodeTraceListTraceMapDo["BornHost"].asString();
		if(!traceDataNodeTraceListTraceMapDo["CostTime"].isNull())
			traceMapDoObject.costTime = std::stoi(traceDataNodeTraceListTraceMapDo["CostTime"].asString());
		if(!traceDataNodeTraceListTraceMapDo["Status"].isNull())
			traceMapDoObject.status = traceDataNodeTraceListTraceMapDo["Status"].asString();
		auto allSubListNode = allTraceListNode["SubList"]["SubMapDo"];
		for (auto allTraceListNodeSubListSubMapDo : allSubListNode)
		{
			TraceData::TraceMapDo::SubMapDo subListObject;
			if(!allTraceListNodeSubListSubMapDo["SubGroupName"].isNull())
				subListObject.subGroupName = allTraceListNodeSubListSubMapDo["SubGroupName"].asString();
			if(!allTraceListNodeSubListSubMapDo["SuccessCount"].isNull())
				subListObject.successCount = std::stoi(allTraceListNodeSubListSubMapDo["SuccessCount"].asString());
			if(!allTraceListNodeSubListSubMapDo["FailCount"].isNull())
				subListObject.failCount = std::stoi(allTraceListNodeSubListSubMapDo["FailCount"].asString());
			auto allClientListNode = allSubListNode["ClientList"]["SubClientInfoDo"];
			for (auto allSubListNodeClientListSubClientInfoDo : allClientListNode)
			{
				TraceData::TraceMapDo::SubMapDo::SubClientInfoDo clientListObject;
				if(!allSubListNodeClientListSubClientInfoDo["SubGroupName"].isNull())
					clientListObject.subGroupName = allSubListNodeClientListSubClientInfoDo["SubGroupName"].asString();
				if(!allSubListNodeClientListSubClientInfoDo["SubTime"].isNull())
					clientListObject.subTime = std::stol(allSubListNodeClientListSubClientInfoDo["SubTime"].asString());
				if(!allSubListNodeClientListSubClientInfoDo["ClientHost"].isNull())
					clientListObject.clientHost = allSubListNodeClientListSubClientInfoDo["ClientHost"].asString();
				if(!allSubListNodeClientListSubClientInfoDo["ReconsumeTimes"].isNull())
					clientListObject.reconsumeTimes = std::stoi(allSubListNodeClientListSubClientInfoDo["ReconsumeTimes"].asString());
				if(!allSubListNodeClientListSubClientInfoDo["CostTime"].isNull())
					clientListObject.costTime = std::stoi(allSubListNodeClientListSubClientInfoDo["CostTime"].asString());
				if(!allSubListNodeClientListSubClientInfoDo["Status"].isNull())
					clientListObject.status = allSubListNodeClientListSubClientInfoDo["Status"].asString();
				subListObject.clientList.push_back(clientListObject);
			}
			traceMapDoObject.subList.push_back(subListObject);
		}
		traceData_.traceList.push_back(traceMapDoObject);
	}
	if(!value["HelpUrl"].isNull())
		helpUrl_ = value["HelpUrl"].asString();

}

OnsTraceGetResultResult::TraceData OnsTraceGetResultResult::getTraceData()const
{
	return traceData_;
}

std::string OnsTraceGetResultResult::getHelpUrl()const
{
	return helpUrl_;
}

