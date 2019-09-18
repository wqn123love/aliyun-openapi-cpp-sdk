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

#ifndef ALIBABACLOUD_RAM_MODEL_CREATEUSERREQUEST_H_
#define ALIBABACLOUD_RAM_MODEL_CREATEUSERREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ram/RamExport.h>

namespace AlibabaCloud
{
	namespace Ram
	{
		namespace Model
		{
			class ALIBABACLOUD_RAM_EXPORT CreateUserRequest : public RpcServiceRequest
			{

			public:
				CreateUserRequest();
				~CreateUserRequest();

				std::string getMobilePhone()const;
				void setMobilePhone(const std::string& mobilePhone);
				std::string getEmail()const;
				void setEmail(const std::string& email);
				std::string getComments()const;
				void setComments(const std::string& comments);
				std::string getDisplayName()const;
				void setDisplayName(const std::string& displayName);
				std::string getUserName()const;
				void setUserName(const std::string& userName);

            private:
				std::string mobilePhone_;
				std::string email_;
				std::string comments_;
				std::string displayName_;
				std::string userName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RAM_MODEL_CREATEUSERREQUEST_H_