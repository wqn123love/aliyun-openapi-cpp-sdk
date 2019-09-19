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

#include <alibabacloud/rds/model/DescribeSlowLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeSlowLogsResult::DescribeSlowLogsResult() :
	ServiceResult()
{}

DescribeSlowLogsResult::DescribeSlowLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSlowLogsResult::~DescribeSlowLogsResult()
{}

void DescribeSlowLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["SQLSlowLog"];
	for (auto valueItemsSQLSlowLog : allItemsNode)
	{
		SQLSlowLog itemsObject;
		if(!valueItemsSQLSlowLog["SlowLogId"].isNull())
			itemsObject.slowLogId = std::stol(valueItemsSQLSlowLog["SlowLogId"].asString());
		if(!valueItemsSQLSlowLog["SQLHASH"].isNull())
			itemsObject.sQLHASH = valueItemsSQLSlowLog["SQLHASH"].asString();
		if(!valueItemsSQLSlowLog["SQLIdStr"].isNull())
			itemsObject.sQLIdStr = valueItemsSQLSlowLog["SQLIdStr"].asString();
		if(!valueItemsSQLSlowLog["DBName"].isNull())
			itemsObject.dBName = valueItemsSQLSlowLog["DBName"].asString();
		if(!valueItemsSQLSlowLog["SQLText"].isNull())
			itemsObject.sQLText = valueItemsSQLSlowLog["SQLText"].asString();
		if(!valueItemsSQLSlowLog["MySQLTotalExecutionCounts"].isNull())
			itemsObject.mySQLTotalExecutionCounts = std::stol(valueItemsSQLSlowLog["MySQLTotalExecutionCounts"].asString());
		if(!valueItemsSQLSlowLog["MySQLTotalExecutionTimes"].isNull())
			itemsObject.mySQLTotalExecutionTimes = std::stol(valueItemsSQLSlowLog["MySQLTotalExecutionTimes"].asString());
		if(!valueItemsSQLSlowLog["TotalLockTimes"].isNull())
			itemsObject.totalLockTimes = std::stol(valueItemsSQLSlowLog["TotalLockTimes"].asString());
		if(!valueItemsSQLSlowLog["MaxLockTime"].isNull())
			itemsObject.maxLockTime = std::stol(valueItemsSQLSlowLog["MaxLockTime"].asString());
		if(!valueItemsSQLSlowLog["ParseTotalRowCounts"].isNull())
			itemsObject.parseTotalRowCounts = std::stol(valueItemsSQLSlowLog["ParseTotalRowCounts"].asString());
		if(!valueItemsSQLSlowLog["ParseMaxRowCount"].isNull())
			itemsObject.parseMaxRowCount = std::stol(valueItemsSQLSlowLog["ParseMaxRowCount"].asString());
		if(!valueItemsSQLSlowLog["ReturnTotalRowCounts"].isNull())
			itemsObject.returnTotalRowCounts = std::stol(valueItemsSQLSlowLog["ReturnTotalRowCounts"].asString());
		if(!valueItemsSQLSlowLog["ReturnMaxRowCount"].isNull())
			itemsObject.returnMaxRowCount = std::stol(valueItemsSQLSlowLog["ReturnMaxRowCount"].asString());
		if(!valueItemsSQLSlowLog["CreateTime"].isNull())
			itemsObject.createTime = valueItemsSQLSlowLog["CreateTime"].asString();
		if(!valueItemsSQLSlowLog["SQLServerTotalExecutionCounts"].isNull())
			itemsObject.sQLServerTotalExecutionCounts = std::stol(valueItemsSQLSlowLog["SQLServerTotalExecutionCounts"].asString());
		if(!valueItemsSQLSlowLog["SQLServerTotalExecutionTimes"].isNull())
			itemsObject.sQLServerTotalExecutionTimes = std::stol(valueItemsSQLSlowLog["SQLServerTotalExecutionTimes"].asString());
		if(!valueItemsSQLSlowLog["TotalLogicalReadCounts"].isNull())
			itemsObject.totalLogicalReadCounts = std::stol(valueItemsSQLSlowLog["TotalLogicalReadCounts"].asString());
		if(!valueItemsSQLSlowLog["TotalPhysicalReadCounts"].isNull())
			itemsObject.totalPhysicalReadCounts = std::stol(valueItemsSQLSlowLog["TotalPhysicalReadCounts"].asString());
		if(!valueItemsSQLSlowLog["ReportTime"].isNull())
			itemsObject.reportTime = valueItemsSQLSlowLog["ReportTime"].asString();
		if(!valueItemsSQLSlowLog["MaxExecutionTime"].isNull())
			itemsObject.maxExecutionTime = std::stol(valueItemsSQLSlowLog["MaxExecutionTime"].asString());
		if(!valueItemsSQLSlowLog["AvgExecutionTime"].isNull())
			itemsObject.avgExecutionTime = std::stol(valueItemsSQLSlowLog["AvgExecutionTime"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeSlowLogsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeSlowLogsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

std::string DescribeSlowLogsResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeSlowLogsResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

int DescribeSlowLogsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeSlowLogsResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeSlowLogsResult::SQLSlowLog> DescribeSlowLogsResult::getItems()const
{
	return items_;
}

std::string DescribeSlowLogsResult::getEngine()const
{
	return engine_;
}

