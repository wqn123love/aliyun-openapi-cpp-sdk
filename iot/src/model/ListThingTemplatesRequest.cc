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

#include <alibabacloud/iot/model/ListThingTemplatesRequest.h>

using AlibabaCloud::Iot::Model::ListThingTemplatesRequest;

ListThingTemplatesRequest::ListThingTemplatesRequest() :
	RpcServiceRequest("iot", "2018-01-20", "ListThingTemplates")
{
	setMethod(HttpRequest::Method::Post);
}

ListThingTemplatesRequest::~ListThingTemplatesRequest()
{}

std::string ListThingTemplatesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListThingTemplatesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListThingTemplatesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ListThingTemplatesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ListThingTemplatesRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ListThingTemplatesRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string ListThingTemplatesRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListThingTemplatesRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListThingTemplatesRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListThingTemplatesRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

