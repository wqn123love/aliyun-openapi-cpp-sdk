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

#ifndef ALIBABACLOUD_MTS_MODEL_SUBMITMCUJOBREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_SUBMITMCUJOBREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/mts/MtsExport.h>

namespace AlibabaCloud
{
	namespace Mts
	{
		namespace Model
		{
			class ALIBABACLOUD_MTS_EXPORT SubmitMcuJobRequest : public RpcServiceRequest
			{

			public:
				SubmitMcuJobRequest();
				~SubmitMcuJobRequest();

				std::string get_Template()const;
				void set_Template(const std::string& _template);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getUserData()const;
				void setUserData(const std::string& userData);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getTemplateId()const;
				void setTemplateId(const std::string& templateId);
				std::string getPipelineId()const;
				void setPipelineId(const std::string& pipelineId);
				std::string getInput()const;
				void setInput(const std::string& input);

            private:
				std::string _template_;
				long resourceOwnerId_;
				std::string accessKeyId_;
				std::string userData_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string templateId_;
				std::string pipelineId_;
				std::string input_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_SUBMITMCUJOBREQUEST_H_