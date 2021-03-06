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

#include <alibabacloud/ccc/model/ListSurveysRequest.h>

using AlibabaCloud::CCC::Model::ListSurveysRequest;

ListSurveysRequest::ListSurveysRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ListSurveys")
{
	setMethod(HttpRequest::Method::Post);
}

ListSurveysRequest::~ListSurveysRequest()
{}

std::string ListSurveysRequest::getInstanceId()const
{
	return instanceId_;
}

void ListSurveysRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ListSurveysRequest::getScenarioId()const
{
	return scenarioId_;
}

void ListSurveysRequest::setScenarioId(const std::string& scenarioId)
{
	scenarioId_ = scenarioId;
	setParameter("ScenarioId", scenarioId);
}

