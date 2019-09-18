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

#include <alibabacloud/imm/model/UpdateSetRequest.h>

using AlibabaCloud::Imm::Model::UpdateSetRequest;

UpdateSetRequest::UpdateSetRequest() :
	RpcServiceRequest("imm", "2017-09-06", "UpdateSet")
{}

UpdateSetRequest::~UpdateSetRequest()
{}

std::string UpdateSetRequest::getProject()const
{
	return project_;
}

void UpdateSetRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string UpdateSetRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateSetRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string UpdateSetRequest::getSetName()const
{
	return setName_;
}

void UpdateSetRequest::setSetName(const std::string& setName)
{
	setName_ = setName;
	setCoreParameter("SetName", setName);
}

std::string UpdateSetRequest::getSetId()const
{
	return setId_;
}

void UpdateSetRequest::setSetId(const std::string& setId)
{
	setId_ = setId;
	setCoreParameter("SetId", setId);
}

