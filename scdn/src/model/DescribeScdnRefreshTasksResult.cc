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

#include <alibabacloud/scdn/model/DescribeScdnRefreshTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scdn;
using namespace AlibabaCloud::Scdn::Model;

DescribeScdnRefreshTasksResult::DescribeScdnRefreshTasksResult() :
	ServiceResult()
{}

DescribeScdnRefreshTasksResult::DescribeScdnRefreshTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScdnRefreshTasksResult::~DescribeScdnRefreshTasksResult()
{}

void DescribeScdnRefreshTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTasks = value["Tasks"]["Task"];
	for (auto value : allTasks)
	{
		Task tasksObject;
		if(!value["TaskId"].isNull())
			tasksObject.taskId = value["TaskId"].asString();
		if(!value["ObjectPath"].isNull())
			tasksObject.objectPath = value["ObjectPath"].asString();
		if(!value["Process"].isNull())
			tasksObject.process = value["Process"].asString();
		if(!value["Status"].isNull())
			tasksObject.status = value["Status"].asString();
		if(!value["CreationTime"].isNull())
			tasksObject.creationTime = value["CreationTime"].asString();
		if(!value["Description"].isNull())
			tasksObject.description = value["Description"].asString();
		if(!value["ObjectType"].isNull())
			tasksObject.objectType = value["ObjectType"].asString();
		tasks_.push_back(tasksObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long DescribeScdnRefreshTasksResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeScdnRefreshTasksResult::Task> DescribeScdnRefreshTasksResult::getTasks()const
{
	return tasks_;
}

long DescribeScdnRefreshTasksResult::getPageSize()const
{
	return pageSize_;
}

long DescribeScdnRefreshTasksResult::getPageNumber()const
{
	return pageNumber_;
}

