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

#include <alibabacloud/ots/model/ListVpcInfoByInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ots;
using namespace AlibabaCloud::Ots::Model;

ListVpcInfoByInstanceResult::ListVpcInfoByInstanceResult() :
	ServiceResult()
{}

ListVpcInfoByInstanceResult::ListVpcInfoByInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVpcInfoByInstanceResult::~ListVpcInfoByInstanceResult()
{}

void ListVpcInfoByInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVpcInfosNode = value["VpcInfos"]["VpcInfo"];
	for (auto valueVpcInfosVpcInfo : allVpcInfosNode)
	{
		VpcInfo vpcInfosObject;
		if(!valueVpcInfosVpcInfo["InstanceVpcName"].isNull())
			vpcInfosObject.instanceVpcName = valueVpcInfosVpcInfo["InstanceVpcName"].asString();
		if(!valueVpcInfosVpcInfo["VpcId"].isNull())
			vpcInfosObject.vpcId = valueVpcInfosVpcInfo["VpcId"].asString();
		if(!valueVpcInfosVpcInfo["Endpoint"].isNull())
			vpcInfosObject.endpoint = valueVpcInfosVpcInfo["Endpoint"].asString();
		if(!valueVpcInfosVpcInfo["Domain"].isNull())
			vpcInfosObject.domain = valueVpcInfosVpcInfo["Domain"].asString();
		if(!valueVpcInfosVpcInfo["RegionNo"].isNull())
			vpcInfosObject.regionNo = valueVpcInfosVpcInfo["RegionNo"].asString();
		vpcInfos_.push_back(vpcInfosObject);
	}
	if(!value["InstanceName"].isNull())
		instanceName_ = value["InstanceName"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNum"].isNull())
		pageNum_ = std::stol(value["PageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

std::string ListVpcInfoByInstanceResult::getInstanceName()const
{
	return instanceName_;
}

long ListVpcInfoByInstanceResult::getTotalCount()const
{
	return totalCount_;
}

long ListVpcInfoByInstanceResult::getPageNum()const
{
	return pageNum_;
}

long ListVpcInfoByInstanceResult::getPageSize()const
{
	return pageSize_;
}

std::vector<ListVpcInfoByInstanceResult::VpcInfo> ListVpcInfoByInstanceResult::getVpcInfos()const
{
	return vpcInfos_;
}

