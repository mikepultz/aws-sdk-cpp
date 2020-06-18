﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Support
{
namespace Model
{

  /**
   * <p>A code and name pair that represents the severity level of a support case.
   * The available values depend on the support plan for the account. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/awssupport/latest/user/case-management.html#choosing-severity">Choosing
   * a severity</a> in the <i>AWS Support User Guide</i>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/SeverityLevel">AWS
   * API Reference</a></p>
   */
  class AWS_SUPPORT_API SeverityLevel
  {
  public:
    SeverityLevel();
    SeverityLevel(Aws::Utils::Json::JsonView jsonValue);
    SeverityLevel& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The code for case severity level.</p> <p>Valid values: <code>low</code> |
     * <code>normal</code> | <code>high</code> | <code>urgent</code> |
     * <code>critical</code> </p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The code for case severity level.</p> <p>Valid values: <code>low</code> |
     * <code>normal</code> | <code>high</code> | <code>urgent</code> |
     * <code>critical</code> </p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The code for case severity level.</p> <p>Valid values: <code>low</code> |
     * <code>normal</code> | <code>high</code> | <code>urgent</code> |
     * <code>critical</code> </p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The code for case severity level.</p> <p>Valid values: <code>low</code> |
     * <code>normal</code> | <code>high</code> | <code>urgent</code> |
     * <code>critical</code> </p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The code for case severity level.</p> <p>Valid values: <code>low</code> |
     * <code>normal</code> | <code>high</code> | <code>urgent</code> |
     * <code>critical</code> </p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The code for case severity level.</p> <p>Valid values: <code>low</code> |
     * <code>normal</code> | <code>high</code> | <code>urgent</code> |
     * <code>critical</code> </p>
     */
    inline SeverityLevel& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The code for case severity level.</p> <p>Valid values: <code>low</code> |
     * <code>normal</code> | <code>high</code> | <code>urgent</code> |
     * <code>critical</code> </p>
     */
    inline SeverityLevel& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The code for case severity level.</p> <p>Valid values: <code>low</code> |
     * <code>normal</code> | <code>high</code> | <code>urgent</code> |
     * <code>critical</code> </p>
     */
    inline SeverityLevel& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>The name of the severity level that corresponds to the severity level
     * code.</p> <note> <p>The values returned by the API differ from the values that
     * are displayed in the AWS Support Center. For example, for the code "low", the
     * API name is "Low", but the name in the Support Center is "General guidance".
     * These are the Support Center code/name mappings:</p> <ul> <li> <p>
     * <code>low</code>: General guidance</p> </li> <li> <p> <code>normal</code>:
     * System impaired</p> </li> <li> <p> <code>high</code>: Production system
     * impaired</p> </li> <li> <p> <code>urgent</code>: Production system down</p>
     * </li> <li> <p> <code>critical</code>: Business-critical system down</p> </li>
     * </ul> </note> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/case-management.html#choosing-severity">Choosing
     * a severity</a> in the <i>AWS Support User Guide</i>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the severity level that corresponds to the severity level
     * code.</p> <note> <p>The values returned by the API differ from the values that
     * are displayed in the AWS Support Center. For example, for the code "low", the
     * API name is "Low", but the name in the Support Center is "General guidance".
     * These are the Support Center code/name mappings:</p> <ul> <li> <p>
     * <code>low</code>: General guidance</p> </li> <li> <p> <code>normal</code>:
     * System impaired</p> </li> <li> <p> <code>high</code>: Production system
     * impaired</p> </li> <li> <p> <code>urgent</code>: Production system down</p>
     * </li> <li> <p> <code>critical</code>: Business-critical system down</p> </li>
     * </ul> </note> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/case-management.html#choosing-severity">Choosing
     * a severity</a> in the <i>AWS Support User Guide</i>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the severity level that corresponds to the severity level
     * code.</p> <note> <p>The values returned by the API differ from the values that
     * are displayed in the AWS Support Center. For example, for the code "low", the
     * API name is "Low", but the name in the Support Center is "General guidance".
     * These are the Support Center code/name mappings:</p> <ul> <li> <p>
     * <code>low</code>: General guidance</p> </li> <li> <p> <code>normal</code>:
     * System impaired</p> </li> <li> <p> <code>high</code>: Production system
     * impaired</p> </li> <li> <p> <code>urgent</code>: Production system down</p>
     * </li> <li> <p> <code>critical</code>: Business-critical system down</p> </li>
     * </ul> </note> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/case-management.html#choosing-severity">Choosing
     * a severity</a> in the <i>AWS Support User Guide</i>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the severity level that corresponds to the severity level
     * code.</p> <note> <p>The values returned by the API differ from the values that
     * are displayed in the AWS Support Center. For example, for the code "low", the
     * API name is "Low", but the name in the Support Center is "General guidance".
     * These are the Support Center code/name mappings:</p> <ul> <li> <p>
     * <code>low</code>: General guidance</p> </li> <li> <p> <code>normal</code>:
     * System impaired</p> </li> <li> <p> <code>high</code>: Production system
     * impaired</p> </li> <li> <p> <code>urgent</code>: Production system down</p>
     * </li> <li> <p> <code>critical</code>: Business-critical system down</p> </li>
     * </ul> </note> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/case-management.html#choosing-severity">Choosing
     * a severity</a> in the <i>AWS Support User Guide</i>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the severity level that corresponds to the severity level
     * code.</p> <note> <p>The values returned by the API differ from the values that
     * are displayed in the AWS Support Center. For example, for the code "low", the
     * API name is "Low", but the name in the Support Center is "General guidance".
     * These are the Support Center code/name mappings:</p> <ul> <li> <p>
     * <code>low</code>: General guidance</p> </li> <li> <p> <code>normal</code>:
     * System impaired</p> </li> <li> <p> <code>high</code>: Production system
     * impaired</p> </li> <li> <p> <code>urgent</code>: Production system down</p>
     * </li> <li> <p> <code>critical</code>: Business-critical system down</p> </li>
     * </ul> </note> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/case-management.html#choosing-severity">Choosing
     * a severity</a> in the <i>AWS Support User Guide</i>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the severity level that corresponds to the severity level
     * code.</p> <note> <p>The values returned by the API differ from the values that
     * are displayed in the AWS Support Center. For example, for the code "low", the
     * API name is "Low", but the name in the Support Center is "General guidance".
     * These are the Support Center code/name mappings:</p> <ul> <li> <p>
     * <code>low</code>: General guidance</p> </li> <li> <p> <code>normal</code>:
     * System impaired</p> </li> <li> <p> <code>high</code>: Production system
     * impaired</p> </li> <li> <p> <code>urgent</code>: Production system down</p>
     * </li> <li> <p> <code>critical</code>: Business-critical system down</p> </li>
     * </ul> </note> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/case-management.html#choosing-severity">Choosing
     * a severity</a> in the <i>AWS Support User Guide</i>.</p>
     */
    inline SeverityLevel& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the severity level that corresponds to the severity level
     * code.</p> <note> <p>The values returned by the API differ from the values that
     * are displayed in the AWS Support Center. For example, for the code "low", the
     * API name is "Low", but the name in the Support Center is "General guidance".
     * These are the Support Center code/name mappings:</p> <ul> <li> <p>
     * <code>low</code>: General guidance</p> </li> <li> <p> <code>normal</code>:
     * System impaired</p> </li> <li> <p> <code>high</code>: Production system
     * impaired</p> </li> <li> <p> <code>urgent</code>: Production system down</p>
     * </li> <li> <p> <code>critical</code>: Business-critical system down</p> </li>
     * </ul> </note> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/case-management.html#choosing-severity">Choosing
     * a severity</a> in the <i>AWS Support User Guide</i>.</p>
     */
    inline SeverityLevel& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the severity level that corresponds to the severity level
     * code.</p> <note> <p>The values returned by the API differ from the values that
     * are displayed in the AWS Support Center. For example, for the code "low", the
     * API name is "Low", but the name in the Support Center is "General guidance".
     * These are the Support Center code/name mappings:</p> <ul> <li> <p>
     * <code>low</code>: General guidance</p> </li> <li> <p> <code>normal</code>:
     * System impaired</p> </li> <li> <p> <code>high</code>: Production system
     * impaired</p> </li> <li> <p> <code>urgent</code>: Production system down</p>
     * </li> <li> <p> <code>critical</code>: Business-critical system down</p> </li>
     * </ul> </note> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/case-management.html#choosing-severity">Choosing
     * a severity</a> in the <i>AWS Support User Guide</i>.</p>
     */
    inline SeverityLevel& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
