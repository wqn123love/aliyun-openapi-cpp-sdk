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

#include <alibabacloud/mts/model/SubmitImageQualityJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitImageQualityJobRequest;

SubmitImageQualityJobRequest::SubmitImageQualityJobRequest() :
	RpcServiceRequest("mts", "2014-06-18", "SubmitImageQualityJob")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitImageQualityJobRequest::~SubmitImageQualityJobRequest()
{}

long SubmitImageQualityJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitImageQualityJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SubmitImageQualityJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitImageQualityJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SubmitImageQualityJobRequest::getUserData()const
{
	return userData_;
}

void SubmitImageQualityJobRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setParameter("UserData", userData);
}

std::string SubmitImageQualityJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitImageQualityJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SubmitImageQualityJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SubmitImageQualityJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long SubmitImageQualityJobRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitImageQualityJobRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SubmitImageQualityJobRequest::getPipelineId()const
{
	return pipelineId_;
}

void SubmitImageQualityJobRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setParameter("PipelineId", pipelineId);
}

std::string SubmitImageQualityJobRequest::getInput()const
{
	return input_;
}

void SubmitImageQualityJobRequest::setInput(const std::string& input)
{
	input_ = input;
	setParameter("Input", input);
}

