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

#ifndef ALIBABACLOUD_IMM_MODEL_COMPAREFACEREQUEST_H_
#define ALIBABACLOUD_IMM_MODEL_COMPAREFACEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/imm/ImmExport.h>

namespace AlibabaCloud
{
	namespace Imm
	{
		namespace Model
		{
			class ALIBABACLOUD_IMM_EXPORT CompareFaceRequest : public RpcServiceRequest
			{

			public:
				CompareFaceRequest();
				~CompareFaceRequest();

				std::string getSrcUriB()const;
				void setSrcUriB(const std::string& srcUriB);
				std::string getSrcUriA()const;
				void setSrcUriA(const std::string& srcUriA);
				std::string getProject()const;
				void setProject(const std::string& project);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string srcUriB_;
				std::string srcUriA_;
				std::string project_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMM_MODEL_COMPAREFACEREQUEST_H_