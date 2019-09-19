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

#include <alibabacloud/emr/model/GetFlowAuditLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

GetFlowAuditLogsResult::GetFlowAuditLogsResult() :
	ServiceResult()
{}

GetFlowAuditLogsResult::GetFlowAuditLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetFlowAuditLogsResult::~GetFlowAuditLogsResult()
{}

void GetFlowAuditLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Item"];
	for (auto valueItemsItem : allItemsNode)
	{
		Item itemsObject;
		if(!valueItemsItem["Ts"].isNull())
			itemsObject.ts = std::stol(valueItemsItem["Ts"].asString());
		if(!valueItemsItem["UserId"].isNull())
			itemsObject.userId = valueItemsItem["UserId"].asString();
		if(!valueItemsItem["OperatorId"].isNull())
			itemsObject.operatorId = valueItemsItem["OperatorId"].asString();
		if(!valueItemsItem["EntityId"].isNull())
			itemsObject.entityId = valueItemsItem["EntityId"].asString();
		if(!valueItemsItem["EntityType"].isNull())
			itemsObject.entityType = valueItemsItem["EntityType"].asString();
		if(!valueItemsItem["EntityGroupId"].isNull())
			itemsObject.entityGroupId = valueItemsItem["EntityGroupId"].asString();
		if(!valueItemsItem["Operation"].isNull())
			itemsObject.operation = valueItemsItem["Operation"].asString();
		if(!valueItemsItem["Status"].isNull())
			itemsObject.status = valueItemsItem["Status"].asString();
		if(!valueItemsItem["Content"].isNull())
			itemsObject.content = valueItemsItem["Content"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int GetFlowAuditLogsResult::getTotalCount()const
{
	return totalCount_;
}

int GetFlowAuditLogsResult::getPageSize()const
{
	return pageSize_;
}

int GetFlowAuditLogsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<GetFlowAuditLogsResult::Item> GetFlowAuditLogsResult::getItems()const
{
	return items_;
}

