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

#include <alibabacloud/vod/model/CreateUploadAttachedMediaRequest.h>

using AlibabaCloud::Vod::Model::CreateUploadAttachedMediaRequest;

CreateUploadAttachedMediaRequest::CreateUploadAttachedMediaRequest() :
	RpcServiceRequest("vod", "2017-03-21", "CreateUploadAttachedMedia")
{}

CreateUploadAttachedMediaRequest::~CreateUploadAttachedMediaRequest()
{}

long CreateUploadAttachedMediaRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateUploadAttachedMediaRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateUploadAttachedMediaRequest::getIcon()const
{
	return icon_;
}

void CreateUploadAttachedMediaRequest::setIcon(const std::string& icon)
{
	icon_ = icon;
	setCoreParameter("Icon", icon);
}

std::string CreateUploadAttachedMediaRequest::getDescription()const
{
	return description_;
}

void CreateUploadAttachedMediaRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateUploadAttachedMediaRequest::getFileSize()const
{
	return fileSize_;
}

void CreateUploadAttachedMediaRequest::setFileSize(const std::string& fileSize)
{
	fileSize_ = fileSize;
	setCoreParameter("FileSize", fileSize);
}

std::string CreateUploadAttachedMediaRequest::getTitle()const
{
	return title_;
}

void CreateUploadAttachedMediaRequest::setTitle(const std::string& title)
{
	title_ = title;
	setCoreParameter("Title", title);
}

std::string CreateUploadAttachedMediaRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateUploadAttachedMediaRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateUploadAttachedMediaRequest::getBusinessType()const
{
	return businessType_;
}

void CreateUploadAttachedMediaRequest::setBusinessType(const std::string& businessType)
{
	businessType_ = businessType;
	setCoreParameter("BusinessType", businessType);
}

std::string CreateUploadAttachedMediaRequest::getStorageLocation()const
{
	return storageLocation_;
}

void CreateUploadAttachedMediaRequest::setStorageLocation(const std::string& storageLocation)
{
	storageLocation_ = storageLocation;
	setCoreParameter("StorageLocation", storageLocation);
}

std::string CreateUploadAttachedMediaRequest::getUserData()const
{
	return userData_;
}

void CreateUploadAttachedMediaRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setCoreParameter("UserData", userData);
}

long CreateUploadAttachedMediaRequest::getCateId()const
{
	return cateId_;
}

void CreateUploadAttachedMediaRequest::setCateId(long cateId)
{
	cateId_ = cateId;
	setCoreParameter("CateId", std::to_string(cateId));
}

std::string CreateUploadAttachedMediaRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateUploadAttachedMediaRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateUploadAttachedMediaRequest::getCateIds()const
{
	return cateIds_;
}

void CreateUploadAttachedMediaRequest::setCateIds(const std::string& cateIds)
{
	cateIds_ = cateIds;
	setCoreParameter("CateIds", cateIds);
}

long CreateUploadAttachedMediaRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateUploadAttachedMediaRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateUploadAttachedMediaRequest::getTags()const
{
	return tags_;
}

void CreateUploadAttachedMediaRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", tags);
}

std::string CreateUploadAttachedMediaRequest::getMediaExt()const
{
	return mediaExt_;
}

void CreateUploadAttachedMediaRequest::setMediaExt(const std::string& mediaExt)
{
	mediaExt_ = mediaExt;
	setCoreParameter("MediaExt", mediaExt);
}

std::string CreateUploadAttachedMediaRequest::getFileName()const
{
	return fileName_;
}

void CreateUploadAttachedMediaRequest::setFileName(const std::string& fileName)
{
	fileName_ = fileName;
	setCoreParameter("FileName", fileName);
}

std::string CreateUploadAttachedMediaRequest::getAppId()const
{
	return appId_;
}

void CreateUploadAttachedMediaRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

