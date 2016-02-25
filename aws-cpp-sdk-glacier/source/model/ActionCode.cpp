/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/glacier/model/ActionCode.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int ArchiveRetrieval_HASH = HashingUtils::HashString("ArchiveRetrieval");
static const int InventoryRetrieval_HASH = HashingUtils::HashString("InventoryRetrieval");

namespace Aws
{
namespace Glacier
{
namespace Model
{
namespace ActionCodeMapper
{


ActionCode GetActionCodeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ArchiveRetrieval_HASH)
  {
     return ActionCode::ArchiveRetrieval;
  }
  else if (hashCode == InventoryRetrieval_HASH)
  {
     return ActionCode::InventoryRetrieval;
  }
  return ActionCode::NOT_SET;
}

Aws::String GetNameForActionCode(ActionCode enumValue)
{
  switch(enumValue)
  {
  case ActionCode::ArchiveRetrieval:
    return "ArchiveRetrieval";
  case ActionCode::InventoryRetrieval:
    return "InventoryRetrieval";
  default:
    return "";
  }
}

} // namespace ActionCodeMapper
} // namespace Model
} // namespace Glacier
} // namespace Aws