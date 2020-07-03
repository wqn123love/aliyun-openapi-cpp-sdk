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

#include <alibabacloud/airec/model/ListRuleTasksRequest.h>

using AlibabaCloud::Airec::Model::ListRuleTasksRequest;

ListRuleTasksRequest::ListRuleTasksRequest() :
	RoaServiceRequest("airec", "2018-10-12")
{
	setResourcePath("/openapi/instances/[InstanceId]/rule-tasks");
	setMethod(HttpRequest::Method::Get);
}

ListRuleTasksRequest::~ListRuleTasksRequest()
{}

std::string ListRuleTasksRequest::getInstanceId()const
{
	return instanceId_;
}

void ListRuleTasksRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ListRuleTasksRequest::getSceneId()const
{
	return sceneId_;
}

void ListRuleTasksRequest::setSceneId(const std::string& sceneId)
{
	sceneId_ = sceneId;
	setParameter("SceneId", sceneId);
}
