/*******************************************************************************
* File Name: cycfg_clocks.c
*
* Description:
* Clock configuration
* This file was automatically generated and should not be modified.
* 
********************************************************************************
* Copyright 2017-2019 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#include "cycfg_clocks.h"

#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_USB_UART_CLK_DIV_obj = 
	{
		.type = CYHAL_RSC_CLOCK,
		.block_num = CYBSP_USB_UART_CLK_DIV_HW,
		.channel_num = CYBSP_USB_UART_CLK_DIV_NUM,
	};
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_SDIO_CLK_DIV_obj = 
	{
		.type = CYHAL_RSC_CLOCK,
		.block_num = CYBSP_SDIO_CLK_DIV_HW,
		.channel_num = CYBSP_SDIO_CLK_DIV_NUM,
	};
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_CSD_COMM_CLK_DIV_obj = 
	{
		.type = CYHAL_RSC_CLOCK,
		.block_num = CYBSP_CSD_COMM_CLK_DIV_HW,
		.channel_num = CYBSP_CSD_COMM_CLK_DIV_NUM,
	};
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t peri_0_div_8_3_obj = 
	{
		.type = CYHAL_RSC_CLOCK,
		.block_num = peri_0_div_8_3_HW,
		.channel_num = peri_0_div_8_3_NUM,
	};
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_CSD_CLK_DIV_obj = 
	{
		.type = CYHAL_RSC_CLOCK,
		.block_num = CYBSP_CSD_CLK_DIV_HW,
		.channel_num = CYBSP_CSD_CLK_DIV_NUM,
	};
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_SPI_CLK_DIV_obj = 
	{
		.type = CYHAL_RSC_CLOCK,
		.block_num = CYBSP_SPI_CLK_DIV_HW,
		.channel_num = CYBSP_SPI_CLK_DIV_NUM,
	};
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_WL_UART_CLK_DIV_obj = 
	{
		.type = CYHAL_RSC_CLOCK,
		.block_num = CYBSP_WL_UART_CLK_DIV_HW,
		.channel_num = CYBSP_WL_UART_CLK_DIV_NUM,
	};
#endif //defined (CY_USING_HAL)


void init_cycfg_clocks(void)
{
	Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_16_BIT, 0U);
	Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_16_BIT, 0U, 999U);
	Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_16_BIT, 0U);
#if defined (CY_USING_HAL)
		cyhal_hwmgr_reserve(&CYBSP_USB_UART_CLK_DIV_obj);
#endif //defined (CY_USING_HAL)

	Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_8_BIT, 0U);
	Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_8_BIT, 0U, 0U);
	Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_8_BIT, 0U);
#if defined (CY_USING_HAL)
		cyhal_hwmgr_reserve(&CYBSP_SDIO_CLK_DIV_obj);
#endif //defined (CY_USING_HAL)

	Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_8_BIT, 1U);
	Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_8_BIT, 1U, 7U);
	Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_8_BIT, 1U);
#if defined (CY_USING_HAL)
		cyhal_hwmgr_reserve(&CYBSP_CSD_COMM_CLK_DIV_obj);
#endif //defined (CY_USING_HAL)

	Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_8_BIT, 3U);
	Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_8_BIT, 3U, 108U);
	Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_8_BIT, 3U);
#if defined (CY_USING_HAL)
		cyhal_hwmgr_reserve(&peri_0_div_8_3_obj);
#endif //defined (CY_USING_HAL)

	Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_8_BIT, 4U);
	Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_8_BIT, 4U, 255U);
	Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_8_BIT, 4U);
#if defined (CY_USING_HAL)
		cyhal_hwmgr_reserve(&CYBSP_CSD_CLK_DIV_obj);
#endif //defined (CY_USING_HAL)

	Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_8_BIT, 5U);
	Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_8_BIT, 5U, 6U);
	Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_8_BIT, 5U);
#if defined (CY_USING_HAL)
		cyhal_hwmgr_reserve(&CYBSP_SPI_CLK_DIV_obj);
#endif //defined (CY_USING_HAL)

	Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_8_BIT, 6U);
	Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_8_BIT, 6U, 108U);
	Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_8_BIT, 6U);
#if defined (CY_USING_HAL)
		cyhal_hwmgr_reserve(&CYBSP_WL_UART_CLK_DIV_obj);
#endif //defined (CY_USING_HAL)
}
