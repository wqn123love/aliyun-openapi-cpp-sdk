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

#include <alibabacloud/emr/model/MetastoreListDataSourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

MetastoreListDataSourceResult::MetastoreListDataSourceResult() :
	ServiceResult()
{}

MetastoreListDataSourceResult::MetastoreListDataSourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

MetastoreListDataSourceResult::~MetastoreListDataSourceResult()
{}

void MetastoreListDataSourceResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allDataSourceList = value["DataSourceList"]["DataSource"];
	for (auto value : allDataSourceList)
	{
		DataSource dataSourceListObject;
		if(!value["Id"].isNull())
			dataSourceListObject.id = value["Id"].asString();
		if(!value["Name"].isNull())
			dataSourceListObject.name = value["Name"].asString();
		if(!value["SourceType"].isNull())
			dataSourceListObject.sourceType = value["SourceType"].asString();
		if(!value["Description"].isNull())
			dataSourceListObject.description = value["Description"].asString();
		if(!value["ConnectionInfo"].isNull())
			dataSourceListObject.connectionInfo = value["ConnectionInfo"].asString();
		if(!value["ClusterBizId"].isNull())
			dataSourceListObject.clusterBizId = value["ClusterBizId"].asString();
		if(!value["ClusterName"].isNull())
			dataSourceListObject.clusterName = value["ClusterName"].asString();
		if(!value["UserId"].isNull())
			dataSourceListObject.userId = value["UserId"].asString();
		if(!value["GmtCreate"].isNull())
			dataSourceListObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["GmtModified"].isNull())
			dataSourceListObject.gmtModified = std::stol(value["GmtModified"].asString());
		if(!value["Capacity"].isNull())
			dataSourceListObject.capacity = std::stol(value["Capacity"].asString());
		if(!value["UsedSize"].isNull())
			dataSourceListObject.usedSize = std::stol(value["UsedSize"].asString());
		auto allConfigList = value["ConfigList"]["Config"];
		for (auto value : allConfigList)
		{
			DataSource::Config configListObject;
			if(!value["ConfigName"].isNull())
				configListObject.configName = value["ConfigName"].asString();
			if(!value["Value"].isNull())
				configListObject.value = value["Value"].asString();
			dataSourceListObject.configList.push_back(configListObject);
		}
		dataSourceList_.push_back(dataSourceListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int MetastoreListDataSourceResult::getTotalCount()const
{
	return totalCount_;
}

int MetastoreListDataSourceResult::getPageSize()const
{
	return pageSize_;
}

int MetastoreListDataSourceResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<MetastoreListDataSourceResult::DataSource> MetastoreListDataSourceResult::getDataSourceList()const
{
	return dataSourceList_;
}

