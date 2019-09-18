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

#include <alibabacloud/iot/model/QueryEdgeInstanceHistoricDeploymentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryEdgeInstanceHistoricDeploymentResult::QueryEdgeInstanceHistoricDeploymentResult() :
	ServiceResult()
{}

QueryEdgeInstanceHistoricDeploymentResult::QueryEdgeInstanceHistoricDeploymentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryEdgeInstanceHistoricDeploymentResult::~QueryEdgeInstanceHistoricDeploymentResult()
{}

void QueryEdgeInstanceHistoricDeploymentResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	auto allDeploymentList = value["DeploymentList"]["Deployment"];
	for (auto value : allDeploymentList)
	{
		Data::Deployment deploymentObject;
		if(!value["GmtCreate"].isNull())
			deploymentObject.gmtCreate = value["GmtCreate"].asString();
		if(!value["GmtModified"].isNull())
			deploymentObject.gmtModified = value["GmtModified"].asString();
		if(!value["GmtCompleted"].isNull())
			deploymentObject.gmtCompleted = value["GmtCompleted"].asString();
		if(!value["DeploymentId"].isNull())
			deploymentObject.deploymentId = value["DeploymentId"].asString();
		if(!value["Description"].isNull())
			deploymentObject.description = value["Description"].asString();
		if(!value["Status"].isNull())
			deploymentObject.status = std::stoi(value["Status"].asString());
		if(!value["Type"].isNull())
			deploymentObject.type = value["Type"].asString();
		data_.deploymentList.push_back(deploymentObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

QueryEdgeInstanceHistoricDeploymentResult::Data QueryEdgeInstanceHistoricDeploymentResult::getData()const
{
	return data_;
}

std::string QueryEdgeInstanceHistoricDeploymentResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryEdgeInstanceHistoricDeploymentResult::getCode()const
{
	return code_;
}

bool QueryEdgeInstanceHistoricDeploymentResult::getSuccess()const
{
	return success_;
}

