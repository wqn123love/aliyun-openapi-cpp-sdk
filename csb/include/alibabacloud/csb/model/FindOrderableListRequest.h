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

#ifndef ALIBABACLOUD_CSB_MODEL_FINDORDERABLELISTREQUEST_H_
#define ALIBABACLOUD_CSB_MODEL_FINDORDERABLELISTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/csb/CSBExport.h>

namespace AlibabaCloud
{
	namespace CSB
	{
		namespace Model
		{
			class ALIBABACLOUD_CSB_EXPORT FindOrderableListRequest : public RpcServiceRequest
			{

			public:
				FindOrderableListRequest();
				~FindOrderableListRequest();

				std::string getProjectName()const;
				void setProjectName(const std::string& projectName);
				long getCsbId()const;
				void setCsbId(long csbId);
				int getPageNum()const;
				void setPageNum(int pageNum);
				std::string getAlias()const;
				void setAlias(const std::string& alias);
				std::string getServiceName()const;
				void setServiceName(const std::string& serviceName);

            private:
				std::string projectName_;
				long csbId_;
				int pageNum_;
				std::string alias_;
				std::string serviceName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CSB_MODEL_FINDORDERABLELISTREQUEST_H_