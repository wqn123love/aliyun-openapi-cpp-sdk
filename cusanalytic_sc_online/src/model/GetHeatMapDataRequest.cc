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

#include <alibabacloud/cusanalytic_sc_online/model/GetHeatMapDataRequest.h>

using AlibabaCloud::Cusanalytic_sc_online::Model::GetHeatMapDataRequest;

GetHeatMapDataRequest::GetHeatMapDataRequest() :
	RpcServiceRequest("cusanalytic_sc_online", "2019-05-24", "GetHeatMapData")
{
	setMethod(HttpRequest::Method::Post);
}

GetHeatMapDataRequest::~GetHeatMapDataRequest()
{}

std::string GetHeatMapDataRequest::getEMapName()const
{
	return eMapName_;
}

void GetHeatMapDataRequest::setEMapName(const std::string& eMapName)
{
	eMapName_ = eMapName;
	setBodyParameter("EMapName", eMapName);
}

long GetHeatMapDataRequest::getStoreId()const
{
	return storeId_;
}

void GetHeatMapDataRequest::setStoreId(long storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", std::to_string(storeId));
}

std::string GetHeatMapDataRequest::getStatDate()const
{
	return statDate_;
}

void GetHeatMapDataRequest::setStatDate(const std::string& statDate)
{
	statDate_ = statDate;
	setBodyParameter("StatDate", statDate);
}

