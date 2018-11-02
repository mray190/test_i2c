/* Copyright (c) 2018 ARM Limited
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
 */
#include "mbed.h"
#include "LightController.h"
 
// Read temperature from LM75BD

MCP4725 mcp(I2C_SDA0, I2C_SCL0); 

int main() {
    printf("Add Device\r\n");
    mcp.wake_up();
    mcp.reset();
    while (1) {
        printf("On\r\n");
        mcp.set_level(255);
        wait(5);
        printf("Off\r\n");
        mcp.set_level(0);
        wait(5);
    }
}
