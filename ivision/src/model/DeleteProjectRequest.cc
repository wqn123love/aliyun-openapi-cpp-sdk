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

#include <alibabacloud/ivision/model/DeleteProjectRequest.h>

using AlibabaCloud::Ivision::Model::DeleteProjectRequest;

DeleteProjectRequest::DeleteProjectRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DeleteProject")
{}

DeleteProjectRequest::~DeleteProjectRequest()
{}

std::string DeleteProjectRequest::getProjectId()const
{
	return projectId_;
}

void DeleteProjectRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string DeleteProjectRequest::getShowLog()const
{
	return showLog_;
}

void DeleteProjectRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

long DeleteProjectRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteProjectRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

