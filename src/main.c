#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>
#include <zephyr/drivers/gpio.h>

LOG_MODULE_REGISTER(main, 4);

static struct gpio_dt_spec ledBlue = GPIO_DT_SPEC_GET(DT_ALIAS(led1), gpios);

int main(void)
{
  gpio_pin_configure_dt(&ledBlue, GPIO_OUTPUT_ACTIVE); // returns int (leaving that unhandled unless this ever fails)
	bool led_on = 1;
	for(;;){
			led_on = !led_on;
			gpio_pin_set_dt(&ledBlue, led_on);
			LOG_ERR("blink");
			k_msleep(500);
	}
	// TODO: put actual smp svr code here
}