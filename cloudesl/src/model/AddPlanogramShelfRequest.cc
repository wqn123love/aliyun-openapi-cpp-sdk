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

#include <alibabacloud/cloudesl/model/AddPlanogramShelfRequest.h>

using AlibabaCloud::Cloudesl::Model::AddPlanogramShelfRequest;

AddPlanogramShelfRequest::AddPlanogramShelfRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "AddPlanogramShelf")
{
	setMethod(HttpRequest::Method::Post);
}

AddPlanogramShelfRequest::~AddPlanogramShelfRequest()
{}

std::string AddPlanogramShelfRequest::getShelfType()const
{
	return shelfType_;
}

void AddPlanogramShelfRequest::setShelfType(const std::string& shelfType)
{
	shelfType_ = shelfType;
	setBodyParameter("ShelfType", shelfType);
}

std::string AddPlanogramShelfRequest::getStoreId()const
{
	return storeId_;
}

void AddPlanogramShelfRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", storeId);
}

std::string AddPlanogramShelfRequest::getShelf()const
{
	return shelf_;
}

void AddPlanogramShelfRequest::setShelf(const std::string& shelf)
{
	shelf_ = shelf;
	setBodyParameter("Shelf", shelf);
}

