static void render_triforce_animation(void) {
    // Frames
    // 'frame_00_delay-0', 32x32px
    const char epd_bitmap_frame_00_delay_0 [] PROGMEM = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x60,
        0xd0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x5c, 0x35, 0x6b, 0x5d,
        0x2a, 0x37, 0x6a, 0x3c, 0x70, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x60, 0x98, 0x6e, 0xb7, 0xce, 0x78, 0xe0, 0x40, 0x00, 0x00,
        0x00, 0x00, 0x80, 0xe0, 0x18, 0xea, 0x37, 0xda, 0xb4, 0x50, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x04, 0x02, 0x07, 0x01, 0x07, 0x05, 0x03, 0x05, 0x03, 0x06, 0x01, 0x07, 0x04,
        0x04, 0x03, 0x07, 0x05, 0x07, 0x02, 0x07, 0x00, 0x07, 0x00, 0x07, 0x00, 0x06, 0x00, 0x00, 0x00
    };
    // 'frame_04_delay-0', 32x32px
    const char epd_bitmap_frame_04_delay_0 [] PROGMEM = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x60,
        0x90, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x38, 0x46, 0x39, 0x56,
        0x29, 0x56, 0x29, 0x7c, 0x50, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x38, 0xc6, 0x2d, 0xdb, 0xa4, 0x50, 0x80, 0x00,
        0x00, 0x80, 0x40, 0xb0, 0x4c, 0xb3, 0x2c, 0xd2, 0x28, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x02, 0x05, 0x03, 0x00, 0x03, 0x04, 0x02,
        0x06, 0x03, 0x05, 0x06, 0x05, 0x02, 0x04, 0x03, 0x04, 0x01, 0x02, 0x04, 0x00, 0x00, 0x00, 0x00
    };
    // 'frame_08_delay-0', 32x32px
    const char epd_bitmap_frame_08_delay_0 [] PROGMEM = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0,
        0x50, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x48, 0x22, 0x04,
        0x29, 0x52, 0x2d, 0xf8, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x2a, 0x47, 0xad, 0x34, 0x40,
        0x80, 0x00, 0x28, 0x12, 0x45, 0x19, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x03, 0x00, 0x00, 0x05, 0x02,
        0x01, 0x06, 0x01, 0x04, 0x01, 0x04, 0x00, 0x03, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };
    // 'frame_12_delay-0', 32x32px
    const char epd_bitmap_frame_12_delay_0 [] PROGMEM = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70,
        0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x55,
        0xff, 0xfd, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaf, 0x5f,
        0x00, 0x7f, 0xf5, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
        0x00, 0x03, 0x06, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };
    // 'frame_16_delay-0', 32x32px
    const char epd_bitmap_frame_16_delay_0 [] PROGMEM = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd0,
        0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x5a, 0x75,
        0x8c, 0x51, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xb4, 0x4b, 0x90,
        0x2f, 0x55, 0x89, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x01, 0x04, 0x00,
        0x07, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };
    // 'frame_20_delay-0', 32x32px
    const char epd_bitmap_frame_20_delay_0 [] PROGMEM = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x60,
        0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x38, 0x6a, 0x14, 0x69,
        0x12, 0x2d, 0x50, 0x80, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x10, 0xea, 0x04, 0x3b, 0x40, 0xa8, 0x00,
        0x80, 0x50, 0x26, 0xdd, 0x22, 0x8c, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x01, 0x02, 0x04, 0x01, 0x04, 0x03, 0x04, 0x07,
        0x00, 0x03, 0x00, 0x01, 0x02, 0x01, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };
    // 'frame_24_delay-0', 32x32px
    const char epd_bitmap_frame_24_delay_0 [] PROGMEM = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xe0,
        0xb0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x30, 0x7c, 0x5a, 0x77, 0x5e,
        0x75, 0x5f, 0x36, 0x6c, 0x50, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x70, 0xac, 0xfb, 0x5d, 0xb6, 0x78, 0xa0, 0xc0, 0x00,
        0x00, 0x00, 0xa0, 0xe8, 0xde, 0x77, 0xdf, 0xac, 0xf0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x02, 0x05, 0x07, 0x04, 0x07, 0x05, 0x07, 0x07, 0x03, 0x06,
        0x02, 0x05, 0x03, 0x02, 0x03, 0x03, 0x03, 0x03, 0x02, 0x03, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00
    };

    const char* epd_bitmap_allArray[7] = {
        epd_bitmap_frame_00_delay_0,
        epd_bitmap_frame_04_delay_0,
        epd_bitmap_frame_08_delay_0,
        epd_bitmap_frame_12_delay_0,
        epd_bitmap_frame_16_delay_0,
        epd_bitmap_frame_20_delay_0,
        epd_bitmap_frame_24_delay_0
    };

    uint16_t frame_sizes[7] = {
        sizeof(epd_bitmap_frame_00_delay_0),
        sizeof(epd_bitmap_frame_04_delay_0),
        sizeof(epd_bitmap_frame_08_delay_0),
        sizeof(epd_bitmap_frame_12_delay_0),
        sizeof(epd_bitmap_frame_16_delay_0),
        sizeof(epd_bitmap_frame_20_delay_0),
        sizeof(epd_bitmap_frame_24_delay_0)
    };

    if (timer_elapsed(timer) > FRAME_DURATION) {
        // Set timer to updated time
        timer = timer_read();

        // Increment frame
        current_frame = (current_frame + 1) % (sizeof(epd_bitmap_allArray) / sizeof(epd_bitmap_allArray[0]));

        // Draw to OLED
        oled_write_raw_P(epd_bitmap_allArray[current_frame], frame_sizes[current_frame]);
    }
}
