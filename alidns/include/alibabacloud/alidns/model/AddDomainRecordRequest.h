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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_ADDDOMAINRECORDREQUEST_H_
#define ALIBABACLOUD_ALIDNS_MODEL_ADDDOMAINRECORDREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/alidns/AlidnsExport.h>

namespace AlibabaCloud
{
	namespace Alidns
	{
		namespace Model
		{
			class ALIBABACLOUD_ALIDNS_EXPORT AddDomainRecordRequest : public RpcServiceRequest
			{

			public:
				AddDomainRecordRequest();
				~AddDomainRecordRequest();

				std::string getRR()const;
				void setRR(const std::string& rR);
				std::string getLine()const;
				void setLine(const std::string& line);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getValue()const;
				void setValue(const std::string& value);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				long getPriority()const;
				void setPriority(long priority);
				long getTTL()const;
				void setTTL(long tTL);
				std::string getUserClientIp()const;
				void setUserClientIp(const std::string& userClientIp);

            private:
				std::string rR_;
				std::string line_;
				std::string type_;
				std::string accessKeyId_;
				std::string lang_;
				std::string value_;
				std::string domainName_;
				long priority_;
				long tTL_;
				std::string userClientIp_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_ADDDOMAINRECORDREQUEST_H_