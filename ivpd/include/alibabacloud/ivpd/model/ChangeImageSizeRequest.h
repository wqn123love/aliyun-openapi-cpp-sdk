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

#ifndef ALIBABACLOUD_IVPD_MODEL_CHANGEIMAGESIZEREQUEST_H_
#define ALIBABACLOUD_IVPD_MODEL_CHANGEIMAGESIZEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ivpd/IvpdExport.h>

namespace AlibabaCloud
{
	namespace Ivpd
	{
		namespace Model
		{
			class ALIBABACLOUD_IVPD_EXPORT ChangeImageSizeRequest : public RpcServiceRequest
			{

			public:
				ChangeImageSizeRequest();
				~ChangeImageSizeRequest();

				std::string getUrl()const;
				void setUrl(const std::string& url);
				int getWidth()const;
				void setWidth(int width);
				int getHeight()const;
				void setHeight(int height);

            private:
				std::string url_;
				int width_;
				int height_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IVPD_MODEL_CHANGEIMAGESIZEREQUEST_H_